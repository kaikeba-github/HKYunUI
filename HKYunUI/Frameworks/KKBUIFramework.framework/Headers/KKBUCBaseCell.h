//
//  KKBUCBaseCell.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseTableViewCell.h>

NS_ASSUME_NONNULL_BEGIN

#define kUCCellMarginX 24

@interface KKBUCBaseCell : KKBBaseTableViewCell

@property (nonatomic, strong, readonly) UIImageView *accessory;
@property (nonatomic, strong, readonly) UIView *bottomLine;

@end

NS_ASSUME_NONNULL_END
