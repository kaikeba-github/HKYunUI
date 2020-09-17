//
//  KKBOfflineDefine.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/12.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#ifndef KKBOfflineDefine_h
#define KKBOfflineDefine_h

#define OFFLINE_DIR                 @"Offline"
#define OFFLINE_COURSE_TABLE        @"OfflineCourse"
#define OFFLINE_CONTENT_TABLE       @"OfflineContent"
#define OFFLINE_RES_TABLE           @"OfflineRes"


typedef enum : NSUInteger {
    KKBDownloadStateNone,          //未下载
    KKBDownloadStateReadying,      //准备下载
    KKBDownloadStateRunning,       //正在下载
    KKBDownloadStateSuspended,     //暂停
    KKBDownloadStateCompleted,     //完成
    KKBDownloadStateFailed,        //失败
    KKBDownloadStateFileLost,      //文件不存在
    
}KKBDownloadState;


typedef enum : NSUInteger {
    KKBDownloadRes_Unkonwn,
    KKBDownloadRes_CCVideo,      //cc视频
}KKBDownloadResType;


#endif
