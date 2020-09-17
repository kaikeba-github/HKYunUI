//
//  KKBUIFrameworkMacro.h
//  KKBUIFramework
//
//  Created by Duane on 2020/3/11.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#ifndef KKBUIFrameworkMacro_h
#define KKBUIFrameworkMacro_h

#define KKBUIFrameworkBundle [NSBundle bundleForClass:KKBUIFrameworkConfigure.class]

#define KKBUIFrameworkAssetsImage(name) [UIImage imageNamed:name inBundle:KKBUIFrameworkBundle compatibleWithTraitCollection:nil]

#define KKBKeyWindow [UIApplication sharedApplication].keyWindow

#endif /* KKBUIFrameworkMacro_h */
