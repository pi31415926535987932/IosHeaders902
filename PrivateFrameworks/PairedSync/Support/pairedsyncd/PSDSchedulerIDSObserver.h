/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <pairedsyncd/PSDSchedulingObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSString;

@interface PSDSchedulerIDSObserver : NSObject <PSDSchedulingObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _startingStatistics;
	char _syncComplete;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_requestFinalStatisticsIfPossible;
-(void)_diffWithStatistics:(id)arg1 ;
-(void)_logStatisticsCollectionDiff:(id)arg1 ;
-(void)_logStatistics:(id)arg1 channelName:(id)arg2 ;
-(id)aggdKeyForStatistics:(id)arg1 channelName:(id)arg2 ;
-(void)_logAggdKey:(id)arg1 value:(int)arg2 ;
-(void)scheduler:(id)arg1 didStartSessionWithActivityCount:(unsigned)arg2 isResuming:(char)arg3 ;
-(void)scheduler:(id)arg1 didStartActivity:(id)arg2 ;
-(void)scheduler:(id)arg1 activityDidCompleteSending:(id)arg2 ;
-(void)scheduler:(id)arg1 didFinishActivity:(id)arg2 success:(char)arg3 error:(id)arg4 ;
-(void)schedulerDidFinishSession:(id)arg1 ;
-(id)init;
@end
