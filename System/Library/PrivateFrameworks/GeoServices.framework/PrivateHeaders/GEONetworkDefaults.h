//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock, NSMutableArray, NSString;

@interface GEONetworkDefaults : NSObject
{
    NSMutableArray *_completionHandlers;
    BOOL _isRegistering;
    NSDictionary *_networkDefaults;
    NSLock *_networkDefaultsLock;
    NSString *_cacheFilePath;
}

+ (id)sharedNetworkDefaults;
- (void)registerNetworkDefaults:(CDUnknownBlockType)arg1;
- (id)valueForKey:(id)arg1;
- (BOOL)needsUpdate;
- (void)refreshNetworkDefaults;
- (void)dealloc;
- (id)init;
- (void)_registrationComplete;

@end

