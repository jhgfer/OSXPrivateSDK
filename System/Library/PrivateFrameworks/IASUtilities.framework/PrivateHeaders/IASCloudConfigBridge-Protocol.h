//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSUUID;

@protocol IASCloudConfigBridge <NSObject>
- (void)requestBridgedInstallationForUserUUID:(NSUUID *)arg1 withProfileData:(NSData *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)requestBridgedProfileWithAuthorization:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSData *, NSError *))arg2;
- (void)requestBridgedActivationStatusWithReply:(void (^)(BOOL, NSDictionary *, NSError *))arg1;
@end

