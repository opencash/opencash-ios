//
//  OCAMasterViewController.h
//  OpenCash-iOS
//
//  Created by Serge Gebhardt on 11/25/13.
//  Copyright (c) 2013 Serge Gebhardt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OCADetailViewController;

@interface OCAMasterViewController : UITableViewController

@property (strong, nonatomic) OCADetailViewController *detailViewController;

@end
