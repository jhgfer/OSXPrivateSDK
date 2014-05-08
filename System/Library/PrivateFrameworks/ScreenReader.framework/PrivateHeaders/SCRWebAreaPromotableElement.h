//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRPromotableElement.h>

@class NSArray, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRWebAreaPromotableElement : SCRPromotableElement
{
    unsigned long long _childIndex;
    SCRElement *_readContentsElement;
    NSArray *_stitchedTextElements;
    long long _childrenCount;
}

- (BOOL)isGestureContainerElement;
- (BOOL)shouldIncludeInItemChooser;
- (BOOL)shouldPromoteForMovingUIElement:(id)arg1;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)numberOfChildren:(BOOL)arg1;
- (id)children:(BOOL)arg1;
- (void)sendBrailleLineWithElement:(id)arg1 focusThrough:(BOOL)arg2 forceRebuild:(BOOL)arg3;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)updateBrailleLineWithFocusedElement:(id)arg1;
- (void)_buildBrailleLineWithFocusedElement:(id)arg1;
- (id)visibleChildrenDescriptionIgnoringChild:(id)arg1;
- (struct CGRect)visibleBounds;
- (BOOL)shouldMapElement:(id)arg1;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (id)childInAXOrderForward:(BOOL)arg1 horizontal:(BOOL)arg2 visibleOnly:(BOOL)arg3 wrapped:(char *)arg4;
- (BOOL)canWrapWhileNavigating;
- (BOOL)defersKeyboardHelpCommandsToParent;
- (id)childrenInReadContentsOrder;
- (id)readContentsElement;
- (void)forgetReadContentsElement;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)arg1;
- (unsigned long long)readContentsElementCount;
- (void)_setReadContentsElement:(id)arg1;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (id)prepareArrayToFocusInto;
- (id)lastChildForFocusing;
- (id)firstChildForFocusing;
- (void)_setChildIndex:(long long)arg1;
- (long long)_childIndex;
- (BOOL)needToRebuildChildren;
- (void)addItemNameToRequest:(id)arg1;
- (id)stitchedTextElements;
- (BOOL)containsStitchedText;
- (BOOL)canFocusOutInto;
- (BOOL)focusInto:(id)arg1;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

