/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, BKSSystemApplicationClientDelegate;
@class NSObject;

@interface BKSSystemApplicationClient : BSBaseXPCClient {

	NSObject*<OS_dispatch_queue> _callOutQueue;
	char _pendingCheckIn;
	char _sentConnect;
	NSObject*<OS_dispatch_semaphore> _checkinSemaphore;
	id<BKSSystemApplicationClientDelegate> _delegate;

}

@property (assign,nonatomic) id<BKSSystemApplicationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)restart;
-(char)ping;
-(void)setDelegate:(id<BKSSystemApplicationClientDelegate>)arg1 ;
-(void)dealloc;
-(id<BKSSystemApplicationClientDelegate>)delegate;
-(void)sendActions:(id)arg1 ;
-(void)connect;
-(void)_sendMessageOfType:(int)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(char)arg4 waitDuration:(unsigned long long)arg5 ;
-(void)_sendMessageOfType:(int)arg1 packer:(/*^block*/id)arg2 ;
-(void)_queue_handleWatchdogPing:(id)arg1 ;
-(void)_sendMessageOfType:(int)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasResumed;
-(void)queue_connectionWasInterrupted;
-(void)queue_connectionWasInvalidated;
-(void)finishBooting;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)_connect;
-(void)checkIn;
@end

