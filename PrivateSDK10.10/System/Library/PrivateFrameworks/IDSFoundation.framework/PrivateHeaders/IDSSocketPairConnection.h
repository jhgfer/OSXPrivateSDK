/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMWeakReference, NSData, NSMutableArray, NSMutableData, NSMutableDictionary;

@interface IDSSocketPairConnection : NSObject
{
    NSMutableData *_headerData;
    NSMutableData *_currentMessageData;
    IMWeakReference *_delegate;
    struct dispatch_queue_s *_delegateQueue;
    struct dispatch_semaphore_s *_lock;
    unsigned long long _currentOutgoingDataIndex;
    NSData *_outgoingData;
    NSMutableArray *_outgoingMessageArray;
    unsigned int _currentOutgoingFragmentedMessageID;
    NSMutableDictionary *_incomingDataFragments;
    unsigned int _fragmentationSize;
    BOOL _isConnected;
    unsigned int _currentDataLength;
    long long _bytesReceived;
    double _prevBPS;
    int _connectedSocket;
    BOOL _writeSocketIsResumed;
    double _lastDateCheck;
}

- (void)_endSession;
- (BOOL)sendDataMessage:(id)arg1 canFragment:(BOOL)arg2;
- (BOOL)sendDataMessage:(id)arg1;
- (void)_sendToConnectedSocket;
- (BOOL)_queueNextOutgoingData;
- (void)_processBytesAvailable;
- (long long)_read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)_callDelegateWithBlock:(id)arg1;
@property(nonatomic) unsigned int fragmentationSize;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned long long inFlightMessageCount;
@property(readonly, nonatomic) BOOL isConnected;
- (void)endSession;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 queue:(struct dispatch_queue_s *)arg2 delegate:(id)arg3;

@end
