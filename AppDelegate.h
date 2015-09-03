//
//  AppDelegate.h
//  LivePerson Demo
//
//  Created by Morgan Lemke on 9/1/15.
//  Copyright (c) 2015 Morgan Lemke. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LIOLookIOManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) id<LIOLookIOManagerDelegate> dataObject1;

@end

