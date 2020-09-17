//
//  KKBPickerViewController.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/6.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseViewController.h>
#import "KKBPickerInputAccessoryView.h"

NS_ASSUME_NONNULL_BEGIN

#define kPickerViewHeight 200

@interface KKBPickerViewController : KKBAlertViewController

@property (nonatomic, copy) KKBBlockVoid dismissBlock;

- (void)onSelect;

@end

NS_ASSUME_NONNULL_END
