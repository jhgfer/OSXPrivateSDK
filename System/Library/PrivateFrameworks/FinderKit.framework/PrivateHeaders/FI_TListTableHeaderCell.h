//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableHeaderCell.h"

__attribute__((visibility("hidden")))
@interface FI_TListTableHeaderCell : NSTableHeaderCell
{
    BOOL _selected;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

