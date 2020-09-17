//
//  KKBStudySystemController.h
//  KaiKeBaMaster
//
//  Created by Duane on 2019/3/25.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBSliderSegmentController.h"
#import <KKBLibrary/KKBMainTabControllerProtocol.h>

@interface KKBMyCourseController : KKBSliderSegmentController <KKBMainTabControllerProtocol>

@property (nonatomic, weak) UITabBarController *parentTabBarController;

@end

