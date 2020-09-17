//
//  KKBSatisfactionFeedbackViewModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/26.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSatisfactionFeedbackViewModel : NSObject

//注册存储了满意度调研时间
+ (void)registSatisfactionFeedbackDateStoreInfo:(NSString *)uniqueId;

//更新存储满意度调研打开的时间
+ (void)updateSatisfactionFeedbackDate:(NSString *)uniqueId;

//是否展示满意度调研页面
+ (BOOL)isShowSatisfactionFeedbackDateStoreInfo:(NSString *)uniqueId;

@end

NS_ASSUME_NONNULL_END
