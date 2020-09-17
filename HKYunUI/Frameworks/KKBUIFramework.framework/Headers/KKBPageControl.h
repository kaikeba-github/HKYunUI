//
//  KKBPageControl.h
//  KaiKeBa
//
//  Created by Duane on 2019/12/11.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseView.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBPageControl : KKBBaseView

@property (nonatomic, assign) NSUInteger pageNumber;
@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic, assign) CGFloat pageItemSpacing;

- (instancetype)initWithImage:(UIImage *)image highlightedImage:(nullable UIImage *)highlightedImage;

@end

NS_ASSUME_NONNULL_END
