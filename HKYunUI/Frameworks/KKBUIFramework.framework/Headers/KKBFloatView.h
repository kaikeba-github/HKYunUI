//
//  KKBFloatView.h
//  KKBUIFramework
//
//  Created by 西门桃桃 on 2020/8/10.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^DidClickBlock)(void);

@interface KKBFloatView : UIImageView

@property(nonatomic, assign)UIEdgeInsets maxEdge;//设置TouchView可以移动的最大边距
@property(nonatomic, copy  )NSString *imageUrl;
@property(nonatomic, copy  )DidClickBlock didClickBlock;

- (instancetype)initWithMaxEdge:(UIEdgeInsets)maxEdge imageUrl:(NSString *)imageUrl;

- (void)showInView:(UIView *)superView;
- (void)remove;

@end

NS_ASSUME_NONNULL_END
