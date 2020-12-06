//
//  OKartTblCell.h
//  Quantum
//
//  Created by John Blaine on 5/26/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OKartTblCell : UICollectionViewCell

@property (nonatomic, retain) UIImageView *img;
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

@property (nonatomic, retain) UIButton *name;
@property (nonatomic, retain) UIButton *price;
@property (nonatomic, retain) UIButton *dscr;
@property (nonatomic, retain) UIButton *comment;

@property (nonatomic, retain) UIButton *add;
@property (nonatomic, retain) UIButton *del;
@property (nonatomic, retain) UIButton *qty;


@property (nonatomic, assign) NSInteger col;

- (void)addItem:(NSString *) v;
- (NSString*)addDscr:(NSString *) v;
- (void)putComment:(NSString *) v;

- (void)imgVisible:(Boolean) b;
- (void)putImage:(NSString*)image date:(NSString*)imaged;
- (NSString*)putPrice:(float)p count:(int)c;

- (void)taskWithName:(NSInteger)i cnt:(void (^)(NSInteger tag, NSInteger c))cback;
@property (copy, nonatomic) void (^cntCB)(NSInteger tag, NSInteger c);

@end


NS_ASSUME_NONNULL_END
