//
//  Photo.h
//  
//
//  Created by Kamil Zielinski on 29/07/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Photo : NSManagedObject

@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * owner;
@property (nonatomic, retain) NSString * secret;
@property (nonatomic, retain) NSNumber * server;
@property (nonatomic, retain) NSNumber * farm;

@end
