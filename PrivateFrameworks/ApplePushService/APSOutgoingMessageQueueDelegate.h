/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol APSOutgoingMessageQueueDelegate <NSObject>
@required
-(void)outgoingMessageQueue:(id)arg1 lateAcknowledgmentForCriticalOutgoingMessage:(id)arg2;
-(void)outgoingMessageQueue:(id)arg1 requestCriticalMessageFlushWithPaddingLength:(unsigned)arg2;
-(void)outgoingMessageQueueShortMessageTimeoutExceeded:(id)arg1;
-(char)shouldForceShortTimeouts;

@end

