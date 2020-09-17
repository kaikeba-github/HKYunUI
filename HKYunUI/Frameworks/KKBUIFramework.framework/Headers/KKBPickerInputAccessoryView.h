//
//  KKBPickerInputAccessoryView.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseView.h>

NS_ASSUME_NONNULL_BEGIN

#define kPickerInputAccessoryViewHeight 42

@interface KKBPickerInputAccessoryView : KKBBaseView

@property (nonatomic, copy) KKBBlockVoid okBlock;
@property (nonatomic, copy) KKBBlockVoid cancelBlock;

@end

NS_ASSUME_NONNULL_END
