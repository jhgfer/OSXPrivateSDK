//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTextView;

__attribute__((visibility("hidden")))
@interface SidebarPlaceholderView : NSView
{
    NSTextView *_mainTextView;
    NSTextView *_descriptionTextView;
}

@property(nonatomic) NSTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(nonatomic) NSTextView *mainTextView; // @synthesize mainTextView=_mainTextView;
- (void)superviewFrameDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)awakeFromNib;

@end
