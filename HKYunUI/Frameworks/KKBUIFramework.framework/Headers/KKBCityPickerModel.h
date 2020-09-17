//
//  KKBCityPickerModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KKBProvinceModel : NSObject

@property(nonatomic, assign) int pid;
@property(nonatomic, assign) int provinceid;
@property(nonatomic, strong) NSString *province;

- (NSString *)provinceidString;

@end

@interface KKBCityModel : NSObject

@property(nonatomic, assign) int cid;
@property(nonatomic, strong) NSString *cityid;
@property(nonatomic, strong) NSString *city;
@property(nonatomic, strong) NSString *provinceid;

@end

@interface KKBDistrictModel : NSObject

@property(nonatomic, assign) int aid;
@property(nonatomic, strong) NSString *areaid;
@property(nonatomic, strong) NSString *area;
@property(nonatomic, strong) NSString *cityid;

@end
