//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

__attribute__((visibility("hidden")))
@interface FI_TOutlineView : NSOutlineView
{
    BOOL _acceptsFirstMouse;
}

@property BOOL acceptsFirstMouse; // @synthesize acceptsFirstMouse=_acceptsFirstMouse;
- (void)drawRect:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (void)addTableColumn:(id)arg1;
@property unsigned long long controlSize; // @dynamic controlSize;
@property BOOL autoforwardsScrollWheelEvents; // @dynamic autoforwardsScrollWheelEvents;
- (void)setLayer:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

