//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CPBundleResourceManager : NSObject
{
    NSMutableDictionary *mPackageMap;
}

+ (void)disposeInstance;
+ (id)instance;
- (struct _xmlDoc *)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3;
- (id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)packageWithName:(id)arg1;

@end

