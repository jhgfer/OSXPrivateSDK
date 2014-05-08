//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, GEORPCorrectedSearch, GEORPMapLocation, NSMutableArray, NSString;

@interface GEORPProblemCorrections : PBCodable <NSCopying>
{
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
}

@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) GEORPMapLocation *correctedMapLocation; // @synthesize correctedMapLocation=_correctedMapLocation;
@property(retain, nonatomic) GEORPCorrectedSearch *correctedSearch; // @synthesize correctedSearch=_correctedSearch;
@property(retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
@property(retain, nonatomic) GEORPCorrectedLabel *correctedLabel; // @synthesize correctedLabel=_correctedLabel;
@property(retain, nonatomic) NSMutableArray *correctedFields; // @synthesize correctedFields=_correctedFields;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasComments;
@property(readonly, nonatomic) BOOL hasCorrectedMapLocation;
@property(readonly, nonatomic) BOOL hasCorrectedSearch;
@property(readonly, nonatomic) BOOL hasCorrectedCoordinate;
@property(readonly, nonatomic) BOOL hasCorrectedLabel;
- (id)correctedFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctedFieldsCount;
- (void)addCorrectedFields:(id)arg1;
- (void)clearCorrectedFields;
- (void)dealloc;

@end

