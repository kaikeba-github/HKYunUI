//
//  KKBVipCourseCell.h
//  KaiKeBa
//
//  Created by Duane on 2019/4/22.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>
#import "KKBUIVipCourseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBVipCourseCell : KKBCardTableViewCell

@property (nonatomic, strong, readonly) KKBUIVipCourseView *courseView;

+ (CGFloat)cellHeightWithModel:(KKBMyCourseModel *)courseModel width:(CGFloat)width;

@end

NS_ASSUME_NONNULL_END
