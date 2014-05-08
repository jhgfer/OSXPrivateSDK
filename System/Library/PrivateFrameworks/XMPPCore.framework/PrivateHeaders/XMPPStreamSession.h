//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPNegotiatedStreamDelegate.h"

@class NSString, XMPPFeatureNegotiator, XMPPStreamManager;

@interface XMPPStreamSession : NSObject <XMPPNegotiatedStreamDelegate>
{
    XMPPStreamManager *_manager;
    BOOL _isIncoming;
    NSString *_sid;
    NSString *_siPubID;
    NSString *_otherJID;
    int _state;
    id <XMPPNegotiatedStream> _stream;
    XMPPFeatureNegotiator *_negotiator;
    NSString *_requestID;
    int _error;
    int _prepState;
    id _prepareNotifyObject;
    SEL _prepareNotifySelector;
    id _prepareNotifyUserInfo;
    BOOL _preparingLocally;
}

+ (id)namespace;
- (void)negotiatedStreamClosed:(id)arg1;
- (void)negotiatedStream:(id)arg1 errorOccurred:(id)arg2;
- (void)negotiatedStream:(id)arg1 receivedBytes:(char *)arg2 length:(unsigned int)arg3;
- (void)negotiatedStreamFinishedWritingData:(id)arg1;
- (void)writeIncomingAcceptResponse:(id)arg1;
- (void)writeProfileResponse:(id)arg1;
- (void)writeProfileOptions:(id)arg1;
- (void)couldNotConnect:(int)arg1;
- (void)receivedBytes:(char *)arg1 length:(unsigned int)arg2;
- (void)streamClosed;
- (void)disconnectedWithReason:(int)arg1;
- (void)disconnectedWithError:(id)arg1;
- (void)finishedWritingBytes;
- (void)connected;
- (void)sessionOpenedWithStream:(id)arg1;
- (long long)writeBytes:(char *)arg1 length:(int)arg2;
- (BOOL)handleIncomingNode:(id)arg1;
- (void)disconnectSessionWithReason:(int)arg1;
- (void)declineIncomingSession;
- (void)setSiPubID:(id)arg1;
- (id)siPubID;
- (void)acceptIncomingSession;
- (void)_preparedOutgoingSession;
- (void)_prepareOutgoingSession;
- (void)revokeOutgoingProposal;
- (void)proposeOutgoingSession;
- (void)unpublishOutgoingSession;
- (void)publishOutgoingSession;
- (void)_locallyPrepareSession;
- (void)prepareOutgoingSessionTo:(id)arg1 notifyWhenComplete:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
- (id)negotiator;
- (void)setNegotiator:(id)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (id)otherPerson;
- (void)setOtherPerson:(id)arg1;
- (int)state;
- (id)sid;
- (void)setSID:(id)arg1;
- (id)namespace;
- (void)setIsIncoming:(BOOL)arg1;
- (BOOL)isIncoming;
- (int)error;
- (void)setStreamManager:(id)arg1;
- (id)initWithIncomingNode:(id)arg1 streamManager:(id)arg2;
- (id)initWithStreamManager:(id)arg1;
- (void)dealloc;

@end

