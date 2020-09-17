//
//  KKBSatisfactionFeedbackController.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/26.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseViewController.h>

typedef NS_ENUM(NSInteger, SatisfactionFeedbackLoadingType) {
    SatisfactionFeedbackLoadingType_Push,
    SatisfactionFeedbackLoadingType_Present,
};

NS_ASSUME_NONNULL_BEGIN

@interface KKBSatisfactionFeedbackController : KKBBaseViewController
@property (nonatomic, copy)void(^dismisBlock)(void);

- (instancetype)initWithLoadingType:(SatisfactionFeedbackLoadingType)type;

@end

NS_ASSUME_NONNULL_END
