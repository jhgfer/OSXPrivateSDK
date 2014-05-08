//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSMutableArray, VKPStyleProperties;

__attribute__((visibility("hidden")))
@interface VKPStyleContents : PBCodable
{
    VKPStyleProperties *_properties;
    NSMutableArray *_zooms;
}

@property(retain, nonatomic) NSMutableArray *zooms; // @synthesize zooms=_zooms;
@property(retain, nonatomic) VKPStyleProperties *properties; // @synthesize properties=_properties;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)zoomsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomsCount;
- (void)addZooms:(id)arg1;
- (void)clearZooms;
@property(readonly, nonatomic) BOOL hasProperties;
- (void)dealloc;

@end

