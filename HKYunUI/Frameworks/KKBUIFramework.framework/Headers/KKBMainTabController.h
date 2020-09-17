//
//  KKBMainTabController.h
//  KKBUIFramework
//
//  Created by Duane on 2020/2/27.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBMainTabController : UITabBarController

@property (nonatomic, strong) NSArray<NSString *> *lotIconPaths;

- (void)showBadgeDotForIndex:(NSInteger)tabIndex;
- (void)showBadgeText:(NSUInteger)value index:(NSInteger)tabIndex;
- (void)removeBadgeForIndex:(NSInteger)tabIndex;

- (NSUInteger)indexByTabIndex:(NSInteger)tabIndex;
- (NSInteger)tabIndexByIndex:(NSUInteger)index;
- (void)changeToIndex:(NSInteger)tabIndex;

- (void)addChildVC:(nonnull UIViewController *)vc isRequiredNavController:(BOOL)isRequired isNavBarHidden:(BOOL)isNavBarHidden itemName:(nullable NSString *)itemName iconSize:(CGSize)iconSize;
- (void)setLOTBarItem:(NSUInteger)index selected:(BOOL)selected animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
