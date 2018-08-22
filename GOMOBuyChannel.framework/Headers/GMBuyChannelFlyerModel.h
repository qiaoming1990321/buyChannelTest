//
//  GMAppsFlyerModel.h
//  AppsFlyer
//
//  Created by qiaoming on 2018/8/20.
//  Copyright © 2018年 qiaoming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GMBuyChannelFlyerModel : NSObject

@property (nonatomic, copy) NSString *media_source;
@property (nonatomic, copy) NSString *media_source_trans;
@property (nonatomic, copy) NSString *adgroup;
@property (nonatomic, copy) NSString *campaign;
@property (nonatomic, copy) NSString *adset;
@property (nonatomic, copy) NSString *agency;
@property (nonatomic, copy) NSString *buychannel;
@property (nonatomic, copy) NSString *adgroup_name;
@property (nonatomic, copy) NSString *adset_name;
@property (nonatomic, copy) NSString *is_fb;
@property (nonatomic, copy) NSString *buyChannel;
@property (nonatomic, copy) NSString *af_status;
- (NSString *)buychannel;

@end
