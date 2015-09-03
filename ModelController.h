//
//  ModelController.h
//  LivePerson Demo
//
//  Created by Morgan Lemke on 9/1/15.
//  Copyright (c) 2015 Morgan Lemke. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

