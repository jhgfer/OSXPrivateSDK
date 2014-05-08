//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSData;

@interface MCMessageHeaders : NSObject <NSCopying, NSMutableCopying>
{
    NSData *_data;
    id _sender;
    unsigned long long _encodingHint;
}

+ (id)englishHeadersFromLocalizedHeaders:(id)arg1;
+ (id)localizedHeadersFromEnglishHeaders:(id)arg1;
+ (id)localizedHeaderForKey:(id)arg1;
+ (id)localizedHeaders;
+ (void)setCustomDisplayedHeaders:(id)arg1;
+ (id)customDisplayedHeaders;
+ (id)basicHeaderKeys;
+ (const char *)cstringForKey:(id)arg1;
+ (BOOL)isAddressHeaderKey:(id)arg1;
+ (void)initialize;
- (void)_appendAddressList:(id)arg1 toData:(id)arg2;
- (void)appendHeaderData:(id)arg1 recipients:(id)arg2 recipientsByHeaderKey:(id)arg3 expandABGroups:(BOOL)arg4 includeComment:(BOOL)arg5;
- (void)appendHeaderData:(id)arg1 recipients:(id)arg2;
- (id)encodedHeadersIncludingFromSpace:(BOOL)arg1;
- (BOOL)messageIsFromMicrosoft;
- (id)mailVersion;
- (id)isoLatin1CharsetHint;
- (id)_newDecodedAddressFromDataInRange:(struct _NSRange)arg1 sender:(id)arg2 consumedLength:(unsigned long long *)arg3;
- (id)_firstAddressForKey:(id)arg1 sender:(id)arg2;
- (id)firstAddressForKey:(id)arg1;
- (id)addressListForKey:(id)arg1;
- (id)_newHeaderValueForKey:(id)arg1 offset:(unsigned long long *)arg2;
- (id)firstHeaderForKey:(id)arg1;
- (id)_headersForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (BOOL)hasHeaderForKey:(id)arg1;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)_capitalizedKeyForKey:(id)arg1;
- (id)allHeaderKeys;
- (void)_resetSender;
- (id)_sender;
- (unsigned long long)encodingHint;
- (id)headerData;
- (id)headersDictionaryWithHeaderDetailLevel:(long long)arg1 forMessageType:(BOOL)arg2;
- (id)attributedStringShowingHeaderDetailLevel:(long long)arg1;
- (id)_htmlValueWithKey:(id)arg1 value:(id)arg2 useBold:(BOOL)arg3;
- (id)_htmlHeaderKey:(id)arg1 useBold:(BOOL)arg2 useGray:(BOOL)arg3;
- (id)htmlStringShowingHeaderDetailLevel:(long long)arg1 useBold:(BOOL)arg2 useGray:(BOOL)arg3;
- (id)_headersToDisplayFromHeaderKeys:(id)arg1 headerDetailLevel:(long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithHeaderData:(id)arg1 encodingHint:(unsigned long long)arg2;

@end

