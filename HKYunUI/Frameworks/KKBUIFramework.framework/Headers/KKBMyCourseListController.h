//
//  KKBMyCourseListController.h
//  KaiKeBa
//
//  Created by Duane on 2020/2/19.
//  Copyright © 2020 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseTableController.h>
#import <KKBLibrary/KKBMainTabControllerProtocol.h>
#import <KKBSDK/KKBCourseModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^KKBMyCourseListRefreshBlock)(KKBBlockNSError _Nullable callback);

@interface KKBMyCourseListController : KKBBaseTableController <KKBMainTabControllerProtocol>

@property (nonatomic, weak) UITabBarController *parentTabBarController;
@property (nonatomic, copy) KKBMyCourseListRefreshBlock refreshBlock;

@property (nonatomic, assign, readonly) KKBCourseType type;

@property (nonatomic, strong, readonly) NSArray<KKBMyCourseModel *> *normalCourses;
@property (nonatomic, strong, readonly) NSArray<KKBMyCourseModel *> *expireCourses;

- (instancetype)initWithType:(KKBCourseType)type;

- (void)tabbarManualRefresh;
- (void)updateCourseList:(NSArray<KKBMyCourseModel *> *)list;

@end

NS_ASSUME_NONNULL_END
