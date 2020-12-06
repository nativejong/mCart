//
//  CKartPrice.h
//  Quantum
//
//  Created by John Blaine on 5/20/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CKartPrice : UIView

@property (nonatomic, retain) UIButton *sent;
@property (nonatomic, retain) UIButton *subtotalTitle;
@property (nonatomic, retain) UIButton *taxTitle;
@property (nonatomic, retain) UIButton *totalTitle;

@property (nonatomic, retain) UIButton *subtotal;
@property (nonatomic, retain) UIButton *tax;
@property (nonatomic, retain) UIButton *total;

- (void) putTotal:(float)v tax:(float)t;

- (void)animateIt;

- (void)watch:(void (^)(NSInteger i))cback;
@property (copy, nonatomic) void (^doneCB)(NSInteger i);

@end

NS_ASSUME_NONNULL_END
