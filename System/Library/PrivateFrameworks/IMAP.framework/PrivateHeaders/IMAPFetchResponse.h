//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPNumericResponse.h>

@class NSArray;

@interface IMAPFetchResponse : IMAPNumericResponse
{
    BOOL _isValid;
    NSArray *_fetchResults;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
- (id)description;
- (id)_fetchResultOfClass:(Class)arg1;
- (id)bodySectionFetchResult;
- (id)bodyHeaderFetchResult;
- (id)bodyTextFetchResult;
- (id)gmailLabelsFetchResult;
- (id)modificationSequenceFetchResult;
- (id)flagsFetchResult;
- (id)uidFetchResult;
- (id)bodyStructureFetchResult;
- (id)rfc822SizeFetchResult;
- (id)internalDateFetchResult;
- (id)envelopeFetchResult;
- (const char *)_responseName;
- (void)dealloc;

@end

