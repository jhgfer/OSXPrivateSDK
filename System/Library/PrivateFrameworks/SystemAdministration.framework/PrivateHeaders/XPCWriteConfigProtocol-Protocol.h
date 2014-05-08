//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XPCWriteConfigSync.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol XPCWriteConfigProtocol <XPCWriteConfigSync>

@optional
- (oneway void)setOwner:(NSString *)arg1 group:(NSString *)arg2 forDirectory:(NSString *)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)createPath:(NSString *)arg1 attributes:(NSDictionary *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)movePath:(NSString *)arg1 toPath:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)removeFileAtPath:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)createFileWithContents:(NSData *)arg1 path:(NSString *)arg2 attributes:(NSDictionary *)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)setGuestPassword:(NSString *)arg1 accountName:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)setODSDPassword:(NSString *)arg1 accountName:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)overwriteGatekeeperForURL:(NSURL *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setKeyForDomain:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setRestrictAppInstallations:(BOOL)arg1 allowCaspianIdentifiedApps:(BOOL)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)suspendPerUserLaunchd:(unsigned long long)arg1 suspend:(BOOL)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)touchEFIResourceBuilder_withAuthorization:(NSData *)arg1;
- (oneway void)resetFDERecoveryPassword:(NSString *)arg1 existing:(NSString *)arg2 new:(NSString *)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)setMasterPassword:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setStartupFromNetBootImage:(NSDictionary *)arg1 reportSuccessTo:(id)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)setStartupFromNetBootImage:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)issueNVRAMCommand:(NSArray *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)writeVNCPassword:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setARDEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)scSaveNatPrefs:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setPrinterSharingEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)scWriteDomains:(NSArray *)arg1 forKey:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)scSetZeroConfName:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)scSetComputerName:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setCRAutoSubmitEnabled:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)sendSIGHUPToProcess:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setFMMGoodSamaritanMessage:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setRemoteListening:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)updateDSAppsForUser:(NSString *)arg1 bundleIDs:(NSArray *)arg2 kickMCX:(BOOL)arg3 _withAuthorization:(NSData *)arg4;
- (oneway void)launchFibreConfig:(NSArray *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)kickMCXDForUID:(long long)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)killProcessID:(int)arg1 withSignal:(int)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)scheduleRepeatingPowerEvent:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)cancelAllRepeatingPowerEvents_withAuthorization:(NSData *)arg1;
- (oneway void)writePowerManagerUPSSettings:(NSDictionary *)arg1 forKey:(NSString *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)writePowerManagerActivityProfile:(NSDictionary *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setXServeLockEnclosureState:(BOOL)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setLockSecurePrefs:(BOOL)arg1 authStrings:(NSArray *)arg2 _withAuthorization:(NSData *)arg3;
- (oneway void)setTime:(long long)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setTimeZone:(NSString *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)setNTPServers:(NSArray *)arg1 _withAuthorization:(NSData *)arg2;
- (oneway void)wakeup_withAuthorization:(NSData *)arg1;
@end

