/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSError.h"

@interface NSError (CalErrorTypes)
- (BOOL)isCalHTTPAuthOrHTTPTimeoutError;
- (BOOL)isCalConnectionError;
- (BOOL)isCalTransientError;
- (BOOL)isCalDAVTranslatedRevertableError;
- (BOOL)isCalDAVTransientErrorException;
- (BOOL)isCalCertificateError;
- (id)CalRedirectURLForGoogleAuthError;
- (BOOL)isCalGoogleAuthError;
- (BOOL)isCalAuthenticationError;
@end
