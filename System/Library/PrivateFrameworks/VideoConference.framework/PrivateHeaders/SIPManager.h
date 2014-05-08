//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface SIPManager : NSObject
{
    unsigned short _localSIPPort[8];
    unsigned long long _localIPAddress[8];
    unsigned short _extSIPPort[8];
    unsigned long long _extIPAddress[8];
    int _SIPInfoCount;
    struct tagHANDLE *_hSIP;
    int _transportProtocol;
    NSLock *_lock;
    NSString *_remoteUserAgent;
    NSString *_remoteDisplayName;
}

+ (id)SIPManager;
- (void)activeDialogReady;
- (void)enableSIPMessage;
- (void)disableSIPMessage;
- (BOOL)isRelayConference:(int)arg1;
- (void)getRelayExtIPPort:(int)arg1 pRelayExt:(void *)arg2;
- (id)getIPInfoWithRemoteIPInfo:(void *)arg1 remoteIPInfoSize:(int)arg2 shouldFindExternalIP:(BOOL)arg3;
- (id)getIPInfoWithRemoteIPInfo:(void *)arg1 remoteIPInfoSize:(int)arg2;
- (int)getCallIDForConnectionData:(id)arg1;
- (int)connectWithCallID:(int)arg1 fromName:(id)arg2 to:(id)arg3 SDPInfo:(struct _SDPInfo *)arg4 rtpHandles:(struct tagRTPHANDLES *)arg5 forConfIndex:(int)arg6;
- (int)startConnectionCheck:(int)arg1 withConnectionData:(id)arg2 remoteRelayID:(id)arg3;
- (void)discardPreseverdPortBindingForCallID:(int)arg1;
- (int)getConnectionResultSrcIPPort:(int)arg1 pSrcIPPort:(struct tagIPPORT *)arg2;
- (int)getConnectionResultAFOnly:(int)arg1 addrFamily:(int *)arg2;
- (BOOL)generateCallID:(int *)arg1;
- (void)discardRelayBinding:(int)arg1;
- (id)getConnectionDataForCallID:(int)arg1 shouldFindExternalIP:(BOOL)arg2 pRelayIntIPPort:(void *)arg3 localUserName:(id)arg4 tryPreservedPort:(struct tagInternalExternalMapping *)arg5;
- (id)getConnectionDataForCallID:(int)arg1 shouldFindExternalIP:(BOOL)arg2 pRelayIntIPPort:(void *)arg3 localUserName:(id)arg4;
- (void)updateInterfaceList;
- (BOOL)isRemoteFocus:(int)arg1;
- (BOOL)isCurrentFocus;
- (BOOL)setSIPPing:(BOOL)arg1 forCallID:(int)arg2;
- (BOOL)setIsFocus:(BOOL)arg1;
- (id)localUserAgent;
- (BOOL)ViceroyUserAgent:(id)arg1 isGreaterThanVersion:(id)arg2;
- (BOOL)remoteUserAgentIsWindowsClient;
- (id)getRemoteDisplayName;
- (id)getRemoteUserAgent;
- (void)getRemoteInfo:(int)arg1;
- (id)remoteUserAgentForCallID:(int)arg1;
- (int)closeCall:(int)arg1;
- (int)sendMessage:(id)arg1 toAllExceptCallID:(int)arg2;
- (int)sendMessage:(id)arg1 toCallID:(int)arg2;
- (int)connectIncoming:(char *)arg1;
- (int)cancelConnect:(int)arg1;
- (int)hangup:(int)arg1;
- (int)connect:(id)arg1 to:(id)arg2 ip:(id)arg3 SIPPort:(unsigned short)arg4 SDPInfo:(struct _SDPInfo *)arg5 callID:(int)arg6 rtpInfo:(struct tagRTPHANDLES *)arg7;
- (int)connectUsingData:(id)arg1 fromName:(id)arg2 to:(id)arg3 SDPInfo:(struct _SDPInfo *)arg4 callID:(int)arg5 rtpHandles:(struct tagRTPHANDLES *)arg6 forConfIndex:(int)arg7;
- (int)listen:(BOOL)arg1;
- (int)createHandle;
- (unsigned long long)externalIPAddressAtIndex:(int)arg1;
- (unsigned short)externalSIPPortAtIndex:(int)arg1;
- (unsigned long long)localIPAddressAtIndex:(int)arg1;
- (unsigned short)localSIPPortAtIndex:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTransportProtocol:(int)arg1;

@end

