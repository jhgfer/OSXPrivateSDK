//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppContainer/ASBContainer.h>

@class CodeIdentity, NSString, NSURL;

@interface ASBMutableContainer : ASBContainer
{
    CodeIdentity *_owner;
    BOOL _created;
    NSString *_backupPath;
}

+ (id)containerForApplicationAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)containerForCodeIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)containerForApplicationAtURL:(id)arg1 error:(id *)arg2;
+ (id)containerForCodeIdentity:(id)arg1 error:(id *)arg2;
+ (id)containerWithURL:(id)arg1 error:(id *)arg2;
+ (void)synchronizedContainerForCodeIdentity:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly) BOOL isNewlyCreatedContainer; // @synthesize isNewlyCreatedContainer=_created;
@property(readonly) CodeIdentity *ownerCode; // @synthesize ownerCode=_owner;
- (void)setSandboxProfileDataValidationInfo:(id)arg1;
- (void)setSandboxProfileData:(id)arg1;
- (BOOL)upgradeAndReturnError:(id *)arg1;
- (BOOL)saveAndReturnError:(id *)arg1;
- (BOOL)_writeToFD:(int)arg1 bytes:(const void *)arg2 size:(unsigned long long)arg3 errnop:(int *)arg4;
- (BOOL)migrateAndIgnoreActionFailures:(BOOL)arg1 error:(id *)arg2;
- (BOOL)preferenceDomain:(id)arg1 requiresMigration:(char *)arg2 error:(id *)arg3;
@property(readonly) NSURL *backupURL;
- (BOOL)backupFile:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
- (void)setRequirementACL:(id)arg1;
@property(readonly) NSString *containerIdentifier;
- (id)initWithApplicationAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithCodeIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithNewContainerForCodeIdentity:(id)arg1 ignoringMigrationFailures:(BOOL)arg2 error:(id *)arg3;
- (id)initWithCodeIdentity:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 codeIdentity:(id)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

