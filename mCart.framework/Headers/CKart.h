//
//  CKart.h
//  Quantum
//
//  Created by John Blaine on 5/20/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CKartPrice.h"
#import "CKartAdr.h"
#import "OKartTbl.h"

NS_ASSUME_NONNULL_BEGIN

@interface CKart : UIView

@property (strong, nonatomic) OKartTbl *tbl;
@property (strong, nonatomic) CKartPrice *kprice;
@property (strong, nonatomic) CKartAdr *kadr;
@property Boolean tog;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;
- (void)toggle:(Boolean)t;


@end

NS_ASSUME_NONNULL_END
