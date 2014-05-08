//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface InternetServices : NSObject
{
}

+ (id)sharedInternetServices;
- (void)setGuestForProtocol:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)isGuestForProtocolEnabled:(id)arg1;
- (long long)numberOfClientsForProtocols:(id)arg1;
- (BOOL)isNSCProtocolAvailable:(id)arg1;
- (void)setNSCProtocols:(id)arg1 enabled:(BOOL)arg2;
- (void)nscServerCancelShutdown:(id)arg1 refNum:(unsigned int)arg2;
- (BOOL)isNSServerShuttingDown:(id)arg1;
- (unsigned int)nscServerShutdown:(id)arg1 withDelay:(int)arg2;
- (BOOL)isNSCProtocolEnabled:(id)arg1;
- (struct __CFBundle *)_netFSServerFrameworkBundle;
- (void)sendSIGHUPToEfax;
- (BOOL)setInetDServiceEnabled:(id)arg1 enabled:(BOOL)arg2;
- (void)setScreensharingEnabled:(BOOL)arg1;
- (BOOL)screensharingEnabled;
- (void)setOpticalDiscSharingEnabled:(BOOL)arg1;
- (BOOL)isOpticalDiscSharingEnabled;
- (void)saveNatPrefs:(id)arg1;
- (void)setInternetSharingEnabled:(BOOL)arg1;
- (BOOL)internetSharingEnabled;
- (BOOL)isHttpdAvailable;
- (void)setHttpdEnabled:(BOOL)arg1;
- (BOOL)httpdEnabled;
- (BOOL)isFaxReceiveAvailable;
- (void)setFaxReceiveEnabled:(BOOL)arg1;
- (BOOL)faxReceiveEnabled;
- (BOOL)isRemoteAEServerAvailable;
- (void)setRemoteAEServerEnabled:(BOOL)arg1;
- (BOOL)remoteAEServerEnabled;
- (BOOL)isSSHServerAvailable;
- (void)setSSHServerEnabled:(BOOL)arg1;
- (BOOL)sshServerEnabled;
- (BOOL)isFTPServerAvailable;
- (void)setFTPServerEnabled:(BOOL)arg1;
- (BOOL)ftpServerEnabled;

@end

