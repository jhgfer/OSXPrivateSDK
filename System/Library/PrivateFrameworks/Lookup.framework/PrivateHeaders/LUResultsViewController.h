//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSAnimationDelegate.h"
#import "NSPopoverDelegate.h"

@class LUModule, LUNoResultsViewController, LUResultsTitleViewController, NSMenu, NSMutableArray, NSScrollView, NSString, NSTimer, NSViewAnimation;

@interface LUResultsViewController : NSViewController <NSAnimationDelegate, NSPopoverDelegate>
{
    NSScrollView *_scrollView;
    NSTimer *_refreshViewTimer;
    LUResultsTitleViewController *_titleViewController;
    LUNoResultsViewController *_noResultsViewController;
    NSString *_searchTerm;
    NSString *_language;
    NSString *_partOfSpeech;
    NSMutableArray *_modules;
    LUModule *_expandedModule;
    LUModule *_previousExpandedModule;
    NSViewAnimation *_animation;
    BOOL _needsAnimation;
    BOOL _ignoreModuleNotifications;
    long long _pendingResults;
    BOOL _popoverDidShow;
    NSMenu *_imageSearchProviderMenu;
    BOOL _asyncResultsTimedOut;
}

+ (struct CGSize)maximumSize;
+ (struct CGSize)viewSizeForModuleCount:(long long)arg1;
+ (void)initialize;
@property BOOL asyncResultsTimedOut; // @synthesize asyncResultsTimedOut=_asyncResultsTimedOut;
@property(retain) NSMenu *imageSearchProviderMenu; // @synthesize imageSearchProviderMenu=_imageSearchProviderMenu;
@property BOOL popoverDidShow; // @synthesize popoverDidShow=_popoverDidShow;
@property long long pendingResults; // @synthesize pendingResults=_pendingResults;
@property BOOL ignoreModuleNotifications; // @synthesize ignoreModuleNotifications=_ignoreModuleNotifications;
@property BOOL needsAnimation; // @synthesize needsAnimation=_needsAnimation;
@property(retain) NSViewAnimation *animation; // @synthesize animation=_animation;
@property(retain) LUModule *previousExpandedModule; // @synthesize previousExpandedModule=_previousExpandedModule;
@property(retain) LUModule *expandedModule; // @synthesize expandedModule=_expandedModule;
@property(retain) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain) NSString *partOfSpeech; // @synthesize partOfSpeech=_partOfSpeech;
@property(retain) NSString *language; // @synthesize language=_language;
@property(retain) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain) LUNoResultsViewController *noResultsViewController; // @synthesize noResultsViewController=_noResultsViewController;
@property(retain) LUResultsTitleViewController *titleViewController; // @synthesize titleViewController=_titleViewController;
@property(retain) NSTimer *refreshViewTimer; // @synthesize refreshViewTimer=_refreshViewTimer;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setProviderBing:(id)arg1;
- (void)setProviderYahoo:(id)arg1;
- (void)setProviderGoogle:(id)arg1;
- (void)animateToExpandedModule;
- (void)layoutForExpandedModule;
- (void)refreshView;
- (void)asyncResultTimeout:(id)arg1;
- (void)timedRefreshView:(id)arg1;
- (void)scheduleRefreshView:(double)arg1;
- (id)viewAnimationsToDesiredFramesForRect:(struct CGRect)arg1 expandedModule:(id)arg2;
- (void)calculateDesiredFramesForRect:(struct CGRect)arg1 expandedModule:(id)arg2;
- (id)visibleModules;
- (BOOL)requestDetailView:(id)arg1;
- (BOOL)requestListView;
- (void)observeModuleNotification:(id)arg1;
- (void)optInPreferenceChanged:(id)arg1;
- (id)impliedExpandedModule;
- (void)setSearchTerm:(id)arg1 language:(id)arg2 partOfSpeech:(id)arg3;
- (void)commonLUResultsViewControllerTeardown;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

