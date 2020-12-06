//
//  LoadNRemove.h
//  KingXII
//
//  Created by John Blaine on 1/13/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoadNRemove : UIViewController

@property (nonatomic, retain) UIButton *loadBtn;
@property (nonatomic, retain) UIButton *delBtn;

- (void)watch:(void (^)(UIViewController *i))cback del:(void (^)(UIViewController *i))dback;
@property (copy, nonatomic) void (^doneCB)(UIViewController *i);
@property (copy, nonatomic) void (^delCB)(UIViewController *i);

@end

NS_ASSUME_NONNULL_END
