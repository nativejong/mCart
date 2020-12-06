//
//  KartFBase.h
//  KingIX
//
//  Created by John Blaine on 12/13/19.
//  Copyright © 2019 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Firebase;

NS_ASSUME_NONNULL_BEGIN

@interface KartFBase : NSObject

//- (void) putTotal:(float)v;
//- (NSMutableDictionary*) asmMsg:(float)v;
//- (NSMutableDictionary*) asmMsg:(NSString*)adr;
//- (NSMutableDictionary*) asmMsg:(NSString*)adr station:()s;
//- (NSMutableDictionary*) asmMsg:(NSString*)adr station:(NSString*)s items:(NSMutableArray*)it;
- (NSMutableDictionary*) asmMsg:(NSString*)adr station:(NSString*)s items:(NSMutableArray*)it em:(NSString*)e;

- (void)watch:(void (^)(NSInteger i))cback;
@property (copy, nonatomic) void (^doneCB)(NSInteger i);

@end

NS_ASSUME_NONNULL_END
