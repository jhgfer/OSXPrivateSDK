/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XMPPCore/XMPPExtension.h>

@class NSMutableDictionary;

@interface XMPPFileTransferExtension : XMPPExtension
{
    NSMutableDictionary *_guidToSessionMap;
}

- (void)handleFileTransferStopped:(id)arg1;
- (void)handleFileTransferAccepted:(id)arg1;
- (void)handleFileTransferSessionNoLongerNeeded:(id)arg1;
- (void)parseMessageNode:(id)arg1 intoMessage:(id)arg2 additionalProperties:(id)arg3;
- (void)writeToMessageTagForConnection:(id)arg1 messageType:(int)arg2 jid:(id)arg3 message:(id)arg4 additionalProperties:(id)arg5;
- (void)_delayedProposeOutgoingSession:(id)arg1;
- (BOOL)createStandaloneSessionForFileTransfer:(id)arg1 toJID:(id)arg2;
- (BOOL)handleIncomingSession:(id)arg1;
- (id)sessionForFileTransfer:(id)arg1 toJID:(id)arg2;
- (BOOL)_IDSupportsResourceForks:(id)arg1;
- (BOOL)_IDSupportsEFHTransfer:(id)arg1;
- (void)dealloc;
- (id)init;

@end
