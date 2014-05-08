//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

@class NSButton, NSSearchField, PrivacyPreferences;

__attribute__((visibility("hidden")))
@interface AcceptedSiteData : SheetWithTableController
{
    NSSearchField *searchField;
    NSButton *doneButton;
    PrivacyPreferences *privacyPreferencesModule;
    Vector_d567fe85 m_websiteTrackingData;
    Vector_d567fe85 m_unfilteredWebsiteTrackingData;
    struct HashSet<Safari::CF::String, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>> m_selectedSites;
    struct OwnPtr<Safari::IconObserver> _iconObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)removeAllItems:(id)arg1;
- (BOOL)_confirmRemoveAllItems;
- (void)removeSelectedItems:(id)arg1;
- (void)search:(id)arg1;
- (void)websiteTrackingDataUpdated;
- (void)_refreshAllIcons;
- (void)_reloadDataAndRestoreSelection;
- (void)filterTrackingData:(id)arg1;
- (void)reloadDataAndRestoreSelectedSites;
- (id)filterStringFromSearchField;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)awakeFromNib;

@end

