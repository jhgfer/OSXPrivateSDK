//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

__attribute__((visibility("hidden")))
@interface CloudTabRowView : NSTableRowView
{
    BOOL _shouldDrawBackground;
    BOOL _shouldDrawSeparator;
}

@property BOOL shouldDrawSeparator; // @synthesize shouldDrawSeparator=_shouldDrawSeparator;
@property BOOL shouldDrawBackground; // @synthesize shouldDrawBackground=_shouldDrawBackground;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;

@end

