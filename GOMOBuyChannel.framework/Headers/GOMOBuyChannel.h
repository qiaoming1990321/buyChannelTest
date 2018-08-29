//
//  GOMOBuyChannel.h
//  AppsFlyer
//
//  Created by qiaoming on 2018/8/21.
//  Copyright © 2018年 qiaoming. All rights reserved.
//#import <GOMOStatistics/GOMOStatistics.h>
//#import <GOMOStatistics/GOMOStatisticsDeviceInfo.h>

#import <Foundation/Foundation.h>
#import "GMBuyChannelFlyerModel.h"

FOUNDATION_EXPORT double GOMOBuyChannelVersionNumber;

//! Project version string for GOMOBuyChannel.
FOUNDATION_EXPORT const unsigned char GOMOBuyChannelVersionString[];


@protocol GOMOBuyChannelDelegate <NSObject>

@optional

/*
 回调AF返回的原始数据 到appDelegate
 */
- (void) buyChannelOnConversionDataReceived:(NSMutableDictionary*) installData;
- (void) buyChannelOnConversionDataRequestFailure:(NSError *)error;

@end

@interface GOMOBuyChannel : NSObject

//AF原始数据
@property (nonatomic, strong) NSMutableDictionary *afOriginalData;
//统计对象
@property (nonatomic, copy) NSString *utmSource;
//AF明细
@property (nonatomic, copy) NSString *afDetail;
//reffer Referrer 暂时传的空
@property (nonatomic, copy) NSString *referrerData;
//AF Agency
@property (nonatomic, copy) NSString *afAgency;
//用户类型标识
@property (nonatomic, copy) NSString *userSource;
//appsflyVersion 推广SDK版本
@property (nonatomic, copy) NSString *appsFlyVersion;

/* 你可以用这个属性 获取af返回的关键信息  例如:media_source  和  buychannel, agency*/
@property (nonatomic, strong) GMBuyChannelFlyerModel *channelFlyerModel;
/*
 * GOMOBuyChannel delegate. See GOMOBuyChannelDelegate abvoe
 */
@property (weak, nonatomic) id<GOMOBuyChannelDelegate> delegate;

/**
 用户类型sdk的初始化方法,请用这个方法初始化
 
 @param appsDevKey AppsFlyer上面返回的appsDevKey
 @param appleAppID AppsFlyer上面返回的appleAppID
 */
+(GOMOBuyChannel*) sharedBuyChannelAppsDevKey:(NSString *)appsDevKey appleAppID:(NSString *)appleAppID;
//确保初始化完成之后 才能使用这个获取单利的方法,目的是获取值使用的
+(GOMOBuyChannel*)getGomoBuyChannel;
+(void)trackAppLaunch;
//测试跑量数据使用
+(NSDictionary *)testAfOriginalData:(NSDictionary *)installData isUploadToGOMOStatistics:(BOOL)uploadFlag;
@end
