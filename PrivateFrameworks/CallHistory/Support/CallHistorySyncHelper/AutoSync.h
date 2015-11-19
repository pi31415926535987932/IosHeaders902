/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class WatchDogTimer, NSDate;

@interface AutoSync : CHSynchronizedLoggable {

	BOOL _alreadyWaiting;
	unsigned _syncWindowSeconds;
	unsigned _syncIntervalSeconds;
	WatchDogTimer* _watchDog;
	NSDate* _nextScheduledSync;

}

@property (nonatomic,retain) NSDate * nextScheduledSync;              //@synthesize nextScheduledSync=_nextScheduledSync - In the implementation block
-(void)handleTransactionAdded:(id)arg1 ;
-(void)handleTransactionAdded_sync:(id)arg1 withUpdate:(id)arg2 ;
-(void)fireSyncNotification_sync;
-(void)startWatchDogTimer_sync;
-(void)setNextScheduledSync:(NSDate *)arg1 ;
-(char)canWeSync;
-(id)getSyncHistory;
-(void)updateSyncHistory:(id)arg1 ;
-(NSDate *)nextScheduledSync;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)registerForNotifications;
@end

