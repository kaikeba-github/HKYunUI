//
//  KKBListPickerViewController.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/6.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBPickerViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBListPickerViewController : KKBPickerViewController

@property (nonatomic, copy) KKBBlockId selectBlock;

@property (nonatomic, strong) NSArray<NSObject *> *list;

- (void)select:(id)object animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
