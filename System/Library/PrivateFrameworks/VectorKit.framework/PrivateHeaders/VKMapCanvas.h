//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKScreenCanvas.h>

#import "VKInteractiveMap.h"
#import "VKMapModelDelegate.h"

@class GEOMapRegion, NSArray, VKAnchorWrapper, VKCamera, VKMapCameraController, VKMapModel, VKPolylineOverlayPainter, VKStylesheet;

__attribute__((visibility("hidden")))
@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap>
{
    VKMapModel *_map;
    VKMapCameraController *_cameraController;
    id <VKInteractiveMapDelegate> _delegate;
    struct CGSize _lastCanvasSize;
    VKCamera *_defaultTrackingCamera;
    float _lastValidCanvasSizeZoomLevel;
    BOOL _hasLastValidCanvasSizeZoomLevel;
}

+ (BOOL)supportsMapType:(long long)arg1;
@property(retain, nonatomic) VKCamera *defaultTrackingCamera; // @synthesize defaultTrackingCamera=_defaultTrackingCamera;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKMapModel *map; // @synthesize map=_map;
- (id).cxx_construct;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
@property(readonly, nonatomic) VKAnchorWrapper *externalAnchors;
- (void)setPuckHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
@property(nonatomic) double userZoomFocusStyleMaxGroundspanMeters;
@property(nonatomic) double userZoomFocusStyleMinGroundspanMeters;
@property(nonatomic) double userZoomFocusStyleGroundspanMeters;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(CDStruct_cc67e4ef *)arg2;
- (void)clearScene;
- (void)debugHighlightLabelAtPoint:(struct CGPoint)arg1;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelWillBecomFullyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (BOOL)currentZoomLevelAllowsRotation;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
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
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (double)currentZoomLevel;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
- (void)deselectLabelMarker;
- (void)selectLabelMarker:(id)arg1;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(BOOL)arg2;
- (struct VKPoint)screenPointForPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) NSArray *alwaysVisibleTrafficIncidents;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (CDUnknownBlockType)annotationMarkerDeselectionCallback;
- (id)selectedAnnotationMarker;
- (id)labelMarkers;
- (id)annotationMarkers;
- (void)setAnnotationMarkerDeselectionCallback:(CDUnknownBlockType)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
@property(retain, nonatomic) id <VKRoutePreloadSession> routePreloadSession;
- (void)preloadNavigationSceneAnimationResourcesForDisplayStyle:(long long)arg1;
- (void)preloadNavigationSceneResources;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setCurrentLocationText:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate)arg1;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (id)persistentOverlays;
- (id)overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (id)selectedLabelMarker;
- (id)navTileSource;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
@property(readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
@property(nonatomic) long long annotationTrackingZoomStyle;
@property(nonatomic) double trackingZoomScale;
- (void)cameraController:(id)arg1 pouncingToCameraPosition:(struct VKPoint)arg2 orientation:(const CDStruct_aa5aacbc *)arg3;
@property(nonatomic) int trackingCameraPanStyle;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 pounceCompletionHandler:(CDUnknownBlockType)arg3;
- (void)stopTracking;
- (void)updateCameraContext:(id)arg1;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toCameraModelPointToLayer:(id)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToLayer:(id)arg2;
- (struct CGPoint)convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToLayer:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromLayer:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toMapPointFromLayer:(id)arg2;
- (void)updateCameraForFrameResize;
- (void)forceSceneLoad;
- (void)drawWithTimestamp:(double)arg1;
- (void)_updateViewTransform;
- (BOOL)currentSceneRequiresMSAA;
- (id)consoleString:(BOOL)arg1;
- (void)didPresent;
- (struct VKEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (id)detailedDescription;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setHidden:(BOOL)arg1;
- (id)initShouldRasterize:(BOOL)arg1 contentScale:(double)arg2 inBackground:(BOOL)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (BOOL)canEnter3DMode;
@property(readonly, nonatomic, getter=isFullyPitched) BOOL fullyPitched;
@property(readonly, nonatomic, getter=isPitched) BOOL pitched;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)resetTileContainers;
- (void)transferCamera:(id)arg1;
- (struct CGPoint)_centerScreenPoint;
@property(nonatomic) BOOL allowDatelineWraparound;
@property(readonly, nonatomic) double altitude;
@property(nonatomic) CDStruct_071ac149 centerCoordinate;
- (void)setCenterCoordinate:(CDStruct_071ac149)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setBounds:(struct CGRect)arg1;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (void)stopRegionAnimation;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double pitch;
@property(nonatomic) BOOL shouldLoadMapMargin;
@property(nonatomic) BOOL shouldLoadFallbackTiles;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
- (void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
- (void)setTargetDisplay:(long long)arg1;
- (long long)targetDisplay;
- (void)setContentsScale:(double)arg1;
- (void)setStylesheetName:(id)arg1;
@property(retain, nonatomic) VKStylesheet *stylesheet;
@property(nonatomic) BOOL dynamicMapModesEnabled;
- (void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
@property(readonly, nonatomic) double maximumZoomLevel;
@property(readonly, nonatomic) double minimumZoomLevel;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(long long)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(long long)arg1 toStyle:(long long)arg2;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(long long)arg2 setupHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) long long mapType;
@property(nonatomic) BOOL staysCenteredDuringRotation;
@property(nonatomic) BOOL isPitchable;
@property(nonatomic) BOOL staysCenteredDuringPinch;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
@property(readonly, nonatomic, getter=isFullyDrawn) BOOL fullyDrawn;
@property(nonatomic) BOOL trafficEnabled;
- (BOOL)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;

@end

