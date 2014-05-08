//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface RenderLayer : NSObject
{
    struct RenderLayer _renderLayer;
    NSMutableArray *_children;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSeparator;
@property(readonly, nonatomic) BOOL isComposited;
@property(readonly, nonatomic) NSString *compositingInfo;
@property(readonly, nonatomic) NSString *heightString;
@property(readonly, nonatomic) NSString *widthString;
@property(readonly, nonatomic) NSString *positionString;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *children;
- (void)_addListToChildren:(const struct Array *)arg1 withTitle:(id)arg2;
- (void)dealloc;
- (id)initWithWKRenderLayer:(const struct RenderLayer *)arg1;

@end

