//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMimeBody, MCMimePart, MCParsedMessage, NSDictionary, NSMutableDictionary, NSURL;

@interface MFWebMessageDocument : NSObject
{
    NSMutableDictionary *_attachmentsByURL;
    NSMutableDictionary *_backgroundImageAttachments;
    NSDictionary *_mimePartsByURL;
    NSMutableDictionary *_headerAttachmentsByURL;
    MCMimeBody *_mimeBody;
    MCMimePart *_htmlPart;
    MCParsedMessage *_parsedMessage;
    int _uniqueId;
    BOOL _shouldDownloadRemoteURLs;
    BOOL _containsRemoteContent;
    BOOL _messageIsFromMicrosoft;
    BOOL _collapseQuotedBlocks;
    NSURL *_baseURL;
}

+ (void)documentWillClose:(id)arg1;
+ (id)documentWithUniqueIdentifier:(unsigned long long)arg1;
+ (void)document:(id *)arg1 attachment:(id *)arg2 forURL:(id)arg3;
+ (void)document:(id *)arg1 attachmentController:(id *)arg2 mimePart:(id *)arg3 forURL:(id)arg4;
+ (void)document:(id *)arg1 attachmentController:(id *)arg2 forURL:(id)arg3;
+ (id)invalidBaseURL;
+ (id)openDocuments;
+ (void)initialize;
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (BOOL)collapseQuotedBlocks;
- (void)setCollapseQuotedBlocks:(BOOL)arg1;
- (BOOL)messageIsFromMicrosoft;
- (void)setMessageIsFromMicrosoft:(BOOL)arg1;
- (BOOL)containsRemoteContent;
- (void)setContainsRemoteContent:(BOOL)arg1;
- (BOOL)shouldDownloadRemoteURLs;
- (void)setShouldDownloadRemoteURLs:(BOOL)arg1;
- (id)parsedMessageFromRange:(id)arg1;
- (id)parsedMessage;
- (unsigned long long)uniqueIdentifier;
- (id)mimeBody;
- (void)clearAttachmentsByURL;
- (id)attachmentsByURL;
- (id)attachments;
- (BOOL)hasAttachments;
- (id)userAttachments;
- (BOOL)hasAttachmentViewController:(id)arg1;
- (void)removeAttachmentForURL:(id)arg1;
- (void)addAttachments:(id)arg1;
- (void)addAttachment:(id)arg1 forURL:(id)arg2;
- (void)addAttachment:(id)arg1 forURL:(id)arg2 inHeaderView:(BOOL)arg3;
- (id)attachmentForURL:(id)arg1;
- (id)attachmentForURL:(id)arg1 inHeaderView:(BOOL)arg2;
- (id)mimePartForURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initForDisplay:(BOOL)arg1;
- (id)initWithMimeBody:(id)arg1 forDisplay:(BOOL)arg2;

@end

