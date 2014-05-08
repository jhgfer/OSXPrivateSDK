//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKRouteMapMatchingDataSource.h"

@class NSSet, VKAttributedRoute;

__attribute__((visibility("hidden")))
@interface VKRouteLine : NSObject <VKRouteMapMatchingDataSource>
{
    BOOL _curve;
    BOOL _matchToRoads;
    BOOL _hasNewRoadMatches;
    CDStruct_aca18c62 _bounds;
    CDStruct_aa5aacbc _inverseMatrix;
    VKAttributedRoute *_overlay;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _boundsInWorldUnit;
    double _simplificationEpsilonPoints;
    double _viewUnitsPerPoint;
    struct vector<vk::RouteLineSection, vk_allocator<vk::RouteLineSection>> _sections;
    struct RouteLineSection *_userLocationSection;
    struct PolylineCoordinate _userLocationIndex;
    Vec2Imp_1782d7e3 _userLocation;
    double _lastUserLocationMatchTimestamp;
    double _lastTrafficTimeStamp;
    NSSet *_retainedTiles;
}

@property(nonatomic) double simplificationEpsilonPoints; // @synthesize simplificationEpsilonPoints=_simplificationEpsilonPoints;
@property BOOL hasNewRoadMatches; // @synthesize hasNewRoadMatches=_hasNewRoadMatches;
@property(nonatomic) VKAttributedRoute *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) CDStruct_d2b197d1 bounds; // @synthesize bounds=_bounds;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawDebugMarkersWithContext:(id)arg1;
- (void)_updateBounds:(id)arg1;
- (void)forEachMapMatchingSection:(CDUnknownBlockType)arg1;
- (void)forEachSection:(CDUnknownBlockType)arg1;
- (void)splitRouteLineAtAnnotation:(id)arg1;
@property(readonly, nonatomic) BOOL needsUpdate;
- (BOOL)isTrafficUptoDate:(double)arg1;
- (BOOL)isTrafficUpToDate;
- (void)createMeshIfNecessary:(int)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (BOOL)buildRouteLineForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 containerModel:(id)arg4 viewUnitsPerPoint:(double)arg5 force:(BOOL)arg6 curve:(BOOL)arg7;
- (void)_updateTilesCovered:(id)arg1;
- (void)dealloc;

@end

