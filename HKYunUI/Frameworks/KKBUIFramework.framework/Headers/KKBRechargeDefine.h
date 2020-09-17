//
//  KKBRechargeDefine.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/17.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*【开课吧app】 充值KK币 produceID定义*/

#define KKBIPhoneTierA       @"KKBIPhoneTierA"  //rmb->kkb  1 -> 0.7
#define KKBIPhoneTier1       @"KKBIPhoneTier1"   //rmb->kkb 6 -> 4.2
#define KKBIPhoneTier8       @"KKBIPhoneTier8"   //rmb->kkb 50 -> 35
#define KKBIPhoneTier15      @"KKBIPhoneTier15"  //rmb->kkb 98 -> 68.6
#define KKBIPhoneTier30      @"KKBIPhoneTier30"  //rmb->kkb 198 -> 138.6
#define KKBIPhoneTier47      @"KKBIPhoneTier47"  //rmb->kkb 298 -> 208.6
#define KKBIPhoneTier61      @"KKBIPhoneTier61"  //rmb->kkb 698 -> 488.6
#define KKBIPhoneTier66      @"KKBIPhoneTier66"  //rmb->kkb 998 -> 698.6
#define KKBIPhoneTier78      @"KKBIPhoneTier78"  //rmb->kkb 1998 -> 1398.6
#define KKBIPhoneTier85      @"KKBIPhoneTier85"  //rmb->kkb 4998 -> 3498.6



/*【企业版app】 充值KK币 produceID定义*/

#define KKBEnterpriseTierA       @"KKBEnterpriseTierA"  //rmb->kkb  1 -> 0.7
#define KKBEnterpriseTier1       @"KKBEnterpriseTier1"   //rmb->kkb 6 -> 4.2
#define KKBEnterpriseTier8       @"KKBEnterpriseTier8"   //rmb->kkb 50 -> 35
#define KKBEnterpriseTier15      @"KKBEnterpriseTier15"  //rmb->kkb 98 -> 68.6
#define KKBEnterpriseTier30      @"KKBEnterpriseTier30"  //rmb->kkb 198 -> 138.6
#define KKBEnterpriseTier47      @"KKBEnterpriseTier47"  //rmb->kkb 298 -> 208.6
#define KKBEnterpriseTier61      @"KKBEnterpriseTier61"  //rmb->kkb 698 -> 488.6
#define KKBEnterpriseTier66      @"KKBEnterpriseTier66"  //rmb->kkb 998 -> 698.6
#define KKBEnterpriseTier78      @"KKBEnterpriseTier78"  //rmb->kkb 1998 -> 1398.6
#define KKBEnterpriseTier85      @"KKBEnterpriseTier85"  //rmb->kkb 4998 -> 3498.6


#define IOS_PAY_CHANNEL_ID   @""




@interface KKBRechargeDefine : NSObject

+(NSUInteger)exchangeProduceIdToRmb:(NSString *)produceId;
+(CGFloat)exchangeProduceIdToKkb:(NSString *)produceId;

@end

NS_ASSUME_NONNULL_END
