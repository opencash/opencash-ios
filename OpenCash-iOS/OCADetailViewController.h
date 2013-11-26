//
//  OCADetailViewController.h
//  OpenCash-iOS
//
//  Created by Serge Gebhardt on 11/25/13.
//  Copyright (c) 2013 Serge Gebhardt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OCADetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
