//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BrowserKit/BKImageAndTextCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BKSidebarCell : BKImageAndTextCell
{
    NSString *_extraString;
}

+ (double)extraRowHeight;
+ (id)_extraStringFont;
@property(copy) NSString *extraString; // @synthesize extraString=_extraString;
- (void)setObjectValue:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)cellSize;
- (id)proTextAttributes;
- (void)proTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (void)_textRect:(struct CGRect *)arg1 andImageRect:(struct CGRect *)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_extraStringAttributes;

@end

