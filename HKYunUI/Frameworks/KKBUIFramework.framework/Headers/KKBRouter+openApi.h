//
//  KKBRouter+openApi.h
//  KaiKeBa
//
//  Created by Duane on 2019/12/3.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBLibrary/KKBRouter.h>

NS_ASSUME_NONNULL_BEGIN

#define KKBRouter_OpenApi KKBRouterUrl(@"openapi/:target/:action")

@class KKBRouter;

@interface KKBRouter (openApi)

+ (void)registerAllOpenApi;

@end

NS_ASSUME_NONNULL_END
