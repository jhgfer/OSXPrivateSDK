/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver-Protocol.h"

@class NSArray, NSMapTable, NSMutableDictionary, NSString, VKResourceManager, _VKLocalIconAtlas;

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    _VKLocalIconAtlas *_localAtlas;
    unsigned int _tileGroupIdentifier;
    VKResourceManager *_resourceManager;
    NSMapTable *_atlases;
    NSArray *_nonRegionalResourceNames;
    NSMutableDictionary *_nameToStyleManager;
}

+ (id)sharedManager;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5;
- (id)imageForName:(id)arg1 contentScale:(double)arg2;
- (id)_allResourceNames;
- (id)artworkForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(CDStruct_44d855de *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)_atlasForName:(id)arg1;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longAttributeValue:(unsigned long long)arg2 withResourceNames:(id)arg3 style:(CDStruct_44d855de *)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 withResourceNames:(id)arg3 style:(CDStruct_44d855de *)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(CDStruct_44d855de *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)_forEachIconPackWithContentScale:(double)arg1 iconSize:(long long)arg2 resourceNames:(id)arg3 visitUntilMatch:(id)arg4;
- (id)_nonRegionalPacks;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)purge;
- (void)dealloc;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
