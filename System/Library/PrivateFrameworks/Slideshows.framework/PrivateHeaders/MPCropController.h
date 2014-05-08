//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPDocument, NSRecursiveLock;

@interface MPCropController : NSObject
{
    id _delegate;
    MPDocument *_authoredDocument;
    NSRecursiveLock *_cropLock;
}

+ (void)releaseSharedController;
+ (id)sharedController;
- (void)applyCropToSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)applyCropToSlidesInEffectContainers:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)_applyCropToSlidesInEffectContainersWithArguments:(id)arg1;
- (void)cropSlidesForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)cropSlidesInDocument:(id)arg1 withOptions:(id)arg2;
- (void)batchCrop:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (double)durationOfSlide:(id)arg1;
- (void)applyMultiFaceAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2;
- (void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 centeredAt:(struct CGPoint)arg3 alwaysZoomIn:(BOOL)arg4;
- (void)applyAnimatedCropToBreakSlide:(id)arg1 withOptions:(id)arg2;
- (struct CGPoint)checkFarApartROIs:(id)arg1 withImageSize:(struct CGSize)arg2 visibleAspectRatio:(double)arg3 roiCenter:(struct CGPoint)arg4;
- (void)applyStationaryCropToSlide:(id)arg1 withOptions:(id)arg2;
- (void)applyAnimatedCropWithROIsToSlide:(id)arg1 withOptions:(id)arg2;
- (void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2;
- (void)applyCropToSlide:(id)arg1 withOptions:(id)arg2;
- (void)cleanup;
- (void)setupWithDocument:(id)arg1 andOptions:(id)arg2;

@end

