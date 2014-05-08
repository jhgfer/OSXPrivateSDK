//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSImageView, NSLayoutConstraint, NSMutableArray, NSString, NSTextField;

@interface IOBluetoothPasskeyDisplay_tmp : NSView
{
    NSImageView *mReturnImageView;
    NSImage *mReturnImage;
    NSImage *mReturnHighlightImage;
    NSImageView *mBackgroundImage;
    BOOL usePasskeyNotifications;
    NSString *passkey;
    NSTextField *mPasskeyString;
    NSMutableArray *mPasskeyCharacters;
    unsigned long long mPasskeyIndex;
    NSLayoutConstraint *backgroundImageConstraint;
    NSView *centeredView;
}

+ (id)sharedDisplayView;
@property NSView *centeredView; // @synthesize centeredView;
@property NSLayoutConstraint *backgroundImageConstraint; // @synthesize backgroundImageConstraint;
@property(retain) NSImage *returnHighlightImage; // @synthesize returnHighlightImage=mReturnHighlightImage;
@property(retain) NSImage *returnImage; // @synthesize returnImage=mReturnImage;
@property(copy) NSString *passkey; // @synthesize passkey;
@property BOOL usePasskeyNotificaitons; // @synthesize usePasskeyNotificaitons=usePasskeyNotifications;
- (void)setPasskeyString:(id)arg1;
- (void)setupUIForSSPDevice:(id)arg1;
- (void)setupUIForDevice:(id)arg1;
- (void)setPasskeyIndicatorEnabled:(BOOL)arg1;
- (void)resetAll;
- (void)setPasskey:(id)arg1 forDevice:(id)arg2 usingSSP:(BOOL)arg3;
- (void)resetPasskeyIndicator;
- (void)retreatPasskeyIndicator;
- (void)advancePasskeyIndicator;
- (void)setReturnType:(int)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_displayPasskey;
- (void)_displayPasskeyIndicator;
- (id)fauxUIElementValue:(id)arg1;
- (struct CGSize)fauxUIElementSize:(id)arg1;
- (struct CGPoint)fauxUIElementPosition:(id)arg1;
- (void)fauxUIElement:(id)arg1 setFocus:(id)arg2;
- (BOOL)isFauxUIElementFocusable:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end

