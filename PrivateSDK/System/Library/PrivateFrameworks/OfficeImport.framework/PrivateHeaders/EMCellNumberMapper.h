//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellNumberMapper : CMMapper
{
    double edValue;
    EDStyle *edStyle;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)insertRedSpanIfNegativeAt:(id)arg1;
- (id)formatValueAsNumber;
- (id)initWithDoubleValue:(double)arg1 style:(id)arg2 parent:(id)arg3;

@end
