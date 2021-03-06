/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AssistiveControlSupport/ACSHPlistObject.h>

@class NSImage, NSString;

@interface ACSHApplication : ACSHPlistObject
{
    NSString *_localizedName;
    NSString *_path;
    NSString *_bundleID;
    NSImage *_icon;
}

+ (id)createWithItemAtPath:(id)arg1;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)_resetDisplayValues;
- (id)resolvedPath;
- (id)icon;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryForSaving;
- (void)dealloc;
- (void)_initWithPlistDictionary:(id)arg1;

@end

