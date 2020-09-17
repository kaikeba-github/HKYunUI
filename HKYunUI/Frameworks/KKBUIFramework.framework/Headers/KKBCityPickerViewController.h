//
//  KKBCityPickerViewController.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBPickerViewController.h"
#import "KKBCityPickerView.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCityPickerViewController : KKBPickerViewController

@property (nonatomic, strong, readonly) KKBCityPickerView *pickerView;

@property (nonatomic, copy) KKBCityPickerViewBlock selectBlock;

@end

NS_ASSUME_NONNULL_END
