//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreUI/FROSUpdateRollUpItem.h>

@class NSArray, SUAppStoreUpdate;

@interface FROSUpdateItem : FROSUpdateRollUpItem
{
    NSArray *_osUpdates;
    NSArray *_osUpdateItems;
    SUAppStoreUpdate *_osUpdate;
}

@property(readonly) SUAppStoreUpdate *osUpdate; // @synthesize osUpdate=_osUpdate;
- (id)osUpdateItems;
- (id)osUpdates;
- (void).cxx_destruct;
- (BOOL)isLeaf;
- (id)releaseNotes;
- (id)title;
- (id)initWithOSUpdate:(id)arg1;

@end

