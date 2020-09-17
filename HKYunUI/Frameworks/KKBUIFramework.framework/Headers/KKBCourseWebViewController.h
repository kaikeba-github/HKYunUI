//
//  KKBCourseWebViewController.h
//  KaiKeBa
//
//  Created by zddMac on 2019/5/15.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseWebController.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBCourseWebViewController : KKBBaseWebController

- (instancetype)initWithContentID:(uintID)contentId;
- (instancetype)initWithContentID:(uintID)contentId WithStudyProgress:(NSUInteger)progress;


@end

NS_ASSUME_NONNULL_END
