//
//  KKBVipProduceCollectionCell.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/12.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseCollectionViewCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBVipProduceCollectionCell : KKBBaseCollectionViewCell

@property (nonatomic, strong)UIColor *normalColor;


- (void)setNormalColor:(UIColor * _Nonnull)normalColor;
- (void)setInfo:(NSString *)name WithSelected:(BOOL)selected;


@end

NS_ASSUME_NONNULL_END
