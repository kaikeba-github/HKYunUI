//
//  KKBVideoDetailViewController.h
//  KaiKeBa
//
//  Created by zddMac on 2019/5/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBBaseViewController.h>
#import <KKBUIFramework/KKBPlayerDefine.h>


@class KKBContentModel;
@interface KKBVideoDetailViewController : KKBBaseViewController

- (instancetype)initWithContent:(KKBContentModel *)content;
- (instancetype)initWithContent:(KKBContentModel *)content WithSource:(KKBVideoFromSource)source;


@end

