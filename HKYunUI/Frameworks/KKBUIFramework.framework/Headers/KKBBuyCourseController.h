//
//  KKBBuyCourseController.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/17.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBAlertController.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, KKBPurchaseProductType)
{
    KKBPurchaseProductType_Course = 0,
    KKBPurchaseProductType_Planet = 1,
};

typedef void(^KKBBuyCourseSuccessBlock)(BOOL success, NSString * _Nullable orderNo);

@interface KKBBuyCourseController : KKBBaseViewController

@property (nonatomic, strong) NSString *productCode;
@property (nonatomic, assign) NSUInteger productPrice; //以分为计量单位
@property (nonatomic, strong) NSString *productName;
@property (nonatomic, assign, readonly) KKBPurchaseProductType productType;

@property (nonatomic, copy) KKBBuyCourseSuccessBlock buySuccessBlock;


- (instancetype)initWithProductType:(KKBPurchaseProductType)productType;

- (void)showInController:(UIViewController *)controller;
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END
