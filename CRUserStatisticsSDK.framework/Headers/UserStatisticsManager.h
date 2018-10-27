//
//  UserStatisticsManager.h
//  iChat
//
//  Created by yslin on 2018/4/23.
//  Copyright © 2018年 ChenZheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserStatisticsManager : NSObject

@property (nonatomic, readonly) NSString *appId;

@property (nonatomic, readonly) id queue;

+(instancetype)sharedInstance;

/**
 *  日志埋点SDK信息配置
 *
 */
-(void)configStaticsWithAppId:(NSString*)appId;

/**
 *  页面退出统计
 *
 */
- (void)updateStatisticsHash;


/**
 *  页面开始统计
 *
 *  @param pageName     页面名称
 *  @param titleName    页面名称
 *  @param pagePath     页面路径
 *  @param description  页面描述
 *  @param attributes   扩充的一些信息
 *
 */
- (void)beginPageViewPageName:(NSString *)pageName
                    pageTitle:(NSString *)titleName
                     pagePath:(NSString *)pagePath
                  description:(NSString *)description
                   attributes:(NSDictionary *)attributes;

/**
 *  页面退出统计
 *
 *  @param pageName     页面名称
 *
 */
- (void)endPageView:(NSString *)pageName;

/**
 *  网络请求开始统计
 *
 *  @param requestId     请求唯一标示
 *  @param urlStr        请求url
 *  @param params        请求参数
 *  @param description   描述
 *  @param attributes    扩充的一些信息
 *
 */
- (void)beginWithRequsetId:(NSInteger)requestId
                    urlStr:(NSString *)urlStr
                    params:(NSDictionary *)params
               description:(NSString *)description
                attributes:(NSDictionary *)attributes;

/**
 *  网络请求结束统计
 *
 *  @param requestId     请求唯一标示
 *  @param urlStr        请求url
 *  @param status        请求是否成功状态 0成功 1失败
 *  @param errorinfo     业务封装的返回信息
 *
 */
- (void)endWithRequsetId:(NSInteger)requestId
                     url:(NSString *)url
                  status:(NSString*)status
               errorInfo:(NSDictionary*)errorinfo;


/**
 *  网络请求结束统计
 *
 *  @param clickId      点击事件id
 *  @param clickName    点击事件名称
 *  @param parentPage   事件所在页面名称
 *  @param time         事件点击事件
 *  @param type         点击页面类型
 *
 */
- (void)clickWithID:(NSString*)clickId
          clickName:(NSString*)clickName
         parentPage:(NSString*)parentPage
          clickTime:(NSInteger)time
      clickViewType:(NSString*)type;


/**
 *  异常信息统计
 *
 *  @param crashLog      异常日志
 *  @param attributes    扩充的一些信息
 *
 */
- (BOOL)crashReportLog:(NSString *)crashLog
            attributes:(NSDictionary *)attributes;

/**
 *  网页请求开始统计
 *
 *  @param url          url路径
 *  @param whiteList    白名单
 *  @param balckList    黑名单
 *  @param description  描述
 *  @param attributes   扩充的一些信息
 *
 */
- (void)webViewBeginLoadUrl:(NSString*)url
                  whiteList:(NSArray*)whiteList
                  balckList:(NSArray*)balckList
                description:(NSString *)description
                 attributes:(NSDictionary *)attributes;

/**
 *  网页请求开始统计
 *
 *  @param url          url路径
 *  @param resualt      网页加载结果 0成功 1失败
 *
 */
- (void)webViewFinishLoadUrl:(NSString*)url
                     resualt:(NSString*)resualt;


/**
 *  网页请求开始统计
 *
 *  @param eventId      事件id
 *
 */
- (void)sendEventToServer:(NSString*)eventId;


@end
