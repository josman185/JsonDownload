//
//  DetailViewController.h
//  jsonExample
//
//  Created by jose on 3/31/16.
//  Copyright © 2016 MCS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *mywebView;
@property (strong,nonatomic) NSString *nameContent;

@end
