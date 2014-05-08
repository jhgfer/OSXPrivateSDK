//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (MailFrameworkAdditions)
+ (id)stringWithAttachmentCharacter;
+ (id)stringWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (BOOL)isEqualExceptForFinalSlash:(id)arg1;
- (id)percentEscapedURLString;
- (id)validURLString;
- (BOOL)hasPrefixIgnoreCaseAndDiacritics:(id)arg1;
- (id)secondToLastPathComponent;
- (id)firstLine;
- (id)uniqueFilenameWithRespectToFilenames:(id)arg1;
- (id)encodedMessageIDString;
- (long long)compareAsInts:(id)arg1;
- (id)foldedStringForSuggestionsOriginatedExactMatchSearches;
- (id)fileSystemString;
- (void)mf_effectiveSubject:(id *)arg1 prefix:(id *)arg2;
- (BOOL)containsOnlyBreakingWhitespace;
- (BOOL)containsOnlyWhitespace;
- (id)stringByReplacingSpecialSlashesWith:(id)arg1;
- (id)stringByReplacingSpecialSlashesWithSlashes;
- (id)stringByReplacingSlashesWithSpecialSlashes;
- (id)specialSlash;
- (id)stringByRemovingLineEndingsForHTML;
- (id)stringByChangingBodyTagToDiv;
- (id)stringByReplacingCharactersInSet:(id)arg1 withCharacter:(unsigned short)arg2;
- (id)smartCapitalizedString;
- (unsigned long long)hexLongLongValue;
- (unsigned int)hexIntValue;
@end

