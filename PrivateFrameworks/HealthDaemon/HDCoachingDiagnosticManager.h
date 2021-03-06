/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSObject, NSNumber, CMMotionActivityManager, NSOperationQueue, NSDate, AWDServerConnection, NSString;

@interface HDCoachingDiagnosticManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {

	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _waitingToRun;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _activityQueue;
	NSDate* _cachedLastSubmittedDate;
	AWDServerConnection* _serverConnection;
	Class _motionActivityManagerClass;

}

@property (nonatomic,retain) Class motionActivityManagerClass;              //@synthesize motionActivityManagerClass=_motionActivityManagerClass - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(char)arg2 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(void)_registerActivity;
-(void)_queue_setWaitingToRun:(char)arg1 ;
-(char)_queue_isWaitingToRun;
-(void)_performCoachingDiagnosticIfWaiting;
-(void)_setNeedsToRunWithCompletion:(/*^block*/id)arg1 ;
-(void)_performCoachingDiagnosticActivity:(id)arg1 ;
-(void)_queue_submitMetricForEvent:(id)arg1 data:(id)arg2 ;
-(void)_queue_submitMetricForActivityCache:(id)arg1 ;
-(void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(char)arg2 handler:(/*^block*/id)arg3 ringHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_setLastRunDate:(id)arg1 ;
-(id)_queue_lastSubmittedDate;
-(id)_queue_lastRunDate;
-(id)_queue_computeStatisticsForCoachingEvent:(id)arg1 error:(id*)arg2 ;
-(void)_queue_setLastSubmittedDate:(id)arg1 ;
-(id)_queue_statisticsCollectionForAnchorDate:(id)arg1 interval:(unsigned)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned)arg4 error:(id*)arg5 ;
-(char)_queue_acquireMotionActivityStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(char)_queue_computeWorkoutStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)_queue_applyDataItem:(id)arg1 toMetric:(id)arg2 ;
-(id)_dateAsAge:(id)arg1 ;
-(void)_queue_addHealthCharacteristicsToActivityMetric:(id)arg1 ;
-(void)performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(char)arg2 submitMetrics:(char)arg3 handler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setActivityManager:(id)arg1 ;
-(Class)motionActivityManagerClass;
-(void)setMotionActivityManagerClass:(Class)arg1 ;
@end

