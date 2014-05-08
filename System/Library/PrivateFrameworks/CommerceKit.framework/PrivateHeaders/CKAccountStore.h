//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISStoreURLOperationDelegate.h"

@class NSArray, NSMutableArray;

@interface CKAccountStore : NSObject <ISStoreURLOperationDelegate>
{
    NSMutableArray *_xpcCallbacks;
    NSArray *_accounts;
}

+ (id)lookupAppleIDForApp:(id)arg1;
+ (BOOL)setUserWithResponse:(id)arg1;
+ (void)makeAccountPrimary:(id)arg1;
+ (BOOL)parseCreditStringForProtocol:(id)arg1;
+ (void)resetAuthExpiration;
+ (BOOL)authIsExpired;
+ (void)signOut;
+ (void)viewAccount;
+ (void)signIn;
+ (void)removeAccount:(id)arg1;
+ (void)addAccount:(id)arg1;
+ (id)accountWithAppleID:(id)arg1;
+ (id)accountForDSID:(id)arg1;
+ (BOOL)primaryAccountIsPresentAndSignedIn;
+ (id)primaryAccount;
+ (id)accounts;
@property(readonly) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)observePrimaryAccountWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

