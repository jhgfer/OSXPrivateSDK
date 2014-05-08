//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, VKObjectPool, VKPIconPack;

__attribute__((visibility("hidden")))
@interface VKIconAtlas : NSObject
{
    VKPIconPack *_iconPack;
    VKObjectPool *_artworkPool;
    NSMapTable *_atlasToImages;
}

- (struct CGImage *)_createImageForIconInfo:(id)arg1 contentScale:(double)arg2;
- (struct CGImage *)_createImageForStyleAttributeKey:(unsigned int)arg1 value:(int)arg2 contentScale:(double)arg3;
- (struct CGImage *)_createImageForName:(id)arg1 contentScale:(double)arg2;
- (id)artworkForName:(id)arg1 style:(CDStruct_cf20f7af *)arg2 contentScale:(double)arg3 styleAttributes:(id)arg4;
- (void)dealloc;
- (id)initWithIconPack:(id)arg1;

@end

