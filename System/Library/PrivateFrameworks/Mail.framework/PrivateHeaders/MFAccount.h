//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCAccount.h"

@class MCAuthScheme, NSArray, NSDictionary, NSImage, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface MFAccount : NSObject <MCAccount>
{
    NSString *_brandName;
    id _brandIcon;
    id _supportURL;
    NSString *_supportURLLabel;
    unsigned int _isOffline:1;
    unsigned int _willingToGoOnline:1;
    unsigned int _autosynchronizingEnabled:1;
    unsigned int _isActive:2;
    NSMutableDictionary *_info;
    NSString *_providerIdentifier;
    struct OpaqueSecIdentityRef *_tlsIdentity;
    NSMutableSet *_connections;
    unsigned int _promptedToTrustSSLCertificates:1;
    BOOL _configureDynamically;
}

+ (Class)classForProtocol:(id)arg1;
+ (id)keyPathsForValuesAffectingPreferredAuthScheme;
+ (BOOL)defaultsToSSL;
+ (id)keyPathsForValuesAffectingOfflineDisplayName;
+ (BOOL)allObjectsInArrayAreOffline:(id)arg1;
+ (id)genericAccountLargeImage;
+ (id)accountTypeString;
+ (void)saveAccountInfoToDefaults;
+ (BOOL)_shouldAnnounceChangesFromAccountInfo:(id)arg1 toAccountInfo:(id)arg2;
+ (void)saveAccounts:(id)arg1 usingStorageKey:(id)arg2 forceWriteToMail:(BOOL)arg3;
+ (void)saveAccounts:(id)arg1 usingStorageKey:(id)arg2;
+ (id)readAccountsUsingStorageKey:(id)arg1;
+ (id)readAccountsUsingStorageKey:(id)arg1 forceReadFromMail:(BOOL)arg2;
+ (id)v2AccountsPlistName;
+ (BOOL)haveAccountsBeenConfigured;
+ (id)typeStringForAccountClass:(Class)arg1;
+ (Class)accountClassForTypeString:(id)arg1;
+ (void)initialize;
@property BOOL configureDynamically; // @synthesize configureDynamically=_configureDynamically;
@property(readonly) void *keychainProtocol;
- (void)respondToHostBecomingReachable;
- (id)authSchemesForConnection:(id)arg1;
- (BOOL)canAuthenticateWithScheme:(id)arg1 connection:(id)arg2;
- (void)removeAccountInfoObjectForKey:(id)arg1;
- (void)setAccountInfoObject:(id)arg1 forKey:(id)arg2;
@property(readonly) BOOL isValid;
@property(nonatomic) BOOL promptToTrustSSLCertificates;
@property(readonly) NSImage *brandIcon;
- (id)iaSettingsIncludingPassword:(BOOL)arg1;
@property(readonly) NSString *brandName;
- (void)setProviderIdentifier:(id)arg1;
@property(readonly) NSString *providerIdentifier;
@property(readonly) NSString *accountTypeString;
@property(readonly) NSString *subscriptionURLLabel;
@property(readonly) NSURL *subscriptionURL;
@property(readonly) NSString *supportURLLabel;
@property(readonly) NSURL *supportURL;
- (id)_ispDomain;
- (id)nameForMailbox:(id)arg1;
@property(readonly) NSString *uniqueId;
@property(copy) NSString *ISPAccountID;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
@property(readonly) BOOL requiresAuthentication;
@property(readonly) NSString *saslProfileName;
@property(retain) MCAuthScheme *preferredAuthScheme;
- (void)accountInfoDidChange;
@property(copy) NSString *domain;
@property long long securityLayerType;
- (void)_setUsesSSL:(BOOL)arg1 accountInfoKey:(id)arg2;
- (BOOL)_usesSSLWithAccountInfoKey:(id)arg1;
@property BOOL usesSSL;
- (void)validateConnections;
- (void)releaseAllConnections;
@property(readonly) long long defaultSecurePortNumber;
@property(readonly) long long defaultPortNumber;
@property(readonly) NSArray *standardSSLPorts;
@property(readonly) NSArray *standardPorts;
@property long long portNumber;
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;
@property(readonly) NSString *googleClientToken;
@property(readonly) NSString *appleAuthenticationToken;
@property(readonly) NSString *applePersonID;
- (void)promptUserForPasswordWithCompletion:(CDUnknownBlockType)arg1;
- (id)promptUserForPassword;
- (void)setSessionPassword:(id)arg1;
- (id)sessionPassword;
- (void)setPermanentPassword:(id)arg1;
- (id)permanentPassword;
@property(copy) NSString *password;
- (void)_setHostname:(id)arg1 accountInfoKey:(id)arg2;
- (id)_hostnameWithAccountInfoKey:(id)arg1;
@property(copy) NSString *hostname;
@property(copy) NSString *username;
@property(readonly) NSString *offlineDisplayName;
@property(copy) NSString *displayName;
@property(copy) NSString *storedDisplayName;
@property BOOL isWillingToGoOnline;
@property BOOL isOffline;
@property(readonly) BOOL canGoOffline;
@property BOOL isInactivatedInsteadOfBeingDeleted;
@property BOOL isActive;
- (void)setAutosynchronizingEnabled:(BOOL)arg1;
@property(readonly) NSMutableDictionary *defaultsDictionary;
- (void)_queueAccountInfoDidChange;
- (void)setInfo:(id)arg1;
- (id)info;
- (void)_setAccountInfo:(id)arg1;
@property(copy) NSDictionary *accountInfo;
- (void)dealloc;
- (id)init;
- (id)initWithAccountInfo:(id)arg1;
@property(readonly) NSString *iaServiceType;
- (void)setCustomAuthentication:(unsigned int)arg1;
- (unsigned int)customAuthentication;
- (id)accountName;
- (void)setAccountName:(id)arg1;
- (id)loginName;
- (void)setLoginName:(id)arg1;
- (id)serverName;
- (void)setServerName:(id)arg1;
- (id)accountPassword;
- (void)setAccountPassword:(id)arg1;
- (unsigned int)accountType;

// Remaining properties
@property(copy) NSString *externalHostname;

@end

