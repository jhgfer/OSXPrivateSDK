//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface FI_TTextField : NSTextField
{
    struct CGSize _maxSize;
    struct CGSize _minSize;
    struct CGSize _idealSize;
    BOOL _suspendCalcIdealSize;
    BOOL _idealSizeIsDirty;
    struct TNSRef<NSColor *> _enabledTextColor;
    struct TNSRef<NSColor *> _disabledTextColor;
    BOOL _autoSizeToFit;
    BOOL _autoAdjustHeightToFit;
    BOOL _sizingInProgress;
    BOOL _drawGrayTextWhenDisabled;
    BOOL _disableWhenWindowIsNotKey;
    BOOL _delayWindowOrderingOnClickThrough;
    BOOL _drawEtched;
}

+ (Class)cellClass;
@property(nonatomic) BOOL drawEtched; // @synthesize drawEtched=_drawEtched;
@property(nonatomic) BOOL delayWindowOrderingOnClickThrough; // @synthesize delayWindowOrderingOnClickThrough=_delayWindowOrderingOnClickThrough;
@property(nonatomic) BOOL disableWhenWindowIsNotKey; // @synthesize disableWhenWindowIsNotKey=_disableWhenWindowIsNotKey;
@property(nonatomic) BOOL drawGrayTextWhenDisabled; // @synthesize drawGrayTextWhenDisabled=_drawGrayTextWhenDisabled;
@property(nonatomic) BOOL autoAdjustHeightToFit; // @synthesize autoAdjustHeightToFit=_autoAdjustHeightToFit;
@property(nonatomic) BOOL autoSizeToFit; // @synthesize autoSizeToFit=_autoSizeToFit;
@property(nonatomic) BOOL suspendCalcIdealSize; // @synthesize suspendCalcIdealSize=_suspendCalcIdealSize;
@property(readonly, nonatomic) struct CGSize idealSize; // @synthesize idealSize=_idealSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)_windowChangedKeyState;
- (double)calcHeightToFit:(struct CGSize)arg1;
- (struct CGSize)calcSizeToFit;
- (struct CGSize)calcIdealSizeImpl;
- (void)calcIdealSize;
- (void)adjustHeightToFit;
- (void)sizeToFit;
- (void)setFont:(id)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSubpixelAntialiasing:(BOOL)arg1;
- (void)setCustomCellAttributesDisabled:(id)arg1;
- (void)setCustomCellAttributesInactiveSelected:(id)arg1;
- (void)setCustomCellAttributesInactive:(id)arg1;
- (void)setCustomCellAttributesSelected:(id)arg1;
- (void)setCustomCellAttributes:(id)arg1;
@property(nonatomic) struct _NSRange truncateInRange; // @dynamic truncateInRange;
@property(retain, nonatomic) NSColor *disabledTextColor; // @dynamic disabledTextColor;
@property(retain, nonatomic) NSColor *enabledTextColor; // @dynamic enabledTextColor;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (id)textAttributes;
- (void)applySettingsFrom:(id)arg1;
- (id)copyTextField;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

