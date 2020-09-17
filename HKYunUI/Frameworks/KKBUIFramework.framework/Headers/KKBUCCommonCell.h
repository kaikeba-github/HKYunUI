//
//  KKBUCCommonCell.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBUIFramework/KKBUCBaseCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBUCCommonCellModel : NSObject<NSCopying>

@property (nonatomic, strong) NSString *iconName;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, copy) KKBBlockVoid action;

@end

@interface KKBUCCommonCell : KKBUCBaseCell

@property (nonatomic, strong) KKBUCCommonCellModel *cellModel;

@end

NS_ASSUME_NONNULL_END
