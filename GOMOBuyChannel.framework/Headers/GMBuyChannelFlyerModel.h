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
@property (nonatomic, copy) NSString *adgroup_name;
@property (nonatomic, copy) NSString *adset_name;
@property (nonatomic, assign) BOOL is_fb;
/*buyChannel的值(优先级从上往下一次降低)
  2   FB自投
  3   FB非自投
  4   Adwords自投
  6   Adwords非自投
  1   GA买量
  0   自然带量
  7   非自然带量
  -1  GP自然
 */
@property (nonatomic, copy) NSString *buyChannel;
@property (nonatomic, copy) NSString *af_status;

@property (nonatomic, copy) NSString *clickid;
@property (nonatomic, copy) NSString *af_siteid;
@property (nonatomic, copy) NSString *af_channel;
/*
    区分自然带量 和 非自然带量使用(from_boundleId包名)
    自然带量:from_channel = true  且  from_boundleId:
    非自然带量:from_channel = false  且  from_boundleId:
 */
@property (nonatomic, copy) NSString *from_channel;// = true
@property (nonatomic, copy) NSString *from_boundleId;//:

- (NSString *)buyChannel;

@end
