//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaUI/MediaUIMutableValueTiming.h>

@interface MediaUIConcreteMutableValueTiming : MediaUIMutableValueTiming
{
    double _value;
    double _timeStamp;
    double _rate;
}

- (CDStruct_c3b9c2ee)_timing;
- (void)setRate:(double)arg1;
- (void)setAnchorTimeStamp:(double)arg1;
- (void)setAnchorValue:(double)arg1;
- (double)rate;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;

@end

