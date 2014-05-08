//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedCell.h"

__attribute__((visibility("hidden")))
@interface FIIconViewICloudSortSegmentCell : NSSegmentedCell
{
    struct TNSRef<NSMutableDictionary *> _segmentFrames;
    long long _lastSelectedSegment;
    long long _realLastSelectedSegment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)frameForSegment:(long long)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSegment:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;
- (void)drawCustomCellTitle:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawCustomCellBezelWithFrame:(struct CGRect)arg1 isSelected:(BOOL)arg2 isPressed:(BOOL)arg3 drawLeftCap:(BOOL)arg4 drawRightCap:(BOOL)arg5;
- (void)setSelectedSegment:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end

