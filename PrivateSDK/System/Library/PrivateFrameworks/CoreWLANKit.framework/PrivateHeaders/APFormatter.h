//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSCharacterSet;

@interface APFormatter : NSFormatter
{
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
    unsigned long long _maxLength;
}

+ (id)domainNameFormatter:(int)arg1;
+ (id)sharedDomainNameFormatter;
+ (id)hexFormatter:(int)arg1;
+ (id)ascii7BitFormatter:(int)arg1;
+ (id)asciiFormatter:(int)arg1;
+ (id)phoneNumberFormatter:(int)arg1;
+ (id)sharedPhoneNumberFormatter;
+ (id)nonZeroNumberOnly:(int)arg1;
+ (id)numberOnlyFormatter:(int)arg1;
+ (id)maxLengthFormatter:(int)arg1;
+ (id)multipleIPFormatter:(int)arg1;
+ (id)sharedMultipleIPFormatter;
+ (id)ipFormatter:(int)arg1;
+ (id)sharedIPFormatter;
+ (id)romanFormatter:(int)arg1;
+ (id)domainNameSet;
+ (id)pogoPasswordSet;
+ (id)hexSet;
+ (id)ascii7BitSet;
+ (id)asciiSet;
+ (id)phoneNumberSet;
+ (id)multipleIpAddressesSet;
+ (id)ipAddressSet;
+ (id)romanSet;
- (id)invertedCharacterSet;
- (void)setInvertedCharacterSet:(id)arg1;
- (id)characterSet;
- (void)setCharacterSet:(id)arg1;
- (void)dealloc;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithMaxLength:(int)arg1;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(int)arg2;
- (id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(int)arg2;

@end
