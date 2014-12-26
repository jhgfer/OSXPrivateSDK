/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFArchive.h>

@class IFCertificateIdentity, NSArray, NSDictionary, NSMutableSet;

@interface IFXARArchive : IFArchive
{
    struct __xar_t *_archive;
    NSArray *_entries;
    NSDictionary *_entriesByPath;
    IFCertificateIdentity *_certificateIdentity;
    NSMutableSet *_verifiedEntries;
    long long _heapOffset;
}

- (BOOL)extractEntry:(id)arg1 toBuffer:(id *)arg2 withError:(id *)arg3;
- (BOOL)extractEntry:(id)arg1 toDestination:(id)arg2 withError:(id *)arg3;
- (BOOL)verifyEntry:(id)arg1 withError:(id *)arg2;
- (id)digestOfPath:(id)arg1 withType:(id)arg2;
- (id)entryForPath:(id)arg1;
- (id)entries;
- (id)archiveIdentity;
- (id)_identifyForXARSignature:(struct __xar_signature_t *)arg1;
- (struct __xar_t *)xar;
- (void)dealloc;
- (id)initWithPath:(id)arg1 withError:(id *)arg2;
- (BOOL)_loadCertificateIdentitiesAndVerifyData;
- (id)_retrieveTOCChecksum;
- (BOOL)_loadFileEntries;

@end
