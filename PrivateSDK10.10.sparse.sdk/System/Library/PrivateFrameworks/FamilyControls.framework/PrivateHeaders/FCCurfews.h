/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface FCCurfews : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (int)dayIndexForKeyString:(id)arg1;
+ (id)keyStringForDayIndex:(int)arg1;
+ (id)curfewsWithDictionary:(id)arg1;
+ (id)curfews;
- (id)description;
- (void)removeWeekendCurfew;
- (void)removeWeekdayCurfew;
- (void)setWeekendCurfewStarting:(id)arg1 ending:(id)arg2;
- (void)setWeekdayCurfewStarting:(id)arg1 ending:(id)arg2;
- (id)weekendCurfewEndingTime;
- (id)weekdayCurfewEndingTime;
- (id)weekendCurfewStartingTime;
- (id)weekdayCurfewStartingTime;
- (BOOL)isDateCurfewed:(id)arg1;
- (id)curfewStartDateCurrentlyInEffect;
- (id)nextNonCurfewDateAfterDate:(id)arg1;
- (id)nextCurfewDateAfterDate:(id)arg1;
- (void)removeAllCurfews;
- (void)removeTimeRangesInRange:(id)arg1 forDay:(id)arg2;
- (void)addTimeRange:(id)arg1 forDay:(id)arg2;
- (BOOL)hasCurfews;
- (id)plistRepresentation;
- (id)_firstNonCurfewTimeForRanges:(id)arg1 afterTime:(id)arg2;
- (id)_firstCurfewTimeForRanges:(id)arg1 afterTime:(id)arg2 beforeTime:(id)arg3 includeMedial:(BOOL)arg4;
- (void)_prep;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;

@end
