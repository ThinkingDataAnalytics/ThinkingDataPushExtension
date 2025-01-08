//
//  TDPushExtension.h
//  ThinkingDataPushExtension
//
//  Created by 杨雄 on 2023/6/27.
//

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDPushExtension : NSObject

+ (BOOL)handleNotificationRequest:(UNNotificationRequest *)request
               withContentHandler:(void (^)(UNNotificationContent * _Nonnull))contentHandler
                            appId:(nullable NSString *)appId
                        serverUrl:(nullable NSString *)serverUrl
                        accountId:(nullable NSString *)accountId
                       distinctID:(nullable NSString *)distinctId DEPRECATED_MSG_ATTRIBUTE("Deprecated. replace with: [TDPushExtension handleNotificationRequest:withContentHandler:appId:serverUrl:]");

+ (BOOL)handleNotificationRequest:(UNNotificationRequest *)request
               withContentHandler:(void (^)(UNNotificationContent * _Nonnull))contentHandler
                            appId:(NSString * _Nonnull)appId
                        serverUrl:(NSString * _Nonnull)serverUrl;

@end

NS_ASSUME_NONNULL_END
