/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CalLogFormatter-Protocol.h"

@class NSString;

@interface CalLogXMLFormatter : NSObject <CalLogFormatter>
{
    BOOL _shouldPrettyPrint;
    BOOL _useTinyElementNames;
}

@property(nonatomic) BOOL useTinyElementNames; // @synthesize useTinyElementNames=_useTinyElementNames;
@property(nonatomic) BOOL shouldPrettyPrint; // @synthesize shouldPrettyPrint=_shouldPrettyPrint;
- (id)newFormattedString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
