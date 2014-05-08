//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader : OCDEncryptedReader
{
    OCPZipPackage *mZipPackage;
}

@property(retain, nonatomic) OCPZipPackage *zipPackage; // @synthesize zipPackage=mZipPackage;
- (id)read;
- (BOOL)start;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int *)arg1;
- (_Bool)isBinaryReader;
- (BOOL)verifyFileFormat;
- (void)dealloc;

@end

