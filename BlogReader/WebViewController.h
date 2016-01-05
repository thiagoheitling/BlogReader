//
//  WebViewController.h
//  BlogReader
//
//  Created by Thiago Heitling on 2016-01-04.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
