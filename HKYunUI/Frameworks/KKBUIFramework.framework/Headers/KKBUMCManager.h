//
//  KKBUMCManager.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/8.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>
#import <KKBSDK/KKBSDK3rdLoginManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBUMCManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBUMCManager)

@property (nonatomic, assign, readonly) BOOL showWeixinLogin;

- (void)configUMC:(NSString *)umKey;

- (void)staticEvent:(NSString *)key;

- (void)weixinAuth:(KKB3rdAuthBlock)completion;
- (void)supportWeixinLogin:(BOOL)support;

- (void)shareVideoToWechatTimeLine:(NSString *)filePath title:(NSString *)title descr:(NSString *)descr thumImage:(UIImage *)thumImage;
- (void)shareVideoToWechatSession:(NSString *)filePath title:(NSString *)title descr:(NSString *)descr thumImage:(UIImage *)thumImage;

- (void)shareUrlToWechatTimeLine:(NSString *)url title:(NSString *)title descr:(NSString *)descr thumImage:(UIImage *)thumImage;
- (void)shareUrlToWechatSession:(NSString *)url title:(NSString *)title descr:(NSString *)descr thumImage:(UIImage *)thumImage;

- (BOOL)handleOpenURL:(NSURL *)url options:(NSDictionary *)options;
- (BOOL)handleUniversalLink:(NSUserActivity *)userActivity options:(nullable NSDictionary *)options;

@end

NS_ASSUME_NONNULL_END
