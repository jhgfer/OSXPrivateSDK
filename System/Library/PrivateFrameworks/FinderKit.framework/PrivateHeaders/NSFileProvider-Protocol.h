//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString, NSURL;

@protocol NSFileProvider <NSObject>
@property(readonly) NSOperationQueue *_providedItemsOperationQueue;
@property(readonly) NSURL *_providedItemsURL;
- (void)_provideItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
@property(readonly) NSString *_fileReactorID;
- (void)_providedItemAtURL:(NSURL *)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(NSURL *)arg3;
- (void)_providedItemAtURL:(NSURL *)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 didGainPresenterWithID:(id)arg2;
- (void)_cancelProvidingItemAtURL:(NSURL *)arg1 toReaderWithID:(id)arg2;
- (void)_provideItemAtURL:(NSURL *)arg1 toReaderWithID:(id)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

