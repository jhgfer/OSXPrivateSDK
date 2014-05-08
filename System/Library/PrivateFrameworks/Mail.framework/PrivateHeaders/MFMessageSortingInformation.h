//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface MFMessageSortingInformation : NSObject
{
    BOOL _isSortedAscending;
    BOOL _skipAutomaticSecondarySort;
    id <MFMessageSortContext> _sortContext;
    NSDictionary *_sortValues;
}

@property(copy, nonatomic) NSDictionary *sortValues; // @synthesize sortValues=_sortValues;
@property(retain, nonatomic) id <MFMessageSortContext> sortContext; // @synthesize sortContext=_sortContext;
@property(nonatomic) BOOL skipAutomaticSecondarySort; // @synthesize skipAutomaticSecondarySort=_skipAutomaticSecondarySort;
@property(nonatomic) BOOL isSortedAscending; // @synthesize isSortedAscending=_isSortedAscending;
- (void)dealloc;

@end

