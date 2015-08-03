//
//  Photo.h
//  CoreData1
//
//  Created by Kamil Zielinski on 03/08/15.
//  Copyright (c) 2015 Kamil Zielinski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Photo : NSManagedObject

@property (nonatomic, retain) NSNumber * farm;
@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * owner;
@property (nonatomic, retain) NSString * secret;
@property (nonatomic, retain) NSNumber * server;
@property (nonatomic, retain) NSString * title;

@end
