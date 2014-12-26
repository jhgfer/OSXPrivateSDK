/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

// Not exported
@interface ESDObjectFactory : NSObject
{
    struct EshObjectFactory *eshObjectFactory;
    NSMutableArray *eshObjectFactoryStack;
}

+ (id)threadLocalFactory;
- (void)setEshFactory:(struct EshObjectFactory *)arg1;
- (void)restoreHostEshFactory;
- (void)replaceHostEshFactoryWith:(struct EshObjectFactory *)arg1;
- (struct EshObject *)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2;
- (struct EshObject *)createObjectWithType:(unsigned short)arg1;
- (void)dealloc;
- (id)init;

@end
