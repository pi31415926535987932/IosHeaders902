/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MBService, NSString, NSObject, PCPersistentTimer;

@interface MBServiceLockManager : NSObject {

	MBService* _service;
	NSString* _backupUDID;
	int _type;
	id _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	PCPersistentTimer* _timer;

}

@property (nonatomic,readonly) double timeout; 
@property (nonatomic,readonly) double renewInterval; 
@property (nonatomic,readonly) double retryInterval; 
-(char)reacquireLockWithError:(id*)arg1 ;
-(void)releaseLockAsync;
-(void)startRenewingLock;
-(void)releaseLockSync;
-(void)stopRenewingLock;
-(id)initWithAccount:(id)arg1 backupUDID:(id)arg2 type:(int)arg3 delegate:(id)arg4 ;
-(double)renewInterval;
-(void)_scheduleTimerWithInterval:(double)arg1 ;
-(void)_releaseLockAndScheduleRetries;
-(void)resetRenewalTimer;
-(char)_reacquireLockWithError:(id*)arg1 ;
-(double)_holdLock;
-(double)timeout;
-(void)dealloc;
-(void)_timerFired;
-(double)retryInterval;
-(double)_releaseLock;
@end
