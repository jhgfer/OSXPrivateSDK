/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMServiceApplication-Protocol.h"

@protocol IMServiceApplicationChatRoomSupport <IMServiceApplication>
- (oneway void)handles:(id)arg1 didLeaveChatRoom:(id)arg2;
- (oneway void)handles:(id)arg1 didJoinChatRoom:(id)arg2;
- (oneway void)plugInDidLeaveChatRoom:(id)arg1 error:(id)arg2;
- (oneway void)plugInDidJoinChatRoom:(id)arg1;
- (oneway void)plugInDidSendMessage:(id)arg1 toChatRoom:(id)arg2 error:(id)arg3;
- (oneway void)plugInDidReceiveNotice:(id)arg1 forChatRoom:(id)arg2;
- (oneway void)plugInDidReceiveMessage:(id)arg1 forChatRoom:(id)arg2 fromHandle:(id)arg3;
- (oneway void)plugInDidReceiveInvitation:(id)arg1 forChatRoom:(id)arg2 fromHandle:(id)arg3;
@end

