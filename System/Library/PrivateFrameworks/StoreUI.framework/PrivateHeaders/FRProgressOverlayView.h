//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface FRProgressOverlayView : NSView
{
    float _percentComplete;
}

@property(nonatomic) float percentComplete; // @synthesize percentComplete=_percentComplete;
- (void)resetProgress;
- (void)updateLayer;
- (id)_barColor;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

