//
//  KKBDatePickerViewController.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBPickerViewController.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^KKBDatePickerViewBlock)(NSDate *date);

@interface KKBDatePickerViewController : KKBPickerViewController

@property (nonatomic, copy) KKBDatePickerViewBlock selectBlock;

- (void)setDate:(NSDate *)date animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
