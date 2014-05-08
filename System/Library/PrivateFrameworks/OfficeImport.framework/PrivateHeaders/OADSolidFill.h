//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADFill.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADSolidFill : OADFill
{
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)blackFill;
+ (id)whiteFill;
+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (BOOL)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

