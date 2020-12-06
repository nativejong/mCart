//
//  OKomplete.h
//  KingIX
//
//  Created by John Blaine on 12/12/19.
//  Copyright © 2019 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OKomplete : UIViewController

@property (nonatomic, retain) UIButton *bgBtn;
@property (nonatomic, retain) UIButton *okBtn;
@property (nonatomic, retain) UIButton *msg;
@property (nonatomic, retain) NSTimer *timer;

- (void)watch:(void (^)(UIViewController *i))cback;
@property (copy, nonatomic) void (^doneCB)(UIViewController *i);

@end

NS_ASSUME_NONNULL_END
