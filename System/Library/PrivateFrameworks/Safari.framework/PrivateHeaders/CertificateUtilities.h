//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CertificateUtilities : NSObject
{
}

+ (id)_oidStringForCertificatePolicies:(const struct __CE_CertPolicies *)arg1;
+ (void)_freeFieldData:(struct cssm_data *)arg1 forOid:(struct cssm_data *)arg2 withHandle:(long long)arg3;
+ (id)_decimalStringForOid:(struct cssm_data *)arg1;
+ (id)_evCAOidDict;
+ (id)extendedValidationOrganizationNameForHost:(id)arg1 withCertificates:(id)arg2;
+ (BOOL)isRevocationServerMetaError:(int)arg1;
+ (struct OpaqueSecPolicyRef *)copyOcspPolicyWithOptions:(unsigned int)arg1;
+ (struct cssm_data *)_copyFieldDataForOid:(struct cssm_data *)arg1 inCert:(struct cssm_data *)arg2 withHandle:(long long)arg3;
+ (id)_allowedRootCertificatesForOidString:(id)arg1;
+ (struct OpaqueSecCertificateRef *)_rootCertificateWithSubjectOfCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)_potentialEVChainWithCertificates:(id)arg1;
+ (BOOL)isCertificateChain:(id)arg1 trustedForHost:(id)arg2;
+ (struct __SecTrust *)trustReferenceWithCertificates:(id)arg1 forPolicy:(struct OpaqueSecPolicyRef *)arg2;
+ (struct OpaqueSecPolicyRef *)sslPolicyForHost:(id)arg1 client:(BOOL)arg2;
+ (id)labelForCertificates:(id)arg1;
+ (id)subjectFullLocationForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)subjectNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)issuerOrganizationNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)identitiesWithPolicy:(struct OpaqueSecPolicyRef *)arg1;

@end

