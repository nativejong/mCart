//
//  CKartAdr.h
//  Quantum
//
//  Created by John Blaine on 5/20/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CKartAdr : UIView

@property (nonatomic, retain) UIButton *name;
@property (nonatomic, retain) UIButton *street;
@property (nonatomic, retain) UIButton *city;
@property (nonatomic, retain) UIButton *phone;

- (void) putTotal:(float)v tax:(float)t;
- (void)loadAdr;
- (void)putData:(NSString*)n street:(NSString*)s city:(NSString*)c phone:(NSString*)p;

@end

NS_ASSUME_NONNULL_END
