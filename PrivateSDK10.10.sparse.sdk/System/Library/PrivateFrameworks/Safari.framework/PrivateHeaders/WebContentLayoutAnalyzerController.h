/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WebContentLayoutAnalyzerController : NSObject
{
    struct BundleFrame _bundleFrame;
    struct BundleScriptWorld _isolatedWorld;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_jsContext;
- (id)_invokeMethod:(id)arg1 withArguments:(id)arg2;
- (id)layoutInformation;
- (void)collectInformationAfterResize;
- (void)collectInformationBeforeResize;
- (void)dealloc;
- (id)initWithBundleFrame:(const struct BundleFrame *)arg1;

@end
