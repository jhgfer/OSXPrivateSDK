//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SMByHostConfigMigrator : NSObject
{
}

+ (void)dumpUserGlobalPrefsAtPath:(id)arg1;
+ (void)dumpUserByHostPrefnamed:(id)arg1 AtPath:(id)arg2;
+ (void)migrateByHostPrefsInUserHomeDir:(id)arg1;
+ (id)pathToLatestByHostPreferenceWithBaseName:(id)arg1 inUserHomeDir:(id)arg2;

@end

