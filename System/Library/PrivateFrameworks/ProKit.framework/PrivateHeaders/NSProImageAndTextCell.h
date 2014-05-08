//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/NSProTextFieldCell.h>

@class NSImage;

@interface NSProImageAndTextCell : NSProTextFieldCell
{
    NSImage *mImage;
    id mImageSource;
    void *_reserved5;
    void *_reserved6;
}

- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (unsigned long long)_textHitTest:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (id)imageSource;
- (void)setImageSource:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (long long)currentThemeState;
- (BOOL)_alwaysMakeSpaceForImage;
- (struct CGRect)_imageRectForCellRect:(struct CGRect)arg1 inView:(id)arg2;
- (double)_imageRightMarginInView:(id)arg1;
- (void)_textRect:(struct CGRect *)arg1 andImageRect:(struct CGRect *)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;

@end

