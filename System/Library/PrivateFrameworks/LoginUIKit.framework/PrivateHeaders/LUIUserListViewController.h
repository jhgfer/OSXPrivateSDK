//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIViewController.h>

#import "LUIStripViewDataSource.h"
#import "LUIStripViewDelegate.h"

@class LUIButton, LUICredViewController, LUIScrollView, LUIStripView, NSArray;

@interface LUIUserListViewController : LUIViewController <LUIStripViewDelegate, LUIStripViewDataSource>
{
    LUIButton *_prevButton;
    LUIButton *_nextButton;
    LUIScrollView *_scrollView;
    LUIStripView *_stripView;
    BOOL _prevButtonVisible;
    BOOL _nextButtonVisible;
    LUICredViewController *_credController;
    NSArray *_userList;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)arg1;
@property LUICredViewController *credController; // @synthesize credController=_credController;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (void)refresh;
- (void)setUserList:(id)arg1;
- (void)setFocusOnUserList;
- (void)setFocusedItemStyle:(int)arg1;
- (long long)selectedUser;
- (BOOL)isFocusedOnUser;
- (BOOL)focusedUserHasTallName;
- (void)focusOnUser:(long long)arg1 usingPanelStyle:(int)arg2;
- (void)endFocusOnUser;
- (long long)stripView:(id)arg1 indexOfItemMatchingSearchString:(id)arg2;
- (id)stripView:(id)arg1 itemForColumn:(long long)arg2;
- (BOOL)stripView:(id)arg1 isItemExtended:(id)arg2;
- (long long)numberOfItemsInStripView:(id)arg1;
- (id)viewForPopover;
- (void)_setupContentView;
- (void)_layoutContentView;
- (BOOL)_voiceOverEnabled;
- (void)__updatePrevNextButtons;
- (void)_updatePrevNextButtons:(double)arg1;
- (void)_stripViewPositionChanged:(id)arg1;
- (void)_nextButtonPressed:(id)arg1;
- (void)_prevButtonPressed:(id)arg1;
- (void)_backButtonPressed:(id)arg1;
- (void)_scrollStripView:(id)arg1;
- (void)_userPressed:(id)arg1;
- (void)_itemSelected:(id)arg1;

@end

