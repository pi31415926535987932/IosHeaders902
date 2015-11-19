/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICCloudContextDelegate, OS_dispatch_queue;
@class NSDictionary, CKContainer, NSDate, NSOperationQueue, NSObject, NSMutableSet, ICThreadSafeMutableDictionary, NSTimer, ICSelectorDelayer;

@interface ICCloudContext : NSObject {

	char _disabled;
	char _disabledInternal;
	char _didAddObservers;
	char _fetchingEnabled;
	char _syncDisabledByServer;
	char _fetchOperationsInQueue;
	NSDictionary* _cloudObjectClassesByRecordType;
	CKContainer* _container;
	id<ICCloudContextDelegate> _cloudContextDelegate;
	NSDate* _lastSyncDate;
	int _qualityOfService;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _fetchChangesOperationCreationQueue;
	int _numberOfRetriesToUpdateSubscriptions;
	int _numberOfRetriesForProcessing;
	NSMutableSet* _cloudObjectsToRetry;
	ICThreadSafeMutableDictionary* _retryCountByZoneID;
	NSTimer* _retryAfterTimer;
	ICThreadSafeMutableDictionary* _isZonePushedByZoneID;
	NSMutableSet* _cloudObjectsToProcess;
	ICSelectorDelayer* _processingSelectorDelayer;
	ICSelectorDelayer* _pollingSelectorDelayer;

}

