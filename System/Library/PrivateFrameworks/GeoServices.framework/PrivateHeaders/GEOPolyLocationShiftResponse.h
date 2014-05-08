//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _parameters;
    double _radius;
    int _status;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) int status; // @synthesize status=_status;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setParameters:(double *)arg1 count:(unsigned long long)arg2;
- (double)parametersAtIndex:(unsigned long long)arg1;
- (void)addParameters:(double)arg1;
- (void)clearParameters;
@property(readonly, nonatomic) double *parameters;
@property(readonly, nonatomic) unsigned long long parametersCount;
- (void)dealloc;

@end

