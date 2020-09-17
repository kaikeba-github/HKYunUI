//
//  KKBUserDefaultsManager+KKBUIFramework.h
//  KKBUIFramework
//
//  Created by Duane on 2020/3/13.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBUserDefaultsManager (KKBUIFramework)

// 允许非WiFi网络下载视频
KKBUD_Property_Bool(downloadVideoWithWiFi);

//满意度调研评价弹出时间
KKBUD_Property_String(satisfactionFeedbackShowed);

@end

NS_ASSUME_NONNULL_END
