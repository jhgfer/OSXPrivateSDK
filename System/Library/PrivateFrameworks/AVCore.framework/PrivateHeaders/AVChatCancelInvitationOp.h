//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVCore/AVExtendedOperation.h>

@class IMHandle, NSString;

@interface AVChatCancelInvitationOp : AVExtendedOperation
{
    IMHandle *_imHandle;
    NSString *_conferenceID;
    unsigned int _sessionID;
}

- (void)didFinish;
- (void)dealloc;
- (id)initWithIMHandle:(id)arg1 avChat:(id)arg2;

@end

