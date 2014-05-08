//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OISFUCryptoUtils : NSObject
{
}

+ (id)sha1HashFromStorage:(id)arg1;
+ (id)sha256HashFromString:(id)arg1;
+ (id)sha256HashFromStorage:(id)arg1;
+ (id)sha256HashFromData:(id)arg1;
+ (id)decodePassphraseHint:(id)arg1;
+ (id)encodePassphraseHint:(id)arg1;
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id *)arg4;
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;
+ (BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;
+ (id)generatePassphraseVerifierForKey:(id)arg1;
+ (unsigned int)ivLengthForKey:(id)arg1;
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;
+ (id)generateRandomSalt;
+ (BOOL)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long long)arg2;

@end

