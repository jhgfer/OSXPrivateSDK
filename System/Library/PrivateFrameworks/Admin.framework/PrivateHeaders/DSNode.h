//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdminDirectoryService, NSString;

@interface DSNode : NSObject
{
    unsigned int mNodeReference;
    NSString *mNodeName;
    AdminDirectoryService *mDirectoryService;
    struct dispatch_semaphore_s *mOpenCloseSemaphore;
}

+ (BOOL)isConnectedToNetwork;
+ (id)openSearchNode;
+ (BOOL)nodeIsDefaultLocalNode:(unsigned int)arg1;
+ (id)openProxyNodeAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4;
+ (void)closeDefaultLocalNode;
+ (id)openDefaultLocalNode;
+ (id)nodeWithName:(id)arg1;
- (void)setDirectoryService:(id)arg1;
- (id)directoryService;
- (unsigned int)dirNodeReference;
- (id)findRecordByID:(long long)arg1 type:(CDStruct_166d2db6 *)arg2 attribute:(CDStruct_7d936526 *)arg3;
- (id)findRecordsByID:(long long)arg1 type:(CDStruct_166d2db6 *)arg2 attribute:(CDStruct_7d936526 *)arg3;
- (id)findRecordWithName:(CDStruct_166d2db6 *)arg1 type:(CDStruct_166d2db6 *)arg2 attribute:(CDStruct_166d2db6 *)arg3;
- (id)findRecordsWithName:(CDStruct_166d2db6 *)arg1 type:(CDStruct_166d2db6 *)arg2 attribute:(CDStruct_166d2db6 *)arg3;
- (id)findUserWithFullName:(CDStruct_7d936526 *)arg1 attribute:(CDStruct_166d2db6 *)arg2;
- (id)findUsersWithFullName:(CDStruct_7d936526 *)arg1 attribute:(CDStruct_166d2db6 *)arg2;
- (BOOL)isNetInfoNode;
- (void)close;
- (BOOL)isOpen;
- (BOOL)open;
- (id)hashedPasswordForUser:(id)arg1;
- (BOOL)setHashedPassword:(id)arg1 forUser:(id)arg2;
- (long long)setPasswordAsRoot:(id)arg1 forUser:(id)arg2;
- (BOOL)setPasswordScheme:(const char *)arg1 forUser:(id)arg2 password:(id)arg3;
- (long long)setPassword:(id)arg1 oldPassword:(id)arg2 forUser:(id)arg3;
- (void)deauthenticate;
- (BOOL)authenticateNodeWithAuthorization:(id)arg1;
- (int)authenticateName:(id)arg1 withPassword:(id)arg2;
- (int)verifyUserName:(id)arg1 password:(id)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)nodeName;
- (void)finalize;
- (void)dealloc;
- (id)initWithNodeName:(id)arg1;
- (id)_findRecordsByID:(long long)arg1 type:(CDStruct_166d2db6 *)arg2 attribute:(CDStruct_7d936526 *)arg3 expectedCount:(unsigned int)arg4;
- (id)_findRecordsWithName:(CDStruct_166d2db6 *)arg1 type:(CDStruct_166d2db6 *)arg2 attribute:(CDStruct_166d2db6 *)arg3 expectedCount:(unsigned int)arg4;
- (id)_findUsersWithFullName:(CDStruct_7d936526 *)arg1 attribute:(CDStruct_166d2db6 *)arg2 expectedCount:(unsigned int)arg3;
- (int)_authenticateNodeWithName:(id)arg1 password:(id)arg2 oldPassword:(id)arg3 data:(id)arg4 method:(const char *)arg5 doAuthentication:(BOOL)arg6;
- (id)_recordsFromBuffer:(CDStruct_7d936526 *)arg1 count:(unsigned int)arg2;

@end

