//
//  KKBCardStoreView.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/10.
//  Copyright © 2019 kaikeba. All rights reserved.
//


@class KKBCardStoreView;
@protocol KKBCardStoreViewDelegate<NSObject>

@optional

/**
 自定义卡片内容
 
 @param customCard 你的customView 内部试图未清除
 @param index 需要准备的 card的 index
 */

- (void)customCardView:(UIView *)customCard index:(NSInteger)index cardStore:(UIView *)cardStore;

/**
 点击卡片

 @param index 点击的index
 */
- (void)tapCard:(NSInteger)index cardStore:(UIView *)cardStore;

@end

@interface KKBCardStoreView : UIView



@property (nonatomic, weak) id<KKBCardStoreViewDelegate> delegate;

//MARK: - 默认展示图片样式

///图片地址数组
@property (nonatomic, strong) NSArray<UIImage *> *imgList;
///展示叠加层数 默认3张
@property (nonatomic, unsafe_unretained) NSInteger showOverlayCount;

///图片显示模式
@property (nonatomic, unsafe_unretained) UIViewContentMode imgContentMode;

//MARK: - 其他设置项

///当前展示的是第几张
@property (nonatomic, unsafe_unretained ,readonly) NSInteger currentIndex;
/// 卡片叠加偏移 默认5.0
@property (nonatomic, unsafe_unretained) float cardTopOffset;
/// 是否无限循环 默认是
@property (nonatomic, unsafe_unretained) BOOL isInfiniteLoop;
/// 放弃拖拽距离 默认70.0    该距离是斜边的长
@property (nonatomic, unsafe_unretained) float cancleDistance;
/// 拖动时是否显示缩放效果
@property (nonatomic, unsafe_unretained) BOOL isScale;

//当前展示View之后的其他View 逐级缩放比例
@property (nonatomic, unsafe_unretained) CGFloat levelScale;

//MARK: - 自定义卡片

///卡片数量
@property (nonatomic, unsafe_unretained) NSInteger cardCount;
///自定义卡片
@property (nonatomic, strong) UIView *customCardView;

/**
 加载cardStore   在上述 属性赋值 完成之后 且 需给定宽高
 */
- (void)reloadData;

@end

