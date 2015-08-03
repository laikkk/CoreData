//
//  PhotosTableViewController.h
//  
//
//  Created by Kamil Zielinski on 29/07/15.
//
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface PhotosTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property NSManagedObjectContext *context;
@property NSFetchedResultsController *frvwc;
@property BOOL debug;

-(id) initWithManagedObjectContext:(NSManagedObjectContext *)context;
-(void)performFetch;

@end
