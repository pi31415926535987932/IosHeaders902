/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SYIncomingFullSyncSession : SYSession {

	unsigned long long _activity;
	int _state;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	char canRestart;
	char canRollback;

}
-(int)state;
-(void)setState:(int)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(char)canRestart;
-(void)setCanRestart:(char)arg1 ;
-(char)canRollback;
-(void)setCanRollback:(char)arg1 ;
-(void)_sessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_handleBatchChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyErrorAndShutdown;
-(void)_sessionEnded;
-(void)_cancelSession;
-(unsigned)protocolVersion;
-(void)_handleError:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(char)isSending;
-(char)isResetSync;
@end

