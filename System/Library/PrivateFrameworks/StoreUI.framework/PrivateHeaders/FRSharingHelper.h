//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class FRStoreViewController, NSArray, NSDictionary, NSImage, NSMutableArray, NSNumber, NSSharingService, NSSharingServicePicker, NSString, NSURL;

@interface FRSharingHelper : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    FRStoreViewController *_storeVC;
    NSDictionary *_userInfo;
    NSSharingService *_service;
    struct CGRect _pickerSourceFrame;
    NSSharingServicePicker *_picker;
    NSArray *_sharingServices;
    NSURL *_productURL;
    NSURL *_imageURL;
    NSString *_productName;
    NSNumber *_adamId;
    NSString *_message;
    NSString *_html;
    NSString *_subject;
    NSImage *_iconImage;
    struct CGRect _sourceFrame;
    NSMutableArray *_urlsToPurge;
}

+ (BOOL)startSharingFromStoreViewController:(id)arg1 withUserInfo:(id)arg2;
- (void).cxx_destruct;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(struct CGSize)arg3 contentRect:(struct CGRect *)arg4;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)_createWebArchive;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (BOOL)start;
- (void)cleanUpAfterSharing;
- (id)initWithStoreViewController:(id)arg1 userInfo:(id)arg2;

@end

