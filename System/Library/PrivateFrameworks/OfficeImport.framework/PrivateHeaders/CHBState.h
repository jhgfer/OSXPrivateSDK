//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHBState : NSObject
{
    CHDChart *mChart;
    struct __CFArray *mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    id <CHAutoStyling> mAutoStyling;
    _Bool mHasPrimaryMixedArea;
    _Bool mHasPrimaryMixedColumn;
    _Bool mHasPrimaryMixedLine;
    _Bool mHasSecondaryMixedArea;
    _Bool mHasSecondaryMixedColumn;
    _Bool mHasSecondaryMixedLine;
}

- (unsigned int)chartGroupIndexForType:(int)arg1 isForPrimary:(_Bool)arg2;
- (void)setHasSecondaryMixedLine:(_Bool)arg1;
- (_Bool)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedColumn:(_Bool)arg1;
- (_Bool)hasSecondaryMixedColumn;
- (void)setHasSecondaryMixedArea:(_Bool)arg1;
- (_Bool)hasSecondaryMixedArea;
- (void)setHasPrimaryMixedLine:(_Bool)arg1;
- (_Bool)hasPrimaryMixedLine;
- (void)setHasPrimaryMixedColumn:(_Bool)arg1;
- (_Bool)hasPrimaryMixedColumn;
- (void)setHasPrimaryMixedArea:(_Bool)arg1;
- (_Bool)hasPrimaryMixedArea;
- (id)autoStyling;
- (void)deleteXlChartDataSeriesCollection;
- (void)readAndCacheXlChartDataSeries;
- (int)xlSeriesCount;
- (int)xlCurrentChartDataSeriesIndex;
- (struct XlChartDataSeries *)xlCurrentChartDataSeries;
- (void)setXlCurrentSeriesIndex:(int)arg1;
- (struct XlChartDataSeries *)xlChartDataSeriesAtIndex:(int)arg1;
- (id)resources;
- (id)workbook;
- (void)setChart:(id)arg1;
- (id)chart;
- (void)dealloc;
- (id)init;

@end

