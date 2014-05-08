//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImageView, NSLayoutConstraint, NSMenuItem, NSTextField;

__attribute__((visibility("hidden")))
@interface OneStepBookmarkingMenuItemView : NSView
{
    id <OneStepBookmarkingMenuItemViewDelegate> _delegate;
    NSImageView *_imageView;
    NSTextField *_titleView;
    NSMenuItem *_owningItem;
    NSLayoutConstraint *_indentationConstraint;
    NSLayoutConstraint *_widthConstraint;
    BOOL _isObservingOwningItem;
    BOOL _highlighted;
}

+ (id)oneStepBookmarkingMenuItemViewForMenuItem:(id)arg1 delegate:(id)arg2;
@property(nonatomic) id <OneStepBookmarkingMenuItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property(nonatomic) NSMenuItem *owningItem; // @synthesize owningItem=_owningItem;
@property(nonatomic) NSTextField *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mouseUp:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateFrame;
- (void)_removeObserverIfNeeded;
- (void)_addObserverIfNeeded;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_updateIdentation;
- (void)dealloc;

@end

