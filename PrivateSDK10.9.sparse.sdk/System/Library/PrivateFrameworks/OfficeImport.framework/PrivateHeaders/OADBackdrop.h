//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class OADPoint3D, OADVector3D;

__attribute__((visibility("hidden")))
@interface OADBackdrop : NSObject <NSCopying>
{
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setUp:(id)arg1;
- (id)up;
- (void)setNormal:(id)arg1;
- (id)normal;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

