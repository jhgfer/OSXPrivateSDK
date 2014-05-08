//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XMMacPathMapper : NSObject
{
    NSMutableDictionary *_encodedDomainToPathMap;
}

- (id)_basePathForDiskDomain:(id)arg1;
- (id)_basePathForSharedDomain:(id)arg1;
- (id)_basePathFromMailDomain:(id)arg1 partialBase:(id)arg2;
- (id)_basePathForDomainType:(id)arg1 specifier:(id)arg2 subtypes:(id)arg3;
- (id)_pathForURL:(id)arg1 userRelative:(BOOL)arg2 domainPathOnly:(BOOL)arg3;
- (id)pathForXMURLString:(id)arg1;
- (id)userRelativePathForXMURLString:(id)arg1;
- (id)pathForDomainOfXMURLString:(id)arg1;
- (BOOL)isOtherDiskXMURLString:(id)arg1 outName:(id *)arg2;
- (BOOL)isSharedFilesXMURLString:(id)arg1;
- (id)userShortnameForXMURLString:(id)arg1;
- (id)_getEncodedDomainComponents:(id)arg1 outEncodedDomain:(id *)arg2 outPath:(id *)arg3;
- (void)_redirectShortname:(id)arg1 toShortname:(id)arg2 orBasePath:(id)arg3;
- (void)mapShortname:(id)arg1 toBasePath:(id)arg2;
- (void)mapShortname:(id)arg1 toShortname:(id)arg2;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

