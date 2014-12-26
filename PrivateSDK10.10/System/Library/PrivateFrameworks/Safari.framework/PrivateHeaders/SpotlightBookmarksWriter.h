/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OldSpotlightDataWriter-Protocol.h"

@class NSString;

// Not exported
@interface SpotlightBookmarksWriter : NSObject <OldSpotlightDataWriter>
{
}

- (id)URLToVisitFromSpotlightCacheFile:(id)arg1 ofDataType:(id)arg2;
- (id)fileExtensionForDataType:(id)arg1;
- (void)addSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3;
- (void)deleteSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3;
- (void)_removeCacheFileForBookmark:(id)arg1 inDirectory:(id)arg2;
- (void)_writeCacheFileForBookmark:(id)arg1 inDirectory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
