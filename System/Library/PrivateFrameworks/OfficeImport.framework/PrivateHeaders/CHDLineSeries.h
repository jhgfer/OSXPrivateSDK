//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CHDSeries.h>

#import "CHDMarkerOwner.h"

@class CHDMarker;

__attribute__((visibility("hidden")))
@interface CHDLineSeries : CHDSeries <CHDMarkerOwner>
{
    CHDMarker *mMarker;
    _Bool mSmooth;
}

- (void)setSmooth:(_Bool)arg1;
- (_Bool)isSmooth;
- (void)setMarker:(id)arg1;
- (id)marker;
- (void)dealloc;
- (id)initWithChart:(id)arg1;

@end

