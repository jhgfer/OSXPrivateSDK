/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "ExtendedWindowDelegate-Protocol.h"

@class NSString;

// Not exported
@interface WindowController : NSWindowController <ExtendedWindowDelegate>
{
    NSString *_multiWindowFrameAutosaveName;
    BOOL _autosaveFrame;
    BOOL _lastResizeWasProgrammatic;
}

- (void).cxx_destruct;
- (BOOL)frameAutosaveIsAllowed;
- (BOOL)frameAutosaveEnabled;
- (void)setFrameAutosaveEnabled:(BOOL)arg1;
- (void)_windowDidLoad;
- (void)setFrameToDefault;
- (struct CGRect)defaultFrame;
- (BOOL)lastResizeWasProgrammatic;
- (void)setFrameProgrammatically:(struct CGRect)arg1;
- (void)setFrameWithoutAutosaving:(struct CGRect)arg1;
- (void)_setFrameWithoutAutosaving:(struct CGRect)arg1 programmatically:(BOOL)arg2;
- (id)multiWindowFrameAutosaveName;
- (BOOL)setMultiWindowFrameAutosaveName:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)_saveFrameIfAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
