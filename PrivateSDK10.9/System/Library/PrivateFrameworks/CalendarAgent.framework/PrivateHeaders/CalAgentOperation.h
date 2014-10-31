//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface CalAgentOperation : NSObject
{
    CDUnknownBlockType _completionBlock;
    NSDictionary *_inputPayload;
    NSDictionary *_responsePayload;
    struct dispatch_queue_s *_queue;
}

+ (Class)operationHandled;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *responsePayload; // @synthesize responsePayload=_responsePayload;
@property(retain, nonatomic) NSDictionary *inputPayload; // @synthesize inputPayload=_inputPayload;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)finishOperation;
- (void)start;
- (void)dealloc;
- (id)initWithInputPayload:(id)arg1;
- (BOOL)isSerialOperation;

@end
