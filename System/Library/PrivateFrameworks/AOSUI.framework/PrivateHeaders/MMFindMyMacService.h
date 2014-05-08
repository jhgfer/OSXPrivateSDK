//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AOSUI/MMService.h>

#import "MMServicePreflightProtocol.h"

@class NSError, NSImage;

@interface MMFindMyMacService : MMService <MMServicePreflightProtocol>
{
    NSError *_fmmError;
    NSImage *_warningIcon;
}

+ (id)_errorWithFMMErroCode:(unsigned long long)arg1;
@property(retain) NSImage *warningIcon; // @synthesize warningIcon=_warningIcon;
@property(retain) NSError *fmmError; // @synthesize fmmError=_fmmError;
- (BOOL)preflightForSignout:(id *)arg1 withWindow:(id)arg2;
- (id)acquireAuthRights:(unsigned long long)arg1;
- (void)showSheetForWindow:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 alternateButtonTitle:(id)arg5 otherButtonTitle:(id)arg6 andHelpHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)_accountDisplayName;
- (void)_servicePropertiesChanged:(id)arg1;
- (void)_serviceEnableChanged:(id)arg1;
- (void)openSecurity:(id)arg1;
- (BOOL)_isLocationServicesCapable;
- (BOOL)_areLocationServicesEnabled;
- (void)openEnergySaverPreferences:(id)arg1;
- (BOOL)_shouldShowWakeOnLAN;
- (BOOL)_alreadyActive;
- (id)_alreadyActiveDisplayName;
- (id)_alreadyActiveAccountID;
- (BOOL)_recoveryPartitionNeedsUpdate;
- (BOOL)_internalContainsRecoveryPartition;
- (BOOL)_containsRecoveryPartition;
- (unsigned long long)_recoveryPatitionCheckTimeout;
- (void)_updateStatus;
- (void)showFMMMissingWiFiSheet:(id)arg1;
- (void)showFMMAlreadyActiveSheet:(id)arg1;
- (void)showFMMNetworkOffSheet:(id)arg1;
- (void)showFMMMissingRecoveryPartitionSheet:(id)arg1;
- (void)showFMMLocationServicesOffSheet:(id)arg1;
- (void)showFMMEnableConfirmationSheet:(id)arg1 isAlreadyActive:(BOOL)arg2;
- (void)willGainFocus;
- (void)didSelect;
- (void)_setEnabled:(BOOL)arg1 withRightsMask:(unsigned long long)arg2;
- (void)_serviceFailed:(id)arg1;
- (void)showMoreInfo:(id)arg1;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (BOOL)canEnable:(id *)arg1;
- (id)icon;
- (id)_iconForError:(id)arg1;
- (id)_fmmWarningIcon;
- (id)_fmmIcon;
- (void)finalize;
- (void)dealloc;
- (id)initWithServiceID:(id)arg1 forAccount:(id)arg2;

@end

