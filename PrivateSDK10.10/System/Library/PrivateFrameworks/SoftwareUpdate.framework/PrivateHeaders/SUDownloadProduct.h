/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface SUDownloadProduct : NSObject <NSSecureCoding>
{
    NSArray *downloadURLs;
    NSString *_productKey;
    NSArray *_packageIdentifiers;
    NSString *_displayName;
    long long _downloadSize;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSArray *packageIdentifiers; // @synthesize packageIdentifiers=_packageIdentifiers;
@property(readonly) NSString *productKey; // @synthesize productKey=_productKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithProduct:(id)arg1;

@end
