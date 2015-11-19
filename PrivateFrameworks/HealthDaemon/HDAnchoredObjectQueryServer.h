/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@protocol OS_dispatch_queue;
@class HKQueryAnchor, NSObject, NSMutableArray;

@interface HDAnchoredObjectQueryServer : HDQueryServer {

	char _deliversUpdates;
	char _initialResultsSent;
	char _suspended;
	char _objectsDeleted;
	char _includeDeletedObjects;
	HKQueryAnchor* _startAnchor;
	unsigned _deliveredResults;
	NSObject*<OS_dispatch_queue> _batchQueue;
	NSMutableArray* _addedSamplesPendingResume;
	NSMutableArray* _deletedSamplesPendingResume;
	char _shouldResetAnchor;
	HKQueryAnchor* _anchor;
	unsigned _limit;

}

@property (nonatomic,readonly) HKQueryAnchor * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) unsigned limit;                      //@synthesize limit=_limit - In the implementation block
-(HKQueryAnchor *)anchor;
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(void)_queue_start;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(char)_shouldListenForUpdates;
-(char)_queue_shouldAccumulateUpdates;
-(id)_maxRowIDInDatabase;
-(char)_queue_shouldAcceptUpdates;
-(void)_queue_samplesWereRemovedWithAnchor:(id)arg1 ;
-(char)_shouldObserveOnPause;
-(unsigned)limit;
@end

