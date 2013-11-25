//
//  MenuViewController.h
//  27 January
//
//  Created by Nubaslon on 25.11.13.
//  Copyright (c) 2013 Nubaslon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
