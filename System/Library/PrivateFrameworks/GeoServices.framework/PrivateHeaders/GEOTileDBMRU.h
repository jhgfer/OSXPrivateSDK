//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOTileKeyList, NSLock;

@interface GEOTileDBMRU : NSObject
{
    GEOTileKeyList *_mru;
    NSLock *_lock;
}

- (id)currentList;
- (void)addKey:(struct _GEOTileKey *)arg1;
- (void)dealloc;
- (id)init;

@end

