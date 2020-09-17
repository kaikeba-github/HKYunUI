//
//  KKBRechargeOrderPay.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class KKBOrderModel;

@interface KKBRechargeOrderPayManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBRechargeOrderPayManager);


- (void)iAPReceiptValidate:(KKBOrderModel *)rechargeOrder Complete:(void(^)(BOOL success, NSString *_Nullable errMsg))completeBlock;

@end

NS_ASSUME_NONNULL_END
