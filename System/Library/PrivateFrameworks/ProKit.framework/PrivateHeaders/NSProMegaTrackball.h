//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class NSArray, NSColor, NSProMegaColorAdjustment, NSProSegmentedScrubber, NSProTextField, NSProValueMapper, NSString, _VirtualTrackball;

@interface NSProMegaTrackball : NSControl
{
    NSProMegaColorAdjustment *_adjustment;
    id _target;
    SEL _action;
    id _delegate;
    NSProValueMapper *_saturationMapper;
    NSProValueMapper *_lumaMapper;
    NSProValueMapper *_balanceVectorRadiusMapper;
    NSProTextField *_labelTextField;
    _VirtualTrackball *_virtualTrackball;
    NSProSegmentedScrubber *_saturationScrubber;
    NSProSegmentedScrubber *_lumaScrubber;
    BOOL _isUserInteractionEnabled;
    BOOL _isSelected;
    BOOL _selectsOnRollover;
    BOOL _isContinuous;
    BOOL _usesAlternateHueRingOrientation;
    BOOL _drawsBackground;
    BOOL _didNotifyMouseEntered;
    BOOL _didNotifyMouseExited;
    NSColor *_backgroundColor;
    struct CGRect _frameCacheRect;
    NSArray *_frameCache;
    struct CGRect _alternateFrameCacheRect;
    NSArray *_alternateFrameCache;
}

+ (id)primitiveDefaultValue;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) NSArray *alternateFrameCache; // @synthesize alternateFrameCache=_alternateFrameCache;
@property(retain, nonatomic) NSArray *frameCache; // @synthesize frameCache=_frameCache;
@property(readonly, nonatomic) NSProSegmentedScrubber *lumaScrubber; // @synthesize lumaScrubber=_lumaScrubber;
@property(readonly, nonatomic) NSProSegmentedScrubber *saturationScrubber; // @synthesize saturationScrubber=_saturationScrubber;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(nonatomic) BOOL usesAlternateHueRingOrientation; // @synthesize usesAlternateHueRingOrientation=_usesAlternateHueRingOrientation;
@property(nonatomic, getter=isContinuous) BOOL continuous; // @synthesize continuous=_isContinuous;
@property(nonatomic) BOOL selectsOnRollover; // @synthesize selectsOnRollover=_selectsOnRollover;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_isSelected;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_isUserInteractionEnabled;
@property(copy, nonatomic) NSProValueMapper *balanceVectorRadiusValueMapper; // @synthesize balanceVectorRadiusValueMapper=_balanceVectorRadiusMapper;
@property(copy, nonatomic) NSProValueMapper *lumaValueMapper; // @synthesize lumaValueMapper=_lumaMapper;
@property(copy, nonatomic) NSProValueMapper *saturationValueMapper; // @synthesize saturationValueMapper=_saturationMapper;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
- (void)_textfieldClicked:(id)arg1;
- (void)_sendMouseExited:(id)arg1;
- (void)_sendMouseEntered:(id)arg1;
- (void)_sendHandleMouseDown:(id)arg1;
- (void)endSegmentedScrubberAction:(id)arg1;
- (void)startSegmentedScrubberAction:(id)arg1;
- (void)_scrubberAction:(id)arg1;
- (void)_sendEndAction;
- (void)_sendStartAction;
- (void)_sendAction;
- (struct CGRect)_frameForElement:(unsigned long long)arg1 forBounds:(struct CGRect)arg2;
- (id)_framesForBounds:(struct CGRect)arg1;
- (void)_invalidateObservation;
- (void)_setupObservation;
- (BOOL)_didNotifyMouseEntered;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)drawRect:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (BOOL)isOpaque;
- (void)trimToFit;
- (struct CGSize)controlSizeForBounds:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *label;
- (void)resetBalanceVector;
- (void)resetLuma;
- (void)resetSaturation;
- (void)resetValue;
@property(nonatomic) struct _NSProPolarPoint balanceVector;
@property(nonatomic) struct _NSProPolarPoint primitiveBalanceVector;
@property(nonatomic) double luma;
@property(nonatomic) double primitiveLuma;
@property(nonatomic) double saturation;
@property(nonatomic) double primitiveSaturation;
@property(copy, nonatomic) id <NSCopying> objectValue;
@property(copy, nonatomic) id <NSCopying> primitiveObjectValue;
@property(readonly, nonatomic) NSProMegaColorAdjustment *defaultValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateTrackingAreas;
- (void)_tearDownTrackingAreas;
- (void)_setupTrackingAreas;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

