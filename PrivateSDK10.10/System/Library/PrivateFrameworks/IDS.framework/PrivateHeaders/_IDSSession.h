/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSBaseSocketPairConnectionDelegate-Protocol.h"
#import "IDSDaemonListenerProtocol-Protocol.h"

@class IDSBaseSocketPairConnection, NSSet, NSString, _IDSWeakReference;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>
{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    _IDSWeakReference *_delegate;
    struct dispatch_queue_s *_queue;
    unsigned int _state;
    long long _transportType;
    int _socket;
    BOOL _isAudioEnabled;
    BOOL _isMuted;
    BOOL _isLegacy;
    long long _inviteTimeout;
    unsigned int _sessionEndedReason;
}

@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)xpcObject:(void *)arg1 objectContext:(id)arg2;
- (void)session:(id)arg1 muted:(BOOL)arg2;
- (void)session:(id)arg1 audioEnabled:(BOOL)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (BOOL)sendData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
@property(nonatomic) long long inviteTimeout;
- (BOOL)getMuted;
- (void)setMuted:(BOOL)arg1;
- (BOOL)getAudioEnabled;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)endSessionWithData:(id)arg1;
- (void)endSession;
- (void)declineInvitationWithData:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)acceptInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)_cleanupSocketPairConnections;
- (void)_setupSocketPairToDaemon;
- (void)_setupUnreliableSocketPairConnection;
@property(readonly, nonatomic) int socket;
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)_callDelegateWithBlock:(id)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
