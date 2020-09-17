//
//  KKBUICourseRouter.h
//  KKBUIFramework
//
//  Created by Duane on 2020/4/2.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBLibrary/KKBBasicMacro.h>
#import <KKBLibrary/KKBDataType.h>
#import <KKBSDK/KKBSDKDataType.h>

NS_ASSUME_NONNULL_BEGIN

@class KKBMyCourseModel;
@class KKBSectionModel;
@class KKBContentModel;
@class KKBResModel;

@interface KKBUICourseContentRouter : NSObject

+ (void)openSection:(KKBSectionModel *)sectionModel content:(KKBContentModel *)contentModel resource:(nullable KKBResModel *)resource completion:(KKBBlockVoid)completion;

@end

@interface KKBUICourseRouter : NSObject

DEFINE_SINGLETON_FOR_H(KKBUICourseRouter)

- (void)gotoCourseDetail:(KKBMyCourseModel *)courseModel lastStudy:(BOOL)lastStudy;
- (void)enterContentRequest:(uintID)courseId chapter:(uintID)chapterId section:(uintID)sectionId content:(uintID)contentId enterDetailOnFail:(BOOL)enterDetail;

@end

NS_ASSUME_NONNULL_END
