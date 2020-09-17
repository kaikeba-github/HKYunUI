//
//  KKBUIVipCourseView.h
//  KKBUIFramework
//
//  Created by Duane on 2020/4/3.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBUIVipCourseView : KKBBaseView

@property (nonatomic, strong, readonly) UIView *stateView;

@property (nonatomic, weak) KKBMyCourseModel *courseModel;
@property (nonatomic, copy) KKBBlockVoid studyBlock;
@property (nonatomic, copy) KKBBlockVoid liveBlock;
@property (nonatomic, copy) KKBBlockVoid refreshBlock;

@property (nonatomic, assign) BOOL showType;

@end

NS_ASSUME_NONNULL_END
