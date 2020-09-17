//
//  KKBSliderSegmentController.h
//  KaiKeBa
//
//  Created by Duane on 2020/2/19.
//  Copyright © 2020 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseScrollController.h>
#import "KKBSliderSegmentView.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBSliderSegmentController : KKBBaseScrollController

@property (nonatomic, strong, readonly) UIScrollView *segmentBgView;
@property (nonatomic, strong, readonly) KKBSliderSegmentView *segment;
@property (nonatomic, strong, readonly) NSArray<UIViewController *> *controllers;

- (instancetype)initWithTitles:(NSArray<NSString *> *)titles controllers:(NSArray<UIViewController *> *)controllers;
- (void)setTitles:(NSArray<NSString *> *)titles controllers:(NSArray<UIViewController *> *)controllers;

- (void)setIndex:(NSInteger)index;

- (CGFloat)slideWidth;
- (CGFloat)segmentWidth;
- (CGFloat)segmentMargin;

@end

NS_ASSUME_NONNULL_END
