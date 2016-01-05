//
//  TableViewController.h
//  BlogReader
//
//  Created by Thiago Heitling on 2016-01-04.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSMutableArray *blogPosts;

@property (strong, nonatomic) IBOutlet UITableView *tableView;


@end
