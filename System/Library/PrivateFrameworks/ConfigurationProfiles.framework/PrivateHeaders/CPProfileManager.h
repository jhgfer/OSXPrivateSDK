//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CPProfileManager : NSObject
{
    NSData *mSS;
}

+ (unsigned long long)getMode;
+ (void)setMode:(unsigned long long)arg1;
+ (id)sharedProfileManager:(id)arg1;
+ (id)sharedProfileManager;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)removeAllProfiles;
- (id)flushProfileUserData:(id)arg1 forUserGUID:(id)arg2;
- (id)flushProfileUserData:(id)arg1 forUser:(id)arg2;
- (id)uninstallProfileByIdentifier:(id)arg1 forUser:(id)arg2 removalPassword:(id)arg3;
- (id)uninstallProfile:(id)arg1 forUser:(id)arg2 removalPassword:(id)arg3;
- (id)uninstallProfileByIdentifier:(id)arg1 forUser:(id)arg2 removalPassword:(id)arg3 ignoringAuth:(BOOL)arg4 authData:(id)arg5;
- (id)uninstallProfile:(id)arg1 forUser:(id)arg2 removalPassword:(id)arg3 ignoringAuth:(BOOL)arg4;
- (id)installProfile:(id)arg1 forUser:(id)arg2;
- (id)allProfiles:(id *)arg1;
- (id)profilesForUserRecord:(id)arg1 error:(id *)arg2;
- (id)profilesForUser:(id)arg1 error:(id *)arg2;
- (BOOL)profilesAreInstalled;
- (void)processPluginInstallActions:(id)arg1 compositorWatcher:(id)arg2 forUser:(id)arg3;
- (id)guidForUser:(id)arg1;
- (BOOL)isUserAllowed:(id)arg1 profile:(id)arg2;
- (void)recompositeManagedClient:(id)arg1 profileUUID:(id)arg2 withUID:(unsigned int)arg3;
- (id)uninstallProfileCore:(id)arg1 forUser:(id)arg2;
- (BOOL)callerIsAuthorizedForOperation:(BOOL)arg1 error:(id *)arg2;

@end

