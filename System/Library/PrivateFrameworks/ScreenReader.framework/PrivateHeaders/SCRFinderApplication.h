//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRApplication.h>

__attribute__((visibility("hidden")))
@interface SCRFinderApplication : SCRApplication
{
}

- (void)elementWasDestroyed:(id)arg1;
- (id)deepFocusedChild;
- (id)deepKeyboardChild;
- (BOOL)isFinderApplication;
- (void)dispatchFocusOutDesktop;
- (void)_focusOutDesktop;
- (void)dispatchFocusOnDesktop;
- (void)_focusOnDesktop;
- (id)desktop;
- (void)applicationDidInitialize;

@end

