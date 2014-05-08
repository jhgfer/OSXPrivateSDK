//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class ILMediaBrowserImagePreviewView, ILMediaBrowserMovieView, NSArray, NSWindow;

@interface ILMediaBrowserPreviewView : NSControl
{
    ILMediaBrowserMovieView *_movieView;
    ILMediaBrowserImagePreviewView *_imageView;
    id _representedObject;
    NSArray *_objectList;
    BOOL _showingThumbnail;
    id _enterKeyTarget;
    SEL _enterKeyAction;
    id _viewDelegate;
    NSWindow *_flagWindow;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)updateFlagPosition;
- (BOOL)isFlagShowing;
- (void)hideFlag;
- (void)showFlag;
- (void)moviePreviewDidEnd:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)mouseMoved:(id)arg1;
- (void)setEnterKeyAction:(SEL)arg1;
- (void)setEnterKeyTarget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setObjectList:(id)arg1;
- (id)objectList;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setShowingThumbnail:(BOOL)arg1;
- (void)previewPrevious;
- (void)previewNext;
- (void)previewObjectAtIndex:(long long)arg1;
- (void)previewImageAtPath:(id)arg1;
- (void)previewMovieAtPath:(id)arg1;
- (void)showImageView;
- (void)showMovieView;
- (void)previewMediaObject:(id)arg1 inList:(id)arg2;
- (void)viewDidEndLiveResize;
- (void)setFrame:(struct CGRect)arg1;
- (void)cleanup;
- (void)forceStop;
- (void)stopPreview;
- (void)dealloc;
- (id)init;

@end

