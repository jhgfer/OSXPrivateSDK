/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying>
{
    GEOMapItemStorage *_mapItemStorage;
    GEOPlace *_place;
    BOOL _currentLocation;
    struct {
        unsigned int currentLocation:1;
    } _has;
}

@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
@property(nonatomic) BOOL currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) GEOPlace *place; // @synthesize place=_place;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMapItemStorage;
@property(nonatomic) BOOL hasCurrentLocation;
@property(readonly, nonatomic) BOOL hasPlace;
- (void)dealloc;
- (void)setMapItem:(id)arg1;
- (id)mapItem;

@end
