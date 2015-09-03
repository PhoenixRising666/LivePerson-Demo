//
//  DataViewController.h
//  LivePerson Demo
//
//  Created by Morgan Lemke on 9/1/15.
//  Copyright (c) 2015 Morgan Lemke. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

