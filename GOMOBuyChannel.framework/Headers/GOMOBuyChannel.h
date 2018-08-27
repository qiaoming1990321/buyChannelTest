//
//  GOMOBuyChannel.h
//  AppsFlyer
//
//  Created by qiaoming on 2018/8/21.
//  Copyright © 2018年 qiaoming. All rights reserved.
//

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
- (void) buyChannelOnConversionDataReceived:(NSDictionary*) installData;
- (void) buyChannelOnConversionDataRequestFailure:(NSError *)error;

@end

@interface GOMOBuyChannel : NSObject
/**
 用户类型sdk的初始化方法,请用这个方法初始化
 
 @param appsDevKey AppsFlyer上面返回的appsDevKey
 @param appleAppID AppsFlyer上面返回的appleAppID
 */

+(GOMOBuyChannel*) sharedBuyChannelAppsDevKey:(NSString *)appsDevKey appleAppID:(NSString *)appleAppID;

/* In case you use your own user ID in your app, you can set this property to that ID. */
@property (nonatomic, strong, setter=setCustomerUserID:) NSString *customerUserID;


/* In case you use Custom data and you want to receive it in the raw reports.*/
@property (nonatomic, strong, setter=setAdditionalData:) NSDictionary *customData;

/* Use this property to set your AppsFlyer's dev key. */
@property (nonatomic, strong, setter=setAppsFlyerDevKey:) NSString *appsFlyerDevKey;

/* Use this property to set your app's Apple ID (taken from the app's page on iTunes Connect) */
@property (nonatomic, strong, setter=setAppleAppID:) NSString *appleAppID;
/* 你可以用这个属性 获取af返回的关键信息  例如:media_source  和  buychannel, agency*/
@property (nonatomic, strong) GMBuyChannelFlyerModel *channelFlyerModel;
/*
 * GOMOBuyChannel delegate. See GOMOBuyChannelDelegate abvoe
 */
@property (weak, nonatomic) id<GOMOBuyChannelDelegate> delegate;


+(void)trackAppLaunch;

/**
 获取appsFly的版本号
 */
+(NSString *)appsFlyVersion;

@end
