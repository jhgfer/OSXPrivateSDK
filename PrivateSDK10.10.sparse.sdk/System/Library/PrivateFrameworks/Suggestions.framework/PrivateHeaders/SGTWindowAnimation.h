/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSAnimation.h"

@class SGTAnimationWindowEffect;

// Not exported
@interface SGTWindowAnimation : NSAnimation
{
    SGTAnimationWindowEffect *_windowEffect;
}

- (float)currentValue;
- (void)setCurrentProgress:(float)arg1;
@property(readonly) SGTAnimationWindowEffect *windowEffect;
- (void)discardWindowEffect;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
