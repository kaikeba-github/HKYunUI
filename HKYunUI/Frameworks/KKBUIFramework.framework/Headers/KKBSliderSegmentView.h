//
//  KKBSliderSegmentView.h
//  KaiKeBa
//
//  Created by Duane on 2019/10/21.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SegmentDidClickAtIndex)(NSInteger buttonIndex);

@interface KKBSliderSegmentView : UIView

@property (nonatomic, copy) SegmentDidClickAtIndex didClickAtIndex;

@property (nonatomic, assign) BOOL sliderOnTop;

@property (nonatomic, strong) UIColor *sliderBackgroundColor;
@property (nonatomic, strong) UIColor *buttonNormalTitleColor;
@property (nonatomic, strong) UIColor *buttonSelectedTileColor;
@property (nonatomic, assign) CGFloat buttonBorderRadius;
@property (nonatomic, assign) CGFloat buttonBorderWidth;
@property (nonatomic, strong) UIFont *font;

@property (nonatomic, readonly) CGFloat segmentWidth;

- (instancetype)initWithTitles:(NSArray *)titles slideWidth:(CGFloat)slideWidth itemWidth:(CGFloat)itemWidth margin:(CGFloat)margin;
- (void)resetWithTitles:(NSArray *)titles;

- (void)setIndex:(NSInteger)index;
- (NSInteger)currentIndex;
- (void)scrollToIndex:(NSInteger)index;
- (void)badgeToIndex:(NSInteger)index show:(BOOL)show;
- (void)setTitle:(NSString *)title toIndex:(NSInteger)index;
- (void)setAttributedTitle:(NSAttributedString *)title toIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
