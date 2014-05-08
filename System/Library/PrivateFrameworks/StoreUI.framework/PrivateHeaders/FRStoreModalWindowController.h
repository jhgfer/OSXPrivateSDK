//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class FRStoreModalViewController, NSDictionary, NSString;

@interface FRStoreModalWindowController : NSWindowController <NSWindowDelegate>
{
    struct _NSModalSession *_modalSession;
    NSString *_windowID;
    NSDictionary *_context;
    NSDictionary *_closingContext;
    FRStoreModalViewController *_storeViewController;
}

+ (id)newWindowControllerWithWindowID:(id)arg1 context:(id)arg2;
+ (id)existingControllerWithWindowID:(id)arg1;
+ (id)_windowControllers;
@property(readonly) FRStoreModalViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
@property(readonly) NSDictionary *closingContext; // @synthesize closingContext=_closingContext;
@property(readonly) NSDictionary *context; // @synthesize context=_context;
@property(readonly) NSString *windowID; // @synthesize windowID=_windowID;
- (void).cxx_destruct;
- (BOOL)_resizable;
- (id)_data;
- (id)_backgroundColor;
- (double)_height;
- (double)_width;
- (id)_html;
- (id)_url;
- (id)_title;
- (void)windowWillClose:(id)arg1;
- (void)closeWithContext:(id)arg1;
- (void)showModalWindowWithContext:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindowID:(id)arg1 context:(id)arg2;

@end

