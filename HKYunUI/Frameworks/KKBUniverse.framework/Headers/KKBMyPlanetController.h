//
//  KKBMyPlanetController.h
//  KaiKeBa
//
//  Created by Duane on 2019/10/21.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBMyPlanetController : KKBBaseTableController <KKBMainTabControllerProtocol>

@property (nonatomic, weak) UITabBarController *parentTabBarController;

@end

NS_ASSUME_NONNULL_END
