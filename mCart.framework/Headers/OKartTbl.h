//
//  OKartTbl.h
//  Quantum
//
//  Created by John Blaine on 5/26/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OKartTblCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface OKartTbl : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property (nonatomic, retain) UICollectionView *tbl;
@property (nonatomic, strong) UIColor *bgColor;
@property (nonatomic, strong) NSMutableArray *mOrder;
@property (nonatomic, strong) UIButton *stamp;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c  col:(NSInteger)n;

- (void)refresh;
- (float)calcTotal;
- (float)calcTax;
- (float)calcCharge;

- (NSNumber*)findCount;

- (void)watchItem:(void (^)(NSString *it, NSInteger count))cback;
@property (copy, nonatomic) void (^itemCntCB)(NSString *it, NSInteger count);

- (NSMutableDictionary*)addItem:(NSMutableDictionary*)i;
- (void)addItemEx:(NSString*)i;

@end

NS_ASSUME_NONNULL_END
