/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@interface ACSHView : NSView
{
    unsigned long long _order;
}

@property(nonatomic) unsigned long long order; // @synthesize order=_order;
- (void)dealloc;
- (void)resumeTracking;
- (void)suspendTracking;
- (double)scaleFactorToDrawAt;
- (void)clearImageCache;
- (void)addSubview:(id)arg1;
- (void)updateDepthBasedInformation;
- (id)undoManager;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initView;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;

@end
