//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/ProPSDGradientStop.h>

#import "NSCoding.h"

__attribute__((visibility("hidden")))
@interface ProPSDGradientColorStop : ProPSDGradientStop <NSCoding>
{
    struct _proPSDGradientColor gradientColor;
}

+ (id)colorStopWithLocation:(double)arg1 gradientColor:(struct _proPSDGradientColor)arg2;
+ (void)initialize;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isColorStop;
- (double)colorLocation;
- (struct _proPSDGradientColor)gradientColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 gradientColor:(struct _proPSDGradientColor)arg2;
- (void)_setGradientColor:(struct _proPSDGradientColor)arg1;

@end

