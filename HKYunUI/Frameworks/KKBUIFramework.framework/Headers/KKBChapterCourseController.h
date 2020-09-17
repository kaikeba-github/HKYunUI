//
//  KKBChapterCourseController.h
//  KaiKeBa
//
//  Created by Duane on 2019/8/17.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseWebController.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBChapterCourseController : KKBBaseWebController

@property (nonatomic, assign) intID courseId;
@property (nonatomic, strong) NSString *productCode;
@property (nonatomic, assign) NSInteger productPrice;
@property (nonatomic, strong) NSString *productName;

@end

NS_ASSUME_NONNULL_END
