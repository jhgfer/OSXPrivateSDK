//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_IBaseTableViewController.h>

#import "NSTableViewDelegate.h"

@class FI_TTableViewDataSource;

__attribute__((visibility("hidden")))
@interface FI_TTableViewController : FI_IBaseTableViewController <NSTableViewDelegate>
{
}

- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)setView:(id)arg1;
- (id)tableViewNoLoad;
- (id)tableView;
@property(readonly) FI_TTableViewDataSource *dataSource; // @dynamic dataSource;
- (Class)dataSourceClass;
- (void)finalize;
- (void)dealloc;
- (void)viewLoaded;

@end

