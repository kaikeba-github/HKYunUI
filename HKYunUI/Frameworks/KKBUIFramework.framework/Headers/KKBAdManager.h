//
//  KKBAdManager.h
//  KaiKeBa
//
//  Created by Duane on 2019/11/30.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBLibrary/KKBBasicMacro.h>
#import <KKBLibrary/KKBDataType.h>

NS_ASSUME_NONNULL_BEGIN

@class KKBAdModel;

@interface KKBAdManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBAdManager)

@property (nonatomic, strong, readonly) KKBAdModel *appPop;
@property (nonatomic, strong, readonly) KKBAdModel *appScreen;
@property (nonatomic, copy) KKBBlockBool floatAdViewShowBlock;


- (void)showLaunchAd;
- (void)showPopAdInView:(UIView *)view;
- (void)openAd:(KKBAdModel *)adModel;

- (void)needFloatAdView;

@end

NS_ASSUME_NONNULL_END
