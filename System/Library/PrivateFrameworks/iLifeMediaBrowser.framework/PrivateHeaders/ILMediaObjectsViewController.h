//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMatrixDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class ILMediaBrowserDividerView, ILMediaBrowserImageView, ILMediaBrowserObjectSearchAndSelectionState, ILMediaBrowserPreviewView, ILMediaBrowserStarRatingControl, ILMediaGroup, ILMediaGroupsTreeController, ILMediaObjectsArrayController, NSArray, NSColor, NSFont, NSImage, NSMenu, NSMutableDictionary, NSOutlineView, NSPopUpButton, NSScrollView, NSTableView, NSTextField, NSValueTransformer, NSView;

@interface ILMediaObjectsViewController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSMatrixDelegate>
{
    ILMediaGroupsTreeController *_mediaGroupsTreeController;
    ILMediaObjectsArrayController *_mediaObjectsArrayController;
    NSScrollView *_mediaGroupsScrollView;
    NSOutlineView *_mediaGroupsOutlineView;
    NSPopUpButton *_mediaGroupsPopUpButton;
    NSScrollView *_mediaObjectsScrollView;
    NSTableView *_mediaObjectsTableView;
    ILMediaBrowserImageView *_mediaObjectsImageView;
    NSTableView *_playlistsTableView;
    NSTableView *_photoAlbumsTableView;
    NSView *_photoEventsView;
    NSView *_facesView;
    NSTextField *_messageTextField;
    ILMediaBrowserStarRatingControl *_ratingControl;
    ILMediaBrowserDividerView *_dividerView;
    NSView *_clipboardView;
    NSArray *_currentColumnDicts;
    NSMutableDictionary *_columnVisibilityDict;
    NSValueTransformer *_groupObjectCountTransformer;
    BOOL _usingIK;
    BOOL _inFrameChange;
    BOOL _iMovieProjectsIconMode;
    BOOL _showGroupsListInPopUpMode;
    BOOL _allowsUserAddedCustomFolders;
    BOOL _singleWindowMode;
    id _clickedItem;
    ILMediaGroup *_collectionViewDisplayedGroup;
    long long _selectedCollectionViewGroupIndex;
    id _lastSelection;
    NSMenu *_audioSearchMenu;
    NSMenu *_imageSearchMenu;
    NSMenu *_movieSearchMenu;
    ILMediaBrowserPreviewView *_previewView;
    NSColor *_backgroundColor;
    NSColor *_itemCountTextColor;
    NSFont *_tableTextFont;
    NSColor *_tableTextColor;
    NSColor *_tableGridColor;
    NSColor *_tableSelectionColor;
    NSArray *_tableAlternatingRowsColors;
    NSColor *_outlineTriangleColor;
    NSImage *_playButtonImage;
    NSImage *_playButtonHighlightedImage;
    NSImage *_stopButtonImage;
    NSImage *_stopButtonHighlightedImage;
    NSImage *_audioPlayingImage;
    id _delegate;
    BOOL _isShowingClipboard;
    unsigned long long _clipboardSavedBrowserType;
    ILMediaBrowserObjectSearchAndSelectionState *_searchAndSelectionState;
    unsigned long long _audioMediaDisplayMode;
    unsigned long long _imageMediaDisplayMode;
    unsigned long long _videoMediaDisplayMode;
}

