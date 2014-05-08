//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSMutableArray, NSProgress, NSString;

@interface SHKProgressItem : NSObject
{
    NSImage *_icon;
    NSString *_title;
    NSString *_subtitle;
    int _status;
    double _progressValue;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _revealBlock;
    double _coefficient;
    NSMutableArray *_subprogresses;
    NSProgress *_progress;
}

+ (id)keyPathsForValuesAffectingAllProgressesValue;
+ (id)keyPathsForValuesAffectingIsInProgress;
+ (id)keyPathsForValuesAffectingHasSomethingToCancel;
+ (id)keyPathsForValuesAffectingHasSomethingToReveal;
@property double coefficient; // @synthesize coefficient=_coefficient;
@property(copy) CDUnknownBlockType revealBlock; // @synthesize revealBlock=_revealBlock;
@property(copy) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property double progressValue; // @synthesize progressValue=_progressValue;
@property int status; // @synthesize status=_status;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSImage *icon; // @synthesize icon=_icon;
@property(readonly) double allProgressesValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAllSubProgresses;
- (void)removeSubProgress:(id)arg1;
- (void)addSubProgress:(id)arg1;
@property(readonly) BOOL hasSomethingToReveal;
@property(readonly) BOOL hasSomethingToCancel;
@property(readonly) BOOL isInProgress;
- (id)description;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void)dealloc;
- (id)init;

@end

