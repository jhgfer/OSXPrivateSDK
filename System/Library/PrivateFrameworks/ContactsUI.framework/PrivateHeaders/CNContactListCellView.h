//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ABCardCollectionView, CNContactListCellViewController, NSArray, NSTextField;

@interface CNContactListCellView : NSView
{
    CNContactListCellViewController *_controller;
    ABCardCollectionView *_collectionView;
    NSTextField *_nameView;
    NSArray *_customConstraints;
}

@property(retain) NSArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain) NSTextField *nameView; // @synthesize nameView=_nameView;
@property __weak ABCardCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain) CNContactListCellViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)metrics;
- (id)views;
- (void)updateConstraints;
- (void)setName:(id)arg1 emphasisRange:(struct _NSRange)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)awakeFromNib;

@end

