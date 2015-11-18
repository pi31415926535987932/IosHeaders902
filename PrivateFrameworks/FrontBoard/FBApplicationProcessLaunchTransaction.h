/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:28:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class FBProcessManager, NSString, FBApplicationProcess, FBWaitForProcessDeathTransaction, FBProcessExecutionContext;

@interface FBApplicationProcessLaunchTransaction : FBTransaction {

	FBProcessManager* _processManager;
	NSString* _bundleID;
	FBApplicationProcess* _process;
	/*^block*/id _executionContextProvider;
	FBWaitForProcessDeathTransaction* _deathTransaction;
	FBProcessExecutionContext* _executionContext;
	int _interruptedOrComplete;
	char _failedLaunch;
	char _exited;

}

@property (nonatomic,retain,readonly) FBApplicationProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) char failedLaunch;                                  //@synthesize failedLaunch=_failedLaunch - In the implementation block
@property (nonatomic,readonly) char exited;                                        //@synthesize exited=_exited - In the implementation block
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(FBApplicationProcess *)process;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_didComplete;
-(char)_shouldFailForChildTransaction:(id)arg1 ;
-(char)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(id)initWithApplicationProcess:(id)arg1 ;
-(char)exited;
-(char)failedLaunch;
-(void)_queue_launchProcess:(id)arg1 ;
-(void)_willComplete;
-(void)_queue_processWillLaunch:(id)arg1 ;
-(void)_queue_finishProcessLaunch:(char)arg1 ;
-(void)_queue_noteExited;
@end

