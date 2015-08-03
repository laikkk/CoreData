//
//  FlickerFetcher.h
//  CoreData1
//
//  Created by Kamil Zielinski on 29/07/15.
//  Copyright (c) 2015 Kamil Zielinski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FlickerFetcher : NSObject
+(NSArray *) DownloadPhotosAndFinishWithBlock:(void (^)(id))callbackBlock;
@end
