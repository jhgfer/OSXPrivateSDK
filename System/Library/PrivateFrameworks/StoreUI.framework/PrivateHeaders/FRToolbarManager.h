//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSToolbarDelegate.h"
#import "NSWindowDelegate.h"

@class CKUpdateController, FRAppDelegate, FRNavigationController, FRProgressSpin, FRStoreViewController, NSButton, NSMutableArray, NSMutableDictionary, NSSearchField, NSSegmentedControl, NSString, NSToolbar, NSView;

@interface FRToolbarManager : NSObject <NSToolbarDelegate, NSWindowDelegate>
{
    NSToolbar *_toolbar;
    NSSegmentedControl *_ToolbarHistoryControl;
    FRAppDelegate *_appDelegate;
    NSSearchField *_searchField;
    NSButton *_accountButton;
    NSMutableArray *_toolbarDefaultItems;
    NSMutableArray *_toolbarAllowedItems;
    NSMutableDictionary *_toolbarItemsDict;
    NSMutableArray *_iconInfoArray;
    BOOL _historyButtonEnabledOverwritten;
    BOOL _updateInProgress;
    NSString *_itemToLoadOnUpdate;
    BOOL _itemToLoadOnUpdateLaunchedFromNotification;
    CKUpdateController *_updateController;
    NSString *_itemToSelectOnUpdate;
    NSView *_toolbarView;
    NSView *_toolbarViewButtonsSubview;
    FRProgressSpin *_toolbarViewProgressSpinner;
    FRStoreViewController *_storeViewController;
    FRNavigationController *_navigationController;
}

+ (BOOL)restrictToolbarItemID:(id)arg1;
@property(retain) FRNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly) FRProgressSpin *toolbarViewProgressSpinner; // @synthesize toolbarViewProgressSpinner=_toolbarViewProgressSpinner;
@property __weak FRStoreViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
@property(readonly) BOOL updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property BOOL historyButtonEnabledOverwritten; // @synthesize historyButtonEnabledOverwritten=_historyButtonEnabledOverwritten;
- (void).cxx_destruct;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (struct CGRect)searchFieldFramingViewRect;
- (struct CGPoint)searchFieldFrameOriginInFullScreen:(BOOL)arg1;
- (struct CGRect)historySegmentedControlFramingViewRect;
- (struct CGPoint)historySegmentedControlFrameOriginInFullScreen:(BOOL)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)goToURL:(id)arg1;
- (id)selectedToolbarItemIdentifier;
- (BOOL)isToolbarItemSelected:(id)arg1;
- (void)goToURLForToolbarItem:(id)arg1;
- (void)selectToolbarItemForURL:(id)arg1;
- (void)selectToolbarItem:(id)arg1;
- (void)unselectAll:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)selectToolbarItemForCurrentPageInWebView;
- (void)traverseHistory:(id)arg1;
- (void)performSearchForString:(id)arg1;
- (void)doSearch:(id)arg1;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (void)setHistoryButtonsEnabled:(BOOL)arg1;
- (void)_updateHistoryButtons;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_observeAvailableUpdates;
- (void)_toolbarViewFrameChanged:(id)arg1;
- (id)toolbarViewWithWidth:(double)arg1;
- (void)dealloc;
- (id)init;
- (void)awakeFromNib;
- (void)didUseCachedStoreFrontURL:(id)arg1;
- (void)didRedirectFromURL:(id)arg1 toFinalURL:(id)arg2;
- (BOOL)shouldReloadPageWithURL:(id)arg1;
- (BOOL)canGoToHistoryIndex:(long long)arg1;
- (void)goToHistoryIndex:(long long)arg1;
- (void)emulateGoBackwardWithButtonPress:(BOOL)arg1;
- (void)emulateGoForwardWithButtonPress:(BOOL)arg1;
- (void)emulateGoBackward:(id)arg1;
- (void)emulateGoForward:(id)arg1;
- (void)reachabilityChanged:(BOOL)arg1;
- (id)referrerForURL:(id)arg1;
- (id)postDataKeysForURL:(id)arg1;
- (BOOL)needsPOSTDataForURL:(id)arg1;
- (void)updateWithBagAndGoToItem:(id)arg1;
- (id)searchField;
- (void)updateViews;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)_handleButtonSelectedNotification:(id)arg1;
- (void)_layoutToolbarView;
- (void)_addToolbarItems;
- (id)_nativeViewControllerForItem:(id)arg1 withInfo:(id)arg2;
- (id)_cachedToolbarItems;
- (BOOL)_cacheToolbarItems;
- (void)_updateStoreMenu;
- (void)_fetchToolbarIcons;
- (void)_copyBag;
- (id)_defaultIconForIdentifier:(id)arg1;
- (id)_toolbarItemForID:(id)arg1;

@end

