//
//  StartupView.h
//  KingXII
//
//  Created by John Blaine on 1/25/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StartupView : UIView

@property (nonatomic, retain) UIImageView *img;
@property (nonatomic, retain) UIButton *name;
@property (nonatomic, retain) UIButton *title;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;

@end

NS_ASSUME_NONNULL_END
