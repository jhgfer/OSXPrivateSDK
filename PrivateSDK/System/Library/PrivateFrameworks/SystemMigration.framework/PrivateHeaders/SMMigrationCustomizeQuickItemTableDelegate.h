//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IASCommonViewBasedTableDelegate.h"

@class SMMigrationCustomizeViewController;

@interface SMMigrationCustomizeQuickItemTableDelegate : IASCommonViewBasedTableDelegate
{
    SMMigrationCustomizeViewController *controller;
}

@property SMMigrationCustomizeViewController *controller; // @synthesize controller;
- (id)makeNewCellViewWithIdentifier:(id)arg1 forTableView:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)viewIdenfierForTableView:(id)arg1 andRow:(long long)arg2;

@end
