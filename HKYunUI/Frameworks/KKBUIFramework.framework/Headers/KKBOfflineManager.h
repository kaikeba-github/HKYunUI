//
//  KKBOfflineManager.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/12.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBUIFramework/KKBOfflineDefine.h>


@class KKBCourseModel;
@class KKBChapterModel;
@class KKBSectionModel;
@class KKBContentModel;
@class KKBOfflineResModel;
@class KKBOfflineContentModel;
@class KKBOfflineCourseModel;
@class KKBOfflineChapterModel;


@interface KKBOfflineManager : NSObject
@property (nonatomic, assign) BOOL isViaWWANToast;  //离线提示控制 YES:toast提示  NO:Alter提示

DEFINE_SINGLETON_FOR_H(KKBOfflineManager)

//事件透传，获取appdelegate，handleEventsForBackgroundURLSession事件回调
-(void)setBackgroundSession:(NSString *_Nullable)identifier CompletionHandler:(void (^_Nullable)(void))completionHandler;

/*
 添加任务
 */
//添加一个任务
- (KKBOfflineContentModel *)addTask:(KKBContentModel *)content WithCourse:(KKBCourseModel *)course WithChapter:(KKBChapterModel *)chapter WithSection:(KKBSectionModel *)section;

/*
 删除
 */
//删除所有任务
-(BOOL)deleteAllOfflineCourse;
//删除课程列表
- (BOOL)deleteUnfinshedCourseListTask:(NSArray<KKBOfflineCourseModel *> *)courseList;
- (BOOL)deleteFinshedCourseListTask:(NSArray<KKBOfflineCourseModel *> *)courseList;
//删除一个离线未完成的课程
- (BOOL)deleteOfflineUnfinishedCourse:(uintID)courseId;
//删除一个离线完成的课程
- (BOOL)deleteOfflineFinishedDownload:(uintID)courseId;
//删除离线未完成课程的多个节
- (BOOL)deleteOfflineUnfinishedCourse:(uintID)courseId WithContentList:(NSArray<KKBOfflineContentModel *> *)contents;
//删除离线完成课程的多个节
- (BOOL)deleteOfflineFinishedDownload:(uintID)courseId WithContentList:(NSArray<KKBOfflineContentModel *> *)contents;
//删除离线未完成课程的某一节
- (BOOL)deleteOfflineUnfinishedCourse:(uintID)courseId WithContent:(KKBOfflineContentModel *)content;
//删除离线完成课程的某一个节
- (BOOL)deleteOfflineFinishedDownload:(uintID)courseId WithContent:(KKBOfflineContentModel *)content;

/*
 修改
 */
//暂停课程的全部未完成任务
- (BOOL)pauseAllDownloadingTaskOfCourse:(uintID)courseId;
//暂停课程里某一个下载任务
- (BOOL)pauseDownloadingTask:(uintID)contentId WithCourseId:(uintID)courseId;
//恢复下载课程里面所有未完成的任务
- (BOOL)resumeAllDownloadingTaskOfCourse:(uintID)courseId;
//恢复下载课程里的某一个任务
- (BOOL)resumeDownloadingTask:(uintID)contentId WithCourseId:(uintID)courseId;
//优先下载
- (BOOL)priorityDownloadTask:(uintID)contentId WithCourseId:(uintID)courseId;

/*
 查找
 */
//获取所有未完成的课程
- (NSArray<KKBOfflineCourseModel *> *)getAllUnfinishedCourse;
//获取所有完成的课程
- (NSArray<KKBOfflineCourseModel *> *)getAllFinishedCourse;
//获取离线未完成课程所有节
- (NSArray<KKBOfflineContentModel *> *)getAllContentsOfUnfinishedCourse:(uintID)courseId;
////获取离线完成课程所有节
- (NSArray<KKBOfflineContentModel *> *)getAllContentsOffinishedCourse:(uintID)courseId;
//获取课程所有的章
- (NSArray<KKBOfflineChapterModel *> *)getAllChaptersOfUnfinishedCourse:(KKBOfflineCourseModel *)course;
- (NSArray<KKBOfflineChapterModel *> *)getAllChaptersOfFinishedCourse:(KKBOfflineCourseModel *)course;

/*
 获取当前内容下载状态:
 @ KKBDownloadStateNone 为当前内容“未下载”
 @ KKBDownloadStateCompleted 为当前内容“下载完成”
 @ 其他状态未当前内容“未下载完成”
 */
- (KKBDownloadState)getContentDownloadState:(uintID)contentId WithCourseId:(uintID)courseId;
- (KKBOfflineContentModel *)getContent:(uintID)contentId WithCourseId:(uintID)courseId;

//获取离线所占内存的总大小
- (NSUInteger)getOfflineFileTotalSize;

//设置是否允许蜂窝数据下载
-(BOOL)isAllowNotWifiNetworkDownload;
-(void)setAllowNotWifiNetworkDownload:(BOOL)isAllow;

@end

