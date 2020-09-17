//
//  KKBPlayerDefine.h
//  KaiKeBa
//
//  Created by zddMac on 2019/9/10.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#ifndef KKBPlayerDefine_h
#define KKBPlayerDefine_h


#import <Foundation/Foundation.h>

#if (KKB_LOG_DEBUG)
#define KKBPlayerLog(...) NSLog(@"KKBPlayerLog==>:%s\n %@\n\n", __func__, [NSString stringWithFormat:__VA_ARGS__])
#else
#define KKBPlayerLog(...) {}
#endif


#define KKBPLAYER_TOOL_HEIGHT                   33.0f //小屏时底部工具栏高度
#define KKBPLAYER_TOOL_HEIGHT_FULLSCREEN        74.0  //全屏时底部工具栏高度
#define KKBPLAYER_TOP_HEIGHT                    64.0f //小屏时顶部工具栏高度
#define KKBPLAYER_TOP_HEIGHT_FULLSCREEN         64.0f //全屏时顶部工具栏高度
#define KKBPLAYER_OBSERVER_TIMER_CALLBACK_TIME  0.5f  //定时器回调时间精度
#define KKBPLAYER_HIDDEN_TOOLS_DELAY            5.0f  //延迟隐藏上下工具栏时间
#define KKBPLAYERAUTOHIDEVOLUME                 0.3f  //音量/亮度调节指示器延迟消失时间
#define PAN_GESTURE_GAP                         10.0f //滑动手势滑动的最小间隔

#define PAN_GESTURE_PROGRESS_GAP                5.0f //滑动手势滑动的最小间隔



#define CC_USER_ID        @"0118CC77B985808D" //-[预发布环境]  //@"E5DF447914302826"-【测试环境】                       //CC用户id
#define CC_KEY           @"WGzNvTx54AAGM0oucDOquoJvBMjyPBhI" //-[预发布环境] //CC用户key//@"N0ZB4Lh49cE6SQCBET3FsjODclcC0kZo"-【测试环境】


typedef NS_ENUM(NSUInteger, KKPlayerViewTimeOut) {
    
    KKBPlayerViewStatusTimeOutLoad,//加载超时
    KKBPlayerViewStatusTimeOutBuffer //缓存超时
};

//typedef NS_ENUM(NSUInteger, KKBPlayerVideoQuality)
//{
//    KKBVideoQuality_StandardDefinition = 10,
//    KKBVideoQuality_HighDefinition = 20,
//    KKBVideoQuality_SuperDefinition = 30,
//    KKBVideoQuality_OriginalPainting = 90,
//};

typedef NS_ENUM(NSInteger,KKBVideoOrientation) {
    KKBVideoOrientationPortrait,
    KKBVideoOrientationLeft,
    KKBVideoOrientationRight,
};


typedef NS_ENUM(NSInteger, KKBPlayerNetworkStatus)
{
    KKBPlayerNetworkStatus_NotReachable=0, //无网络
    KKBPlayerNetworkStatus_ViaWWAN=1,      //蜂窝数据
    KKBPlayerNetworkStatus_ViaWiFi=2,       //wifi
};

typedef NS_ENUM(NSInteger, KKBVideoFromSource)
{
    KKBVideoFromSource_Course, //学习中心课程
    KKBVideoFromSource_PlanetPublicCourse, //星球详情公开课
};


typedef NS_ENUM(NSUInteger, KKBPlayMediaType) {
    
    KKBPlayMediaType_Video,//播放视频
    KKBPlayMediaType_Audio //播放音频
};

#endif /* KKBPlayerDefine_h */
