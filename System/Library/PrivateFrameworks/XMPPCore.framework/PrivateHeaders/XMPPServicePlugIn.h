//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMServicePlugIn.h"
#import "IMServicePlugInGroupListHandlePictureSupport.h"
#import "IMServicePlugInGroupListSupport.h"
#import "IMServicePlugInInstantMessagingSupport.h"
#import "IMServicePlugInPresenceSupport.h"
#import "XMPPCardExtensionDelegate.h"
#import "XMPPRosterExtensionDelegate.h"
#import "XMPPSessionDelegate.h"

@class XMPPCardExtension, XMPPIdleExtension, XMPPMessageExtension, XMPPPresenceExtension, XMPPRosterExtension, XMPPSession;

@interface XMPPServicePlugIn : NSObject <IMServicePlugIn, IMServicePlugInInstantMessagingSupport, IMServicePlugInPresenceSupport, IMServicePlugInGroupListSupport, IMServicePlugInGroupListHandlePictureSupport, XMPPSessionDelegate, XMPPCardExtensionDelegate, XMPPRosterExtensionDelegate>
{
    id <IMServiceApplication><IMServiceApplicationInstantMessagingSupport><IMServiceApplicationGroupListSupport> _application;
    XMPPSession *_session;
    XMPPRosterExtension *_rosterExtension;
    XMPPPresenceExtension *_presenceExtension;
    XMPPCardExtension *_cardExtension;
    XMPPMessageExtension *_messageExtension;
    XMPPIdleExtension *_idleExtension;
}

+ (id)plugInCapabilitiesFromFZCapabilities:(unsigned long long)arg1;
+ (long long)plugInAvailabilityFromXMPPStatusType:(int)arg1;
- (void)session:(id)arg1 receivedReadReceiptForID:(id)arg2;
- (void)session:(id)arg1 receivedDeliveryReceiptForID:(id)arg2;
- (void)session:(id)arg1 messageUpdated:(id)arg2;
- (void)session:(id)arg1 invitationReceived:(id)arg2 forChatRoom:(id)arg3;
- (void)session:(id)arg1 messageReceived:(id)arg2 forChatRoom:(id)arg3;
- (void)session:(id)arg1 messageReceived:(id)arg2;
- (void)session:(id)arg1 messageError:(id)arg2 forChatRoom:(id)arg3;
- (void)session:(id)arg1 messageError:(id)arg2 forJID:(id)arg3;
- (BOOL)session:(id)arg1 capabilities:(unsigned long long)arg2 areBetterThanCaps:(unsigned long long)arg3;
- (void)session:(id)arg1 propertiesChanged:(id)arg2 forJID:(id)arg3;
- (void)session:(id)arg1 stateChanged:(int)arg2 withConnection:(id)arg3;
- (void)session:(id)arg1 autoConnectDidFailForConnection:(id)arg2;
- (void)session:(id)arg1 didUpdateSupportsInvisible:(BOOL)arg2;
- (void)session:(id)arg1 tlsNegotiationFinished:(BOOL)arg2;
- (void)session:(id)arg1 connectedToHost:(id)arg2 port:(unsigned short)arg3 usingSSL:(BOOL)arg4;
- (void)extension:(id)arg1 pictureHashReceived:(id)arg2 forJID:(id)arg3;
- (void)extension:(id)arg1 pictureReceived:(id)arg2 forJID:(id)arg3;
- (void)extension:(id)arg1 subscriptionRequestFrom:(id)arg2;
- (void)extension:(id)arg1 rosterItemsUpdated:(id)arg2;
- (void)extension:(id)arg1 rosterItemsRemoved:(id)arg2;
- (oneway void)requestPictureForHandle:(id)arg1 withIdentifier:(id)arg2;
- (oneway void)requestGroupList;
- (oneway void)sendMessage:(id)arg1 toHandle:(id)arg2;
- (oneway void)userDidStopTypingToHandle:(id)arg1;
- (oneway void)userDidStartTypingToHandle:(id)arg1;
- (oneway void)updateSessionProperties:(id)arg1;
- (oneway void)updateAccountSettings:(id)arg1;
- (oneway void)logout;
- (oneway void)login;
- (void)dealloc;
- (id)initWithServiceApplication:(id)arg1;

@end

