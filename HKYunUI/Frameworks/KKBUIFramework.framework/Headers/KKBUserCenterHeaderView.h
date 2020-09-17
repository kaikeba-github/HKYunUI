//
//  KKBUserCenterHeaderView.h
//  KaiKeBa
//
//  Created by Duane on 2019/12/13.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseView.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBUserCenterHeaderView : KKBBaseView

@property (nonatomic, strong, readonly) UIImageView *avatarView;

@property (nonatomic, copy) KKBBlockVoid userInfoAction;
@property (nonatomic, copy) KKBBlockVoid vipCenterAction;

+ (CGFloat)viewHeight;

@end

NS_ASSUME_NONNULL_END
