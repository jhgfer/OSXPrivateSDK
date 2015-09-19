/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSIndexSet.h"

@interface NSIndexSet (TSUAdditions)
+ (id)indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)intersectsIndexesInIndexSet:(id)arg1;
@property(readonly, nonatomic) BOOL isSingleContiguousRange;
- (id)indexSetByAddingIndexes:(id)arg1;
- (id)initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
@end
