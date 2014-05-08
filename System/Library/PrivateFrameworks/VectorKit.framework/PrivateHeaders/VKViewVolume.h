//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKViewVolume : NSObject
{
    struct VKPoint _corners[8];
    CDStruct_257eabe6 _faces[6];
}

- (id).cxx_construct;
- (struct VKPoint)lerpPoint:(float *)arg1;
- (BOOL)distanceClipsPoint:(struct VKPoint)arg1;
- (BOOL)rejectsRect:(CDStruct_d2b197d1)arg1;
- (void)updateWithFrustum:(CDStruct_17faa5b0)arg1 matrix:(const CDStruct_aa5aacbc *)arg2;
@property(readonly, nonatomic) CDStruct_257eabe6 farPlane;
@property(readonly, nonatomic) const CDStruct_257eabe6 *faces;
@property(readonly, nonatomic) const struct VKPoint *corners;

@end

