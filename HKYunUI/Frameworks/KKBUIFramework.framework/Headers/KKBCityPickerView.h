//
//  KKBCityPickerView.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KKBCityPickerModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^KKBCityPickerViewBlock)(NSString *province, NSString *city, NSString *district);

@interface KKBCityPickerView : UIPickerView

@property (nonatomic, strong, readonly) KKBProvinceModel *province;
@property (nonatomic, strong, readonly) KKBCityModel *city;
@property (nonatomic, strong, readonly) KKBDistrictModel *district;

@property (nonatomic, copy) KKBCityPickerViewBlock selectBlock;

- (void)selectProvince:(NSString *)province city:(NSString *)city district:(NSString *)district animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
