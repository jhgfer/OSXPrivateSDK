/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProPaneCapView.h>

@class NSString;

// Not exported
@interface NSProContainerItemCapView : NSProPaneCapView
{
    NSString *_itemTitle;
    unsigned long long _itemAlignment;
    unsigned int _emphasized:1;
}

- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)isEmphasized;
- (void)setEmphasized:(BOOL)arg1;
- (unsigned long long)itemTitleAlignment;
- (void)setItemTitleAlignment:(unsigned long long)arg1;
- (id)itemTitle;
- (void)setItemTitle:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;

@end
