//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SMDataDrive : NSObject <NSCoding>
{
    BOOL _permissionsTurnedOn;
    NSString *_diskIdentifier;
}

+ (void)initialize;
- (long long)totalSize;
- (long long)freeSize;
- (long long)usedSize;
- (id)mountPoint;
- (id)name;
- (void)cleanupDrive;
- (void)prepareDrive;
- (void)removeUserContextObjectForKey:(id)arg1;
- (id)userContextObjectForKey:(id)arg1;
- (void)setUserContextObject:(id)arg1 forKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)diskIdentifier;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithDiskIdentifier:(id)arg1;

@end
