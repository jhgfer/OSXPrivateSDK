/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage;

@interface ADMGuestUserConfig : NSObject
{
    NSImage *mDefaultGuestPicture;
}

+ (void)syncGuestState;
+ (long long)guestMode;
+ (BOOL)isGuestEnabled;
+ (void)setGuestEnabled:(BOOL)arg1;
+ (id)sharedConfig;
- (id)guestUserPicture;
- (id)_imageFromCGImage1x:(struct CGImage *)arg1 andCGImage2x:(struct CGImage *)arg2;
- (BOOL)isGuestAccountEnabled;
- (void)setGuestAccountEnabled:(BOOL)arg1;
- (id)createGuestAccount;
- (id)findGuestAccount;
- (void)dealloc;
- (id)init;
- (id)_generateGuestPassword;

@end
