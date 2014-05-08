//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEOClientCapabilities, NSData, NSString;

@interface GEORPProblemNotificationAvailabilityRequest : PBRequest <NSCopying>
{
    CDStruct_62a50c50 _businessIDs;
    CDStruct_95bda58d _problemTypes;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_countryCode;
    NSData *_devicePushToken;
    int _pinType;
    int _placeType;
    struct {
        unsigned int pinType:1;
        unsigned int placeType:1;
    } _has;
}

@property(nonatomic) int pinType; // @synthesize pinType=_pinType;
@property(nonatomic) int placeType; // @synthesize placeType=_placeType;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSData *devicePushToken; // @synthesize devicePushToken=_devicePushToken;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPinType;
@property(nonatomic) BOOL hasPlaceType;
- (void)setBusinessIDs:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)businessIDsAtIndex:(unsigned long long)arg1;
- (void)addBusinessIDs:(unsigned long long)arg1;
- (void)clearBusinessIDs;
@property(readonly, nonatomic) unsigned long long *businessIDs;
@property(readonly, nonatomic) unsigned long long businessIDsCount;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
@property(readonly, nonatomic) BOOL hasDevicePushToken;
@property(readonly, nonatomic) BOOL hasCountryCode;
- (void)setProblemTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)problemTypesAtIndex:(unsigned long long)arg1;
- (void)addProblemTypes:(int)arg1;
- (void)clearProblemTypes;
@property(readonly, nonatomic) int *problemTypes;
@property(readonly, nonatomic) unsigned long long problemTypesCount;
- (void)dealloc;

@end

