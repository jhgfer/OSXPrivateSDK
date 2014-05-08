//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKPolylineOverlay.h>

#import "VKRouteMapMatchingDataSource.h"

@class VKAttributedRouteMapMatcher, VKOriginalRouteMapMatchingDataSource;

@interface VKAttributedRoute : VKPolylineOverlay <VKRouteMapMatchingDataSource>
{
    VKOriginalRouteMapMatchingDataSource *_originalRouteMapMatchingDataSource;
    VKAttributedRouteMapMatcher *_driveMapMatcher;
    VKAttributedRouteMapMatcher *_walkMapMatcher;
}

+ (void)sendCoreLocationRouteHintFromMatch:(id)arg1 location:(id)arg2;
+ (id)attributedRouteWithRoute:(id)arg1;
- (id)_mapMatcherForTransportType:(int)arg1;
- (void)forEachMapMatchingSection:(CDUnknownBlockType)arg1;
- (CDStruct_c3b9c2ee)locationAtDistance:(double)arg1 from:(id)arg2;
- (id)projectedTunnelMatchUpToDistance:(double)arg1 from:(id)arg2 overTime:(double)arg3;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopBeforeNextManeuver:(BOOL)arg3;
- (id)_routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(BOOL)arg3 stopBeforeNextManeuver:(BOOL)arg4 atDate:(id)arg5;
- (struct PolylineCoordinate)routeCoordinateAtDistanceAlongOriginalRoute:(double)arg1 from:(struct PolylineCoordinate)arg2;
- (struct VKPoint)_pointOnOriginalRouteForRouteCoordinate:(struct PolylineCoordinate)arg1;
- (id)findClosestCoordinateAlongRouteForMatchedLocation:(id)arg1 transportType:(int)arg2;
- (id)findClosestCoordinateAlongRouteForMatchedLocation:(id)arg1 onDate:(id)arg2 transportType:(int)arg3;
- (id)mapMatchToLocation:(id)arg1 onDate:(id)arg2 withTrackedLocation:(id)arg3 transportType:(int)arg4;
- (id)_findClosestCoordinateAlongRouteForLocation:(id)arg1 trackedLocation:(id)arg2 transportType:(int)arg3 useCLMatchedLocation:(BOOL)arg4 onDate:(id)arg5;
- (struct PolylineCoordinate)_findRouteCoordinateWithOffset:(float)arg1 aPos:(const Vec2Imp_1782d7e3 *)arg2 aCoord:(const struct PolylineCoordinate *)arg3 bCoord:(const struct PolylineCoordinate *)arg4 pointOnSegment:(Vec2Imp_1782d7e3)arg5 bounds:(const CDStruct_d2b197d1 *)arg6;
- (struct PolylineCoordinate)makeRouteCoordinateFromPointIndex:(unsigned int)arg1 offset:(float)arg2;
- (id)_originalRouteMapMatchingDataSourceAroundPoint:(struct VKPoint)arg1;
- (double)_courseAt:(unsigned long long)arg1;
@property(readonly, nonatomic) struct PolylineCoordinate end;
@property(readonly, nonatomic) struct PolylineCoordinate start;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;

@end

