//
//  mCart.h
//  mCart
//
//  Created by John Blaine on 12/6/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CKart.h"

//! Project version number for mCart.
FOUNDATION_EXPORT double mCartVersionNumber;
FOUNDATION_EXPORT const unsigned char mCartVersionString[];


@interface mCart : UIView
@property (nonatomic, retain) CKart *oview;


@end
