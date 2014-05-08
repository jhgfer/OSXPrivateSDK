//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSColor;

@interface PKButtonCell : NSButtonCell
{
    NSColor *_textColor;
    NSColor *_passBackgroundColor;
}

@property(retain) NSColor *passBackgroundColor; // @synthesize passBackgroundColor=_passBackgroundColor;
@property(retain) NSColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)highlightColorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

