//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface NSProValueMapper : NSObject <NSCopying, NSCoding>
{
}

- (BOOL)_testSymmetryWithSampleCount:(unsigned long long)arg1;
- (id)synthesizeScrubbableNumberFormatter;
- (id)synthesizeNumberFormatter;
- (double)mapDomainValueToUnitInterval:(double)arg1;
- (double)mapUnitIntervalValueToDomain:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

