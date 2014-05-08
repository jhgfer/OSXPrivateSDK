//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface FilteredCollectionHelper : NSObject
{
    NSArray *_fullCollection;
    NSArray *_filteredCollection;
    NSSet *_filteredSet;
}

@property(copy, nonatomic) NSArray *fullCollection; // @synthesize fullCollection=_fullCollection;
- (id)_filteredSet;
- (id)filteredItemPrecedingItem:(id)arg1;
- (id)filteredItemFollowingItem:(id)arg1;
@property(copy, nonatomic) NSArray *filteredCollection; // @synthesize filteredCollection=_filteredCollection;
- (void)dealloc;

@end

