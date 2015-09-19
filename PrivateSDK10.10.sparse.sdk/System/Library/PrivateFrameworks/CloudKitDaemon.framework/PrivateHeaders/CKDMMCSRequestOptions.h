/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

// Not exported
@interface CKDMMCSRequestOptions : NSObject
{
    BOOL _usesBackgroundSession;
    BOOL _allowsCellularAccess;
    NSString *_applicationBundleID;
    NSString *_applicationSecondaryID;
    NSString *_containerID;
    NSArray *_zoneNames;
}

@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) BOOL usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property(retain, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) NSString *applicationSecondaryID; // @synthesize applicationSecondaryID=_applicationSecondaryID;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
- (void).cxx_destruct;
- (id)MMCSOptions;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithOperation:(id)arg1;

@end