+ (void)initialize;
- (void)addAppDefinedFolder:(id)arg1 forBrowser:(unsigned long long)arg2;
- (BOOL)allowsUserAddedCustomFolders;
- (void)setAllowsUserAddedCustomFolders:(BOOL)arg1;
- (BOOL)isCustomFolder:(id)arg1 forBrowser:(unsigned long long)arg2;
- (void)removeCustomFolderPaths:(id)arg1 forBrowser:(unsigned long long)arg2;
- (void)addCustomFolderPaths:(id)arg1 forBrowser:(unsigned long long)arg2;
- (void)loadSavedCustomFolderPathsForBrowser:(unsigned long long)arg1;
- (id)audioPlayingImage;
- (void)setAudioPlayingImage:(id)arg1;
- (id)stopButtonHighlightedImage;
- (void)setStopButtonHighlightedImage:(id)arg1;
- (id)stopButtonImage;
- (void)setStopButtonImage:(id)arg1;
- (id)playButtonHighlightedImage;
- (void)setPlayButtonHighlightedImage:(id)arg1;
- (id)playButtonImage;
- (void)setPlayButtonImage:(id)arg1;
- (id)itemCountTextColor;
- (void)setItemCountTextColor:(id)arg1;
- (id)outlineTriangleColor;
- (void)setOutlineTriangleColor:(id)arg1;
- (id)tableSelectionColor;
- (void)setTableSelectionColor:(id)arg1;
- (id)tableAlternatingRowsColors;
- (void)setTableAlternatingRowColors:(id)arg1;
- (id)tableGridColor;
- (void)setTableGridColor:(id)arg1;
- (id)tableTextColor;
- (void)setTableTextColor:(id)arg1;
- (id)tableTextFont;
- (void)setTableTextFont:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)usageCountBadgeInfoForMediaObject:(id)arg1 thumbnailRect:(struct CGRect)arg2;
- (id)updateBadgeInfo:(id)arg1 forMediaObject:(id)arg2 thumbnailRect:(struct CGRect)arg3;
- (void)hidePreviewWindow;
- (void)previewEnterKeyAction:(id)arg1;
- (void)previewMediaObject:(id)arg1;
- (void)showPreviewWindow;
- (BOOL)validateMenuItem:(id)arg1;
- (id)ratingControl;
- (void)ratingSearch:(id)arg1;
- (void)limitSearch:(id)arg1;
- (id)currentSearchMenu;
- (void)contextMenuRemoveCustomFolder:(id)arg1;
- (void)contextMenuAddFolders:(id)arg1;
- (void)contextMenuToggleColumn:(id)arg1;
- (void)contextMenuChangeView:(id)arg1;
- (void)contextMenuReveal:(id)arg1;
- (void)contextMenuOpen:(id)arg1;
- (id)contextMenuForMediaGroup:(id)arg1;
- (id)mediaBrowserViewDelegateRespondingToSelector:(SEL)arg1;
- (void)extendContextMenu:(id)arg1 forMediaObject:(id)arg2;
- (id)contextMenuForMediaObject:(id)arg1;
- (BOOL)isInClipboardMode;
- (void)hideClipboard;
- (void)showClipboard;
- (void)toggleClipboard;
- (BOOL)isSingleWindowModeEnabled;
- (void)setSingleWindowModeEnabled:(BOOL)arg1;
- (id)_tableColumnFromDictionary:(id)arg1;
- (void)_showAlertForMissingAudioFile:(id)arg1;
- (void)_showAlertForGarageBandProject:(id)arg1;
- (id)_unicodeStringToAppleScript:(id)arg1;
- (id)_truncateString:(id)arg1 toWidth:(double)arg2;
- (void)refreshLoadingDisplay:(id)arg1;
- (void)contentFrameChanged:(id)arg1;
- (void)groupSelectionChanged:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (id)clickedItem;
- (id)groupsWithUnfilteredObjectsInArray:(id)arg1;
- (void)updateItemCountString;
- (void)itemDoubleClicked:(id)arg1;
- (void)notifyCoalescedWithName:(id)arg1 object:(id)arg2;
- (void)_popUpSelectionChanged:(id)arg1;
- (void)_addGroupToPopUp:(id)arg1 indentationLevel:(long long)arg2;
- (void)_updateGroupsPopUp;
- (id)recursiveAllChildNodesForNode:(id)arg1;
- (id)previewableObjects;
- (BOOL)isShowingPreviewView;
- (BOOL)isPreviewing;
- (BOOL)canPreview;
- (void)togglePreview;
- (void)stopPreview;
- (void)startPreview;
- (void)windowWillMiniaturize:(id)arg1;
- (void)setFilterString:(id)arg1;
- (void)restoreObjectSearchAndSelectionState;
- (void)storeObjectSearchAndSelectionState;
- (id)collectionViewDisplayedGroup;
- (void)clearLastCollectionViewDisplayedGroup;
- (id)findLastCollectionViewDisplayedGroupInGroup:(id)arg1;
- (void)storeCollectionViewDisplayedGroup;
- (void)selectMediaObjectIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectMediaObject:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectMediaGroupIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectMediaGroup:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setVerticalMotionCanBeginDrag:(BOOL)arg1;
- (void)displayAttributedMessage:(id)arg1;
- (void)displayMessage:(id)arg1;
- (BOOL)showDisplayMessageForSelectedGroupNodes:(id)arg1;
- (void)loadSavedSortDescriptorsForTableAutosaveName:(id)arg1;
- (void)storeSortDescriptors:(id)arg1 forTableAutosaveName:(id)arg2;
- (BOOL)selectedGroupsContainRatings;
- (BOOL)selectedGroupsContainPodcasts;
- (void)setupMediaObjectsTableView;
- (void)updateMediaObjectsViewToSelectedGroups:(id)arg1;
- (id)collectionViewRepresentedObjects;
- (void)displayMediaSourcesForBrowserType:(unsigned long long)arg1;
- (void)syncTreeNodeSelections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)mediaDisplayModeForBrowserType:(unsigned long long)arg1;
- (void)setMediaDisplayMode:(unsigned long long)arg1 forBrowserType:(unsigned long long)arg2;
- (id)dividerView;
- (id)messageView:(id)arg1;
- (id)photoAlbumsTableView;
- (id)playlistsTableView;
- (id)currentMediaObjectCollectionView;
- (BOOL)currentMediaObjectViewDisplaysCollections;
- (void)configureCollectionView:(id)arg1;
- (id)facesView;
- (id)photoEventsView;
- (id)mediaObjectsImageView;
- (id)mediaObjectsTableView;
- (id)mediaObjectsScrollView;
- (id)mediaGroupsPopUpButton;
- (id)mediaGroupsOutlineView;
- (id)mediaGroupsScrollView;
- (id)mediaGroupsTreeController;
- (id)mediaObjectsArrayController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)refresh;
- (void)dealloc;
- (id)init;
- (void)outlineViewDidBecomeFirstResponder:(id)arg1;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 uniqueValueForObservedObject:(id)arg2;
- (BOOL)outlineView:(id)arg1 removeItems:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)matrix:(id)arg1 writeCells:(id)arg2 toPasteboard:(id)arg3;
- (id)matrix:(id)arg1 toolTipForCell:(id)arg2;
- (void)matrixSelectionDidChange:(id)arg1;
- (id)tempMediaGroupForGroupNode:(id)arg1;
- (BOOL)writeMediaObjects:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)writeMediaGroups:(id)arg1 toPasteboard:(id)arg2;
- (void)imageBrowser:(id)arg1 removeItemsAtIndexes:(id)arg2;
- (void)imageBrowser:(id)arg1 enterKeyAction:(id)arg2;
- (BOOL)imageBrowser:(id)arg1 shouldSelectCellAtIndex:(unsigned long long)arg2;
- (id)imageBrowser:(id)arg1 attributedStringValueForMediaObject:(id)arg2;
- (void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)imageBrowserSelectionDidChange:(id)arg1;
- (unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;

@end

