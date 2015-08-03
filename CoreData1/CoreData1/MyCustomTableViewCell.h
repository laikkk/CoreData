//
//  MyCustomTableViewCell.h
//  CoreData1
//
//  Created by Kamil Zielinski on 31/07/15.
//  Copyright (c) 2015 Kamil Zielinski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyCustomTableViewCell : UITableViewCell


@property (weak, nonatomic) IBOutlet UILabel *title;
@property (weak, nonatomic) IBOutlet UILabel *Id;
@property (weak, nonatomic) IBOutlet UILabel *owner;
@property (weak, nonatomic) IBOutlet UILabel *server;
@property (weak, nonatomic) IBOutlet UILabel *farm;
@property (weak, nonatomic) IBOutlet UILabel *secret;

@end
