//
//  KKBUserInfoController.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseTableController.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBUserInfoType) {
    KKBUserInfoType_Avatar = -1,
    KKBUserInfoType_NickName = 0,
    KKBUserInfoType_RealName,
    KKBUserInfoType_Gender,
    KKBUserInfoType_Birthday,
    KKBUserInfoType_City,
    KKBUserInfoType_Email,
    KKBUserInfoType_Company,
    KKBUserInfoType_Industry,
    KKBUserInfoType_End,
};

@interface KKBUserInfoController : KKBBaseTableController

@end

NS_ASSUME_NONNULL_END
