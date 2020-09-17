//
//  KKBPushManager.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/17.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBLibrary/KKBBasicMacro.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBPushManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBPushManager)

- (void)registerPushWithAppId:(NSString *)appid appKey:(NSString *)appKey appSecret:(NSString *)appSecret;
- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;
- (void)registerDeviceToken:(NSData * __nullable)deviceToken;

@end

NS_ASSUME_NONNULL_END
