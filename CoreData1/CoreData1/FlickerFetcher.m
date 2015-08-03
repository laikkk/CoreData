//
//  FlickerFetcher.m
//  CoreData1
//
//  Created by Kamil Zielinski on 29/07/15.
//  Copyright (c) 2015 Kamil Zielinski. All rights reserved.
//

#import "FlickerFetcher.h"
#import "AFNetworking.h"

@implementation FlickerFetcher

+(NSArray *) DownloadPhotosAndFinishWithBlock:(void (^)(id))callbackBlock
{
    NSString * flickrURLPhotoPattern = @"https://farm%@.staticflickr.com/%@/%@_%@.jpg";
    
    NSURL *URL = [NSURL URLWithString: @"https://api.flickr.com/services/rest/?method=flickr.photos.search&api_key=225e7371b0188122ae34437bf7ea02c2&lat=54.351497&lon=18.653048&radius=1&per_page=20&format=json&nojsoncallback=1"];
    NSURLRequest *request = [NSURLRequest requestWithURL:URL];
    
    AFHTTPRequestOperation *operation = [[AFHTTPRequestOperation alloc] initWithRequest:request];
    operation.responseSerializer = [AFJSONResponseSerializer serializer];
    
    __block NSArray *photosToReturn;
    
    [operation setCompletionBlockWithSuccess:^(AFHTTPRequestOperation *operation, id responseObject) {
        NSLog(@"%@", responseObject);
        
        //Get photos object
        NSDictionary *photos = [responseObject valueForKey:@"photos"];
        
        //Get photo array of objects
        NSArray *photoArray = [photos valueForKey:@"photo"];
        
        photosToReturn = photoArray;
        
        for (int i=0; i< photoArray.count; i++) {
            NSValue *farmId = [(NSDictionary *)photoArray[i] valueForKey:@"farm"];
            NSValue *serverId = [(NSDictionary *)photoArray[i] valueForKey:@"server"];
            NSValue *idOfPhoto = [(NSDictionary *)photoArray[i] valueForKey:@"id"];
            NSValue *secret = [(NSDictionary *)photoArray[i] valueForKey:@"secret"];
            
            NSString *urlTOPhoto = [NSString stringWithFormat:flickrURLPhotoPattern,farmId,serverId,idOfPhoto,secret];
            NSLog(@"%@",urlTOPhoto);
        }
        
        callbackBlock(photosToReturn);
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        NSLog(@"Error: %@", error);
    }];
    
    [operation start];
    
    return photosToReturn;
}

@end
