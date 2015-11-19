/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLCloudOprationQueueDelegate;
@class NSString, NSTimer, NSObject, NSMutableArray, PLCloudCoalescingQueue, PLCloudPhotoLibraryManager, PLBatterySaverWatcher;

@interface PLCloudOperationQueue : NSObject {

	Class _type;
	NSString* _name;
	NSTimer* _retryTimer;
	unsigned _concurrencyLevel;
	unsigned _maximumConcurrency;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _underlyingQueues;
	NSMutableArray* _queuesDescriptions;
	PLCloudCoalescingQueue* _lowpriRetryQueue;
	PLCloudPhotoLibraryManager* _remoteLibrary;
	id<PLCloudOprationQueueDelegate> _delegate;
	PLBatterySaverWatcher* _batterySaverWatcher;
	char _pausesInBatterySaverMode;
	unsigned _operationCount;

}

@property (copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned operationCount;                            //@synthesize operationCount=_operationCount - In the implementation block
@property (assign,nonatomic) char pausesInBatterySaverMode;              //@synthesize pausesInBatterySaverMode=_pausesInBatterySaverMode - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)cancelAllOperations;
-(void)addOperation:(id)arg1 ;
-(void)resume;
-(unsigned)operationCount;
-(void)tryCancelOperationWithHash:(id)arg1 ;
-(id)initWithName:(id)arg1 operationsType:(Class)arg2 concurrencyLevel:(unsigned)arg3 remoteLibrary:(id)arg4 delegateClass:(id)arg5 ;
-(void)_createTransientsDirectoryIfNotExist;
-(char)_restoreTransientOperations;
-(id)_transientSnapshotsDirectory;
-(id)_transientSnapshotFilePathForOperation:(id)arg1 ;
-(id)_operationFromTransientFile:(id)arg1 ;
-(void)_removeTransientFileForOperation:(id)arg1 ;
-(void)_inqAddPreferenceClassWithName:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)_processNextOperations;
-(char)pausesInBatterySaverMode;
-(id)_firstNonemptySourceQueue;
-(unsigned)_maximumConcurrencyLevel;
-(char)_isRetryQueue:(id)arg1 ;
-(void)_executeOperation:(id)arg1 fromUnderlyingQueue:(id)arg2 ;
-(void)_runAsyncOnSerialQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_createTransientSnapshotForOperation:(id)arg1 ;
-(void)_completeOperation:(id)arg1 withError:(id)arg2 withQueue:(id)arg3 ;
-(void)_runSyncOnSerialQueueWithBlock:(/*^block*/id)arg1 ;
-(void)setPausesInBatterySaverMode:(char)arg1 ;
-(void)addPreferenceClassWithName:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(id)outstandingOperations;
@end

