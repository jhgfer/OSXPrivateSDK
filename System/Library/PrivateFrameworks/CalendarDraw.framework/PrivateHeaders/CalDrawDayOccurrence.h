//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDraw/CalDrawOccurrence.h>

@class NSArray, NSIndexSet;

@interface CalDrawDayOccurrence : CalDrawOccurrence
{
    double _hourHeight;
    NSIndexSet *_eventTimeMetrics;
    NSIndexSet *_titleMetrics;
    NSIndexSet *_locationMetrics;
    struct CGPoint _eventTimeEndPoint;
    struct CGPoint _titleEndPoint;
    double _textEndY;
    struct CGRect _eventTimeRect;
    struct CGRect _titleRect;
    double _titleLeftInset;
    struct CGRect _locationRect;
    BOOL _drawBackgroundOnly;
    NSArray *_icons;
    BOOL _capLeftSide;
    BOOL _capRightSide;
}

@property BOOL capRightSide; // @synthesize capRightSide=_capRightSide;
@property BOOL capLeftSide; // @synthesize capLeftSide=_capLeftSide;
@property(copy) NSArray *icons; // @synthesize icons=_icons;
@property BOOL drawBackgroundOnly; // @synthesize drawBackgroundOnly=_drawBackgroundOnly;
@property struct CGRect locationRect; // @synthesize locationRect=_locationRect;
@property double titleLeftInset; // @synthesize titleLeftInset=_titleLeftInset;
@property struct CGRect titleRect; // @synthesize titleRect=_titleRect;
@property struct CGRect eventTimeRect; // @synthesize eventTimeRect=_eventTimeRect;
@property double textEndY; // @synthesize textEndY=_textEndY;
@property struct CGPoint titleEndPoint; // @synthesize titleEndPoint=_titleEndPoint;
@property struct CGPoint eventTimeEndPoint; // @synthesize eventTimeEndPoint=_eventTimeEndPoint;
@property(retain) NSIndexSet *locationMetrics; // @synthesize locationMetrics=_locationMetrics;
@property(retain) NSIndexSet *titleMetrics; // @synthesize titleMetrics=_titleMetrics;
@property(retain) NSIndexSet *eventTimeMetrics; // @synthesize eventTimeMetrics=_eventTimeMetrics;
@property double hourHeight; // @synthesize hourHeight=_hourHeight;
- (double)borderSize;
- (void)drawRect;
- (struct CGColor *)createCurrentTextColor;
- (double)iconWidth;
- (BOOL)hasIcon;
- (void)invalidateMetrics;
- (void)dealloc;
- (id)init;
- (id)initWithWritingDirection:(long long)arg1;
- (id)locationMetricsInTextRect:(struct CGRect)arg1 withFont:(struct __CTFont *)arg2;
- (id)titleMetricsInTextRect:(struct CGRect)arg1 withFont:(struct __CTFont *)arg2;
- (id)eventTimeMetricsInTextRect:(struct CGRect)arg1 withFont:(struct __CTFont *)arg2;

@end

