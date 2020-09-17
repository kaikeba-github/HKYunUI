//
//  KKBUserInfoCell.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBUCBaseCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBUserInfoCell : KKBUCBaseCell

@property (nonatomic, strong, readonly) UILabel *title;
@property (nonatomic, strong, readonly) UIButton *detail;

@end

NS_ASSUME_NONNULL_END
