/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButton.h"

@class LUITextField, NSArray, NSImage, NSImageView, NSLayoutConstraint, NSTextField;

@interface LUIUserView : NSButton
{
    NSImage *_userPictureImage;
    NSImage *_selectedUserPictureImage;
    NSImageView *_userPictureImageView;
    LUITextField *_userNameTextField;
    NSButton *_actionButton;
    NSLayoutConstraint *_userNameHorizontalConstraint;
    id _representedObject;
    id _userPressedTarget;
    SEL _userPressedSelector;
    int _style;
    NSArray *_topLevelObjects;
}

@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(retain) NSLayoutConstraint *userNameHorizontalConstraint; // @synthesize userNameHorizontalConstraint=_userNameHorizontalConstraint;
@property NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property NSImageView *userPictureImageView; // @synthesize userPictureImageView=_userPictureImageView;
@property(copy) NSImage *selectedUserPictureImage; // @synthesize selectedUserPictureImage=_selectedUserPictureImage;
@property(copy) NSImage *userPictureImage; // @synthesize userPictureImage=_userPictureImage;
- (void)dealloc;
- (id)init;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)highlightChanged:(id)arg1;
- (void)userPressed;
- (BOOL)isFlipped;
- (void)setEnabled:(BOOL)arg1;
@property int style; // @synthesize style=_style;
- (void)setStyle:(int)arg1 animate:(BOOL)arg2;
- (void)setUserPressedTarget:(id)arg1;
- (void)setUserPressedSelector:(SEL)arg1;
- (void)setActionTarget:(id)arg1;
- (void)setActionSelector:(SEL)arg1;
- (void)setUserPicture:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)_updateLayoutWithAnimation:(BOOL)arg1;

@end