@property (nonatomic,readonly) char isCloudKitSyncingEnabled; 
@property (nonatomic,readonly) char isFetchingRecordChanges; 
@property (nonatomic,retain) CKContainer * container;                                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) id<ICCloudContextDelegate> cloudContextDelegate;                       //@synthesize cloudContextDelegate=_cloudContextDelegate - In the implementation block
@property (nonatomic,readonly) char fetchOperationsPending; 
@property (retain) NSDate * lastSyncDate;                                                                  //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (assign,nonatomic) int qualityOfService;                                                         //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (getter=isDisabled) char disabled;                                                               //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                                 //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchChangesOperationCreationQueue;              //@synthesize fetchChangesOperationCreationQueue=_fetchChangesOperationCreationQueue - In the implementation block
@property (assign,nonatomic) int numberOfRetriesToUpdateSubscriptions;                                     //@synthesize numberOfRetriesToUpdateSubscriptions=_numberOfRetriesToUpdateSubscriptions - In the implementation block
@property (assign) int numberOfRetriesForProcessing;                                                       //@synthesize numberOfRetriesForProcessing=_numberOfRetriesForProcessing - In the implementation block
@property (nonatomic,retain) NSMutableSet * cloudObjectsToRetry;                                           //@synthesize cloudObjectsToRetry=_cloudObjectsToRetry - In the implementation block
@property (nonatomic,retain) ICThreadSafeMutableDictionary * retryCountByZoneID;                           //@synthesize retryCountByZoneID=_retryCountByZoneID - In the implementation block
@property (nonatomic,retain) NSTimer * retryAfterTimer;                                                    //@synthesize retryAfterTimer=_retryAfterTimer - In the implementation block
@property (assign,nonatomic) int accountStatus; 
@property (getter=isDisabledInternal) char disabledInternal;                                               //@synthesize disabledInternal=_disabledInternal - In the implementation block
@property (nonatomic,retain) ICThreadSafeMutableDictionary * isZonePushedByZoneID;                         //@synthesize isZonePushedByZoneID=_isZonePushedByZoneID - In the implementation block
@property (nonatomic,readonly) NSDictionary * cloudObjectClassesByRecordType;                              //@synthesize cloudObjectClassesByRecordType=_cloudObjectClassesByRecordType - In the implementation block
@property (nonatomic,retain) NSMutableSet * cloudObjectsToProcess;                                         //@synthesize cloudObjectsToProcess=_cloudObjectsToProcess - In the implementation block
@property (retain) ICSelectorDelayer * processingSelectorDelayer;                                          //@synthesize processingSelectorDelayer=_processingSelectorDelayer - In the implementation block
@property (retain) ICSelectorDelayer * pollingSelectorDelayer;                                             //@synthesize pollingSelectorDelayer=_pollingSelectorDelayer - In the implementation block
@property (assign,nonatomic) char didAddObservers;                                                         //@synthesize didAddObservers=_didAddObservers - In the implementation block
@property (assign,getter=isFetchingEnabled,nonatomic) char fetchingEnabled;                                //@synthesize fetchingEnabled=_fetchingEnabled - In the implementation block
@property (assign,nonatomic) char syncDisabledByServer;                                                    //@synthesize syncDisabledByServer=_syncDisabledByServer - In the implementation block
@property (assign,nonatomic) char fetchOperationsInQueue;                                                  //@synthesize fetchOperationsInQueue=_fetchOperationsInQueue - In the implementation block
+(void)deleteAllServerChangeTokens;
+(void)clearSharedContext;
+(id)metadataZoneID;
+(id)notesZoneID;
+(id)newNotesContainer;
+(id)errorForDisabledCloudSyncing;
+(id)errorFromErrors:(id)arg1 ;
+(id)errorsFromError:(id)arg1 ;
+(void)startSharedContext;
+(id)sharedContext;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(int)qualityOfService;
-(void)updateConfiguration;
-(void)dealloc;
-(id)init;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setQualityOfService:(int)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDisabled:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)operationQueue;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(NSDate *)lastSyncDate;
-(void)reachabilityChanged:(id)arg1 ;
-(id)allCloudObjects;
-(void)syncAllCloudObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)existingCloudObjectForRecordID:(id)arg1 ;
-(id)newCloudObjectForRecord:(id)arg1 ;
-(id)operationToFetchRecordChangesForRecordZoneID:(id)arg1 ;
-(char)didAddObservers;
-(void)setDidAddObservers:(char)arg1 ;
-(char)isFetchingRecordChanges;
-(void)setFetchChangesOperationCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCloudObjectsToProcess:(NSMutableSet *)arg1 ;
-(void)setIsZonePushedByZoneID:(ICThreadSafeMutableDictionary *)arg1 ;
-(void)setNumberOfRetriesToUpdateSubscriptions:(int)arg1 ;
-(void)setNumberOfRetriesForProcessing:(int)arg1 ;
-(void)setCloudObjectsToRetry:(NSMutableSet *)arg1 ;
-(void)setRetryCountByZoneID:(ICThreadSafeMutableDictionary *)arg1 ;
-(void)setDisabledInternal:(char)arg1 ;
-(void)setFetchingEnabled:(char)arg1 ;
-(void)noteContextObjectsDidChange:(id)arg1 ;
-(void)updateCloudContextState;
-(void)updateSelectorDelayers;
-(NSTimer *)retryAfterTimer;
-(ICSelectorDelayer *)processingSelectorDelayer;
-(ICSelectorDelayer *)pollingSelectorDelayer;
-(char)syncDisabledByServer;
-(void)setSyncDisabledByServer:(char)arg1 ;
-(void)disableCloudSyncingIfCurrentVersionNotSuppported;
-(void)processPendingCloudObjects;
-(void)setProcessingSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(char)isInternetReachable;
-(ICThreadSafeMutableDictionary *)isZonePushedByZoneID;
-(id)allZoneIDs;
-(char)isZonePushed:(id)arg1 ;
-(id)operationToPushRecordZonesForRecordZoneIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)cloudObjectClassesByRecordType;
-(char)isCloudKitSyncingEnabled;
-(char)isFetchingEnabled;
-(void)processAllCloudObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchRecordChangesForAllRecordZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearPendingActivity;
-(NSMutableSet *)cloudObjectsToProcess;
-(NSMutableSet *)cloudObjectsToRetry;
-(ICThreadSafeMutableDictionary *)retryCountByZoneID;
-(void)deleteServerChangeTokenForRecordZoneID:(id)arg1 ;
-(double)timeIntervalToRetryAfterFromError:(id)arg1 ;
-(void)setRetryAfterTimer:(NSTimer *)arg1 ;
-(void)processPendingCloudObjectsForRetryAfter;
-(char)canRetryImmediatelyAfterError:(id)arg1 ;
-(id)operationToDeleteRecordIDs:(id)arg1 cloudObjects:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addDependenciesForModifyRecordsOperation:(id)arg1 ;
-(void)logStartModifyRecordsOperation:(id)arg1 cloudObjectsByRecordID:(id)arg2 ;
-(void)recursiveCancelDependentOperations:(id)arg1 ;
-(id<ICCloudContextDelegate>)cloudContextDelegate;
-(void)operationForCloudObjectDidFail:(id)arg1 ;
-(void)handleRetryAfterKeyForError:(id)arg1 ;
-(void)operationForCloudObjectDidSucceed:(id)arg1 ;
-(id)operationToFetchCloudObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)operationsToPushRecordsForCloudObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)operationToPushRecords:(id)arg1 cloudObjectsByRecordID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)shouldLogPushErrorAsError:(id)arg1 ;
-(char)partialError:(id)arg1 containsErrorCode:(int)arg2 ;
-(char)isDisabledInternal;
-(void)processPendingCloudObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addProcessObjectsOperationWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)processCloudObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)numberOfRetriesForProcessing;
-(void)retryProcessingCloudObjects;
-(void)fetchCloudObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pushCloudObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCloudObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)unfinishedFetchRecordChangesOperationForRecordZoneID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)fetchChangesOperationCreationQueue;
-(id)serverChangeTokenForRecordZoneID:(id)arg1 ;
-(void)recordChanged:(id)arg1 ;
-(void)recordWithIDWasDeleted:(id)arg1 ;
-(void)ensureZonesArePushedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchRecordChangesForAllRecordZones;
-(void)retryFetchRecordChangesForRecordZoneID:(id)arg1 ;
-(void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 ;
-(void)fetchRecordChangesForRecordZoneID:(id)arg1 ;
-(void)fetchRecordChangesForRecordZoneID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 ;
-(void)firePollingSyncRequest;
-(void)setPollingSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(void)retryUpdateSubscriptions;
-(void)logErrorAndRetryUpdateSubscription:(id)arg1 ;
-(int)numberOfRetriesToUpdateSubscriptions;
-(void)fetchAndUpdateSubscriptionsIfNecessary;
-(char)isInForeground;
-(void)fetchUserRecordWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateAccountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)fetchOperationsPending;
-(void)setFetchOperationsInQueue:(char)arg1 ;
-(void)cancelEverythingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteRecordZonesWithZoneIDs:(id)arg1 markZonesAsUserPurged:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)isFetchingAllRecordZones;
-(void)handleNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isFetchingRecordChangesForRecordZoneID:(id)arg1 ;
-(void)reallyFetchRecordChangesForRecordZoneID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)syncIfNecessary;
-(void)operationForCloudObjectsDidSucceed:(id)arg1 ;
-(void)setCloudContextDelegate:(id<ICCloudContextDelegate>)arg1 ;
-(char)fetchOperationsInQueue;
-(char)isDisabled;
-(int)accountStatus;
-(void)setAccountStatus:(int)arg1 ;
@end

