//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IMServicePlugInMessage, NSError, NSString;

@protocol IMServiceApplicationInstantMessagingSupport
- (oneway void)plugInDidSendMessage:(IMServicePlugInMessage *)arg1 toHandle:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)plugInDidReceiveMessage:(IMServicePlugInMessage *)arg1 fromHandle:(NSString *)arg2;
- (oneway void)handleDidStopTyping:(NSString *)arg1;
- (oneway void)handleDidStartTyping:(NSString *)arg1;
@end

