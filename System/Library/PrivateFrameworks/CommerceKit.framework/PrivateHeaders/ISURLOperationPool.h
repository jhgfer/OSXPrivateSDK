//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject
{
    ISOperationQueue *_operationQueue;
}

@property(retain, nonatomic) ISOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2;
- (void)addOperation:(id)arg1 withFlags:(long long)arg2;
- (id)init;

@end

