//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface MFPath : NSObject <NSCopying>
{
}

- (int)fill:(id)arg1;
- (int)stroke:(id)arg1;
- (int)widen:(id)arg1;
- (int)flatten;
- (int)closeFigure;
- (struct CGPoint)currentPoint;
- (int)abort;
- (int)end;
- (int)begin;
- (BOOL)isOpen;
- (int)state;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

