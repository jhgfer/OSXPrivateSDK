//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCarbonMenuImpl.h"

#import "NSWindowDelegate.h"

@class NSPopUpButton, NSRemoteServiceConnection, NSRemoteWindowController, NSWindow;

@interface PBOXPDEMenuImplementation : NSCarbonMenuImpl <NSWindowDelegate>
{
    NSPopUpButton *_popUpButton;
    BOOL _isRunning;
    BOOL _isRemoteMenuInitialized;
    NSWindow *_menuWindow;
    NSRemoteServiceConnection *_serviceConnection;
    NSRemoteServiceConnection *_menuConnection;
    NSRemoteWindowController *_menuWindowController;
    struct dispatch_semaphore_s *_semaphore;
}

- (void)_menuSelectionDidChange:(id)arg1;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)controller:(id)arg1 hasWindowAvailable:(id)arg2;
- (void)_handleEndtracking:(id)arg1;
- (id)_getPrintQueueName;
- (id)_getMenuItemsInfos;
- (void)_initRemoteMenu;
- (void)popUpMenu:(id)arg1 atLocation:(struct CGPoint)arg2 width:(double)arg3 forView:(id)arg4 withSelectedItem:(long long)arg5 withFont:(id)arg6 withFlags:(unsigned long long)arg7 withOptions:(id)arg8;
- (void)cleanup;
- (void)dealloc;
- (id)init;

@end

