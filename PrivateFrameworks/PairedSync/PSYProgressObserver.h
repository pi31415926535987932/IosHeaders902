/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSYProgressObserverDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSDictionary, PSProgressClient, NSXPCConnection, NSObject;

@interface PSYProgressObserver : NSObject {

	NSMutableDictionary* _failedActivities;
	id<PSYProgressObserverDelegate> _delegate;
	int _progressObserverState;
	NSString* _activityLabel;
	NSDictionary* _activityErrors;
	PSProgressClient* _progressClient;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	double _activityProgress;
	double _totalProgress;

}

@property (assign,nonatomic,__weak) id<PSYProgressObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int progressObserverState;                                  //@synthesize progressObserverState=_progressObserverState - In the implementation block
@property (nonatomic,retain) NSString * activityLabel;                                     //@synthesize activityLabel=_activityLabel - In the implementation block
@property (assign,nonatomic) double activityProgress;                                      //@synthesize activityProgress=_activityProgress - In the implementation block
@property (assign,nonatomic) double totalProgress;                                         //@synthesize totalProgress=_totalProgress - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * activityErrors;                         //@synthesize activityErrors=_activityErrors - In the implementation block
@property (nonatomic,retain) PSProgressClient * progressClient;                            //@synthesize progressClient=_progressClient - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<PSYProgressObserverDelegate>)arg1 ;
-(id)init;
-(id<PSYProgressObserverDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)_updateState;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(int)progressObserverState;
-(void)_connectionInterrupted;
-(void)setActivityLabel:(NSString *)arg1 ;
-(void)setActivityProgress:(double)arg1 ;
-(void)setTotalProgress:(double)arg1 ;
-(void)setProgressObserverState:(int)arg1 ;
-(void)_resetProgress;
-(void)_setCurrentActivityProgress:(float)arg1 totalProgress:(float)arg2 ;
-(void)_currentActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3 ;
-(void)_scheduledJobsDidComplete;
-(NSString *)activityLabel;
-(double)activityProgress;
-(double)totalProgress;
-(NSDictionary *)activityErrors;
-(PSProgressClient *)progressClient;
-(void)setProgressClient:(PSProgressClient *)arg1 ;
@end

