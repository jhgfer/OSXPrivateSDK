//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKModelObject;

__attribute__((visibility("hidden")))
@interface VKModelObject_DrawPass : NSObject
{
    unsigned int _pass;
    VKModelObject *_submodel;
}

@property(nonatomic) unsigned int pass; // @synthesize pass=_pass;
@property(retain, nonatomic) VKModelObject *submodel; // @synthesize submodel=_submodel;
- (void)dealloc;
- (id)description;

@end

