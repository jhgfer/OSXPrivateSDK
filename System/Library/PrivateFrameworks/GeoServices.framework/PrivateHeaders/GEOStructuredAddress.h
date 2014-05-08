//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOStructuredAddress : PBCodable <NSCopying>
{
    CDStruct_5df41632 _geoIds;
    NSString *_administrativeArea;
    NSString *_administrativeAreaCode;
    NSMutableArray *_areaOfInterests;
    NSString *_country;
    NSString *_countryCode;
    NSMutableArray *_dependentLocalitys;
    NSString *_fullThoroughfare;
    NSString *_inlandWater;
    NSString *_locality;
    NSString *_ocean;
    NSString *_postCode;
    NSString *_postCodeExtension;
    NSString *_postCodeFull;
    NSString *_premise;
    NSString *_premises;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
    NSMutableArray *_subPremises;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
}

@property(retain, nonatomic) NSString *postCodeFull; // @synthesize postCodeFull=_postCodeFull;
@property(retain, nonatomic) NSMutableArray *subPremises; // @synthesize subPremises=_subPremises;
@property(retain, nonatomic) NSString *premise; // @synthesize premise=_premise;
@property(retain, nonatomic) NSMutableArray *dependentLocalitys; // @synthesize dependentLocalitys=_dependentLocalitys;
@property(retain, nonatomic) NSString *ocean; // @synthesize ocean=_ocean;
@property(retain, nonatomic) NSString *inlandWater; // @synthesize inlandWater=_inlandWater;
@property(retain, nonatomic) NSMutableArray *areaOfInterests; // @synthesize areaOfInterests=_areaOfInterests;
@property(retain, nonatomic) NSString *postCodeExtension; // @synthesize postCodeExtension=_postCodeExtension;
@property(retain, nonatomic) NSString *fullThoroughfare; // @synthesize fullThoroughfare=_fullThoroughfare;
@property(retain, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(retain, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(retain, nonatomic) NSString *premises; // @synthesize premises=_premises;
@property(retain, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(retain, nonatomic) NSString *postCode; // @synthesize postCode=_postCode;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *administrativeAreaCode; // @synthesize administrativeAreaCode=_administrativeAreaCode;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setGeoIds:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)geoIdAtIndex:(unsigned long long)arg1;
- (void)addGeoId:(long long)arg1;
- (void)clearGeoIds;
@property(readonly, nonatomic) long long *geoIds;
@property(readonly, nonatomic) unsigned long long geoIdsCount;
@property(readonly, nonatomic) BOOL hasPostCodeFull;
- (id)subPremiseAtIndex:(unsigned long long)arg1;
- (unsigned long long)subPremisesCount;
- (void)addSubPremise:(id)arg1;
- (void)clearSubPremises;
@property(readonly, nonatomic) BOOL hasPremise;
- (id)dependentLocalityAtIndex:(unsigned long long)arg1;
- (unsigned long long)dependentLocalitysCount;
- (void)addDependentLocality:(id)arg1;
- (void)clearDependentLocalitys;
@property(readonly, nonatomic) BOOL hasOcean;
@property(readonly, nonatomic) BOOL hasInlandWater;
- (id)areaOfInterestAtIndex:(unsigned long long)arg1;
- (unsigned long long)areaOfInterestsCount;
- (void)addAreaOfInterest:(id)arg1;
- (void)clearAreaOfInterests;
@property(readonly, nonatomic) BOOL hasPostCodeExtension;
@property(readonly, nonatomic) BOOL hasFullThoroughfare;
@property(readonly, nonatomic) BOOL hasSubThoroughfare;
@property(readonly, nonatomic) BOOL hasThoroughfare;
@property(readonly, nonatomic) BOOL hasPremises;
@property(readonly, nonatomic) BOOL hasSubLocality;
@property(readonly, nonatomic) BOOL hasPostCode;
@property(readonly, nonatomic) BOOL hasLocality;
@property(readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property(readonly, nonatomic) BOOL hasAdministrativeAreaCode;
@property(readonly, nonatomic) BOOL hasAdministrativeArea;
@property(readonly, nonatomic) BOOL hasCountryCode;
@property(readonly, nonatomic) BOOL hasCountry;
- (void)dealloc;
- (id)initWithAddressDictionary:(id)arg1;

@end

