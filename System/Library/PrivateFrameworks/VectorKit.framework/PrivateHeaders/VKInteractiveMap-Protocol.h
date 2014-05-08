//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, GEOMapRegion, NSArray, NSSet, NSString, VKAnchorWrapper, VKAnimation, VKAnnotationMarker, VKLabelMarker, VKViewportInfo;

@protocol VKInteractiveMap <NSObject>
+ (BOOL)supportsMapType:(long long)arg1;
@property(readonly, nonatomic) VKAnchorWrapper *externalAnchors;
@property(readonly, nonatomic, getter=isFullyDrawn) BOOL fullyDrawn;
@property(readonly, nonatomic) NSArray *visibleTileSets;
@property(readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(nonatomic) long long annotationTrackingZoomStyle;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
@property(readonly, nonatomic) double maximumZoomLevel;
@property(readonly, nonatomic) double minimumZoomLevel;
@property(retain, nonatomic) NSArray *alwaysVisibleTrafficIncidents;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
@property(nonatomic) long long mapType;
@property(readonly, nonatomic, getter=isFullyPitched) BOOL fullyPitched;
@property(readonly, nonatomic, getter=isPitched) BOOL pitched;
@property(nonatomic) BOOL isPitchable;
@property(nonatomic) BOOL staysCenteredDuringRotation;
@property(nonatomic) BOOL staysCenteredDuringPinch;
@property(nonatomic) BOOL trafficEnabled;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate;
- (void)removeExternalAnchor:(VKAnchorWrapper *)arg1;
- (void)addExternalAnchor:(VKAnchorWrapper *)arg1;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(void (^)(void))arg5;
- (void)stopSnappingAnimations;
- (BOOL)isPointValidForGesturing:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)didStartPanningDeceleration;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(void (^)(void))arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (double)currentZoomLevel;
- (BOOL)isShowingNoDataPlaceholders;
- (NSArray *)attributionsForCurrentRegion;
- (BOOL)restoreViewportFromInfo:(VKViewportInfo *)arg1;
- (VKViewportInfo *)viewportInfo;
- (void)removePersistentOverlay:(id <VKOverlay>)arg1;
- (void)addPersistentOverlay:(id <VKOverlay>)arg1;
- (NSSet *)persistentOverlays;
- (NSArray *)overlays;
- (void)removeOverlay:(id <VKOverlay>)arg1;
- (void)addOverlay:(id <VKOverlay>)arg1;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id <VKTrackableAnnotation>)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (CDStruct_071ac149)centerCoordinate;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toCameraModelPointToLayer:(CALayer *)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToLayer:(CALayer *)arg2;
- (struct CGPoint)convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToLayer:(CALayer *)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toMapPointFromLayer:(CALayer *)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromLayer:(CALayer *)arg2;
- (void)deselectLabelMarker;
- (VKLabelMarker *)selectedLabelMarker;
- (void)selectLabelMarker:(VKLabelMarker *)arg1;
- (VKLabelMarker *)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
- (NSArray *)labelMarkers;
- (VKAnnotationMarker *)selectedAnnotationMarker;
- (NSArray *)annotationMarkers;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL (^)(struct))annotationCoordinateTest;
- (long long (^)(struct))annotationRectTest;
- (void (^)(VKAnnotationMarker *))annotationMarkerDeselectionCallback;
- (void)setAnnotationMarkerDeselectionCallback:(void (^)(VKAnnotationMarker *))arg1;
- (void)deselectAnnotationMarker:(VKAnnotationMarker *)arg1;
- (void)selectAnnotationMarker:(VKAnnotationMarker *)arg1;
- (void)removeAnnotationMarker:(VKAnnotationMarker *)arg1;
- (void)addAnnotationMarker:(VKAnnotationMarker *)arg1 allowAnimation:(BOOL)arg2;
- (VKAnnotationMarker *)annotationMarkerForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(BOOL)arg2;
- (void)debugHighlightLabelAtPoint:(struct CGPoint)arg1;
- (struct VKPoint)screenPointForPoint:(struct CGPoint)arg1;
- (BOOL)currentZoomLevelAllowsRotation;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(float (^)(float))arg6 completion:(void (^)(BOOL))arg7;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (double)durationToAnimateToMapRegion:(GEOMapRegion *)arg1;
- (void)animateToMapRegion:(GEOMapRegion *)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(void (^)(BOOL))arg5;
- (void)setMapRegion:(GEOMapRegion *)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(void (^)(BOOL))arg5;
- (void)setMapRegion:(GEOMapRegion *)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
- (void)setMapRegion:(GEOMapRegion *)arg1 animated:(BOOL)arg2;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(long long)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(long long)arg1 toStyle:(long long)arg2;
- (void)requestStylesheetAnimation:(VKAnimation *)arg1 targetMapDisplayStyle:(long long)arg2 setupHandler:(void (^)(void))arg3;
- (NSString *)consoleString:(BOOL)arg1;
- (NSString *)detailedDescription;
- (void)exit3DMode;
- (void)enter3DMode;
- (BOOL)canEnter3DMode;
@end

