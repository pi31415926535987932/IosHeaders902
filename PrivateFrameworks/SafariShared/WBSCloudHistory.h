/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSCloudHistoryThrottlerDataStore.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, WBSCloudHistoryConfiguration, WBSCloudHistoryStore, WBSCloudHistoryThrottler, NSTimer, WBSCloudHistoryPushAgentProxy, NSMutableDictionary, NSString;

@interface WBSCloudHistory : NSObject <WBSCloudHistoryThrottlerDataStore> {

	NSObject*<OS_dispatch_queue> _cloudHistoryQueue;
	char _cloudHistoryEnabled;
	char _saveChangesWhenHistoryLoads;
	char _fetchChangesWhenHistoryLoads;
	id<NSObject> _historyWasLoadedObserver;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _saveOperationSuddenTerminationDisabler;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _fetchOperationSuddenTerminationDisabler;
	char _removedHistoryItemsArePendingSave;
	WBSCloudHistoryConfiguration* _configuration;
	WBSCloudHistoryStore* _store;
	WBSCloudHistoryThrottler* _saveChangesThrottler;
	WBSCloudHistoryThrottler* _fetchChangesThrottler;
	WBSCloudHistoryThrottler* _syncCircleSizeRetrievalThrottler;
	NSTimer* _serverBackoffTimer;
	char _saveChangesWhenBackoffTimerFires;
	char _fetchChangesWhenBackoffTimerFires;
	WBSCloudHistoryPushAgentProxy* _pushAgent;
	NSTimer* _pushNotificationFetchTimer;
	unsigned _numberOfDevicesInSyncCircle;
	NSMutableDictionary* _syncCircleSizeRetrievalCompletionHandlersByOperation;

}

@property (assign,getter=isCloudHistoryEnabled,nonatomic) char cloudHistoryEnabled; 
@property (assign,nonatomic) unsigned numberOfDevicesInSyncCircle;                               //@synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_currentSaveChangesThrottlerPolicyString;
-(id)_currentFetchChangesThrottlerPolicyString;
-(id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
-(void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
-(void)_initializePushNotificationSupport;
-(void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(/*^block*/id)arg1 ;
-(void)_cloudHistoryConfigurationChanged:(id)arg1 ;
-(void)_pushNotificationReceived:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_saveChangesToCloudHistoryStoreBypassingThrottler:(char)arg1 ;
-(void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(char)arg1 ;
-(char)isCloudHistoryEnabled;
-(void)_saveChangesWhenHistoryLoads;
-(void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_backoffTimeIntervalFromError:(id)arg1 ;
-(void)_backOffWithInterval:(double)arg1 ;
-(void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(char)arg3 withCallback:(/*^block*/id)arg4 ;
-(int)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(char)arg3 ;
-(int)_resultFromError:(id)arg1 ;
-(int)_estimatedPriorityForPotentialSaveAttempt;
-(void)_fetchAndMergeChangesBypassingThrottler:(char)arg1 ;
-(void)_fetchChangesWhenHistoryLoads;
-(void)fetchAndMergeChanges;
-(void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2 withPriority:(int)arg3 ;
-(void)_processPendingPushNotifications;
-(void)_updateDeviceCountInResponseToPushNotification;
-(void)_fetchChangesInResponseToPushNotification:(id)arg1 ;
-(unsigned)_cachedNumberOfDevicesInSyncCircle;
-(void)setNumberOfDevicesInSyncCircle:(unsigned)arg1 ;
-(void)_registerForHistoryWasLoadedNotificationIfNecessary;
-(void)_historyWasLoaded:(id)arg1 ;
-(void)saveChangesToCloudHistoryStore;
-(void)_serverBackoffTimerFired:(id)arg1 ;
-(void)_updateThrottlerPolicies;
-(void)_setCachedNumberOfDevicesInSyncCircle:(unsigned)arg1 ;
-(id)recordOfPastOperationsForThrottler:(id)arg1 ;
-(void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2 ;
-(void)setCloudHistoryEnabled:(char)arg1 ;
-(void)saveChangesToCloudHistoryStoreBypassingThrottler;
-(id)dateOfNextPermittedSaveChangesAttempt;
-(void)fetchAndMergeChangesBypassingThrottler;
-(void)resetForAccountChange;
-(unsigned)numberOfDevicesInSyncCircle;
@end

