/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>
#import <libobjc.A.dylib/DuetSaveAndRestore.h>
#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object, AppLaunchStatsDelegate;
@class AppLaunchStatsState, AppLaunchStatsRetryTracker, AppLaunchStatsAppWorkSpace, AppLaunchStatsDelayLaunch, AppLaunchStatsLaunchQueue, AppLaunchStatsSaveAndRestore, AppLaunchStatsSBMonitor, AppLaunchStatsSBSettings, AppLaunchStatsStateHandlerQueue, AppLaunchStatsREventHandler, AppLaunchStatsScheduler, AppLaunchStatsDiag, NSObject, NSMutableDictionary, NWNetworkOfInterestManager, BudgetPool, CDSession, NSDistributedNotificationCenter, NSDate, NSRunLoop, NSString, NSSet, CDBudget, CDAttribute, PCPersistentTimer;

@interface AppLaunchStats : NSObject <DuetLoggerProtocol, DuetSaveAndRestore, NWNetworkOfInterestManagerDelegate> {

	AppLaunchStatsState* aplsState;
	AppLaunchStatsRetryTracker* aplsRetryTracker;
	AppLaunchStatsAppWorkSpace* aplsAppWorkSpace;
	AppLaunchStatsDelayLaunch* aplsDelayLaunch;
	AppLaunchStatsLaunchQueue* aplsLaunchQueue;
	AppLaunchStatsSaveAndRestore* aplsSaveAndRestore;
	AppLaunchStatsSBMonitor* aplsSBMonitor;
	AppLaunchStatsSBSettings* aplsSBSettings;
	AppLaunchStatsStateHandlerQueue* aplsStateHandlerQueue;
	AppLaunchStatsREventHandler* aplsREventHandler;
	/*^block*/id pendingHandler;
	/*^block*/id recommendHandler;
	AppLaunchStatsScheduler* aplsScheduler;
	AppLaunchStatsDiag* aplsDiag;
	NSObject*<OS_dispatch_queue> noiManagerQueue;
	NSObject*<OS_dispatch_source> noiTimer;
	NSObject*<OS_dispatch_queue> noisQueue;
	NSMutableDictionary* nois;
	NWNetworkOfInterestManager* noiManager;
	BudgetPool* topicLimiter;
	NSMutableDictionary* topicAbleList;
	CDSession* topicSession;
	unsigned char prefUIKitFakeSwitch;
	int messageStatusAPSD;
	int resourceStatus;
	int externaltriggerType;
	NSDistributedNotificationCenter* distNotCenter;
	NSDate* lastDateOfAliveList;
	NSDate* lastExternalTrigTime;
	NSDate* timeOfLastFetch;
	NSDate* oneHourBudgetReset;
	char lastFetchInPoorConditions;
	char newsHasPresentedSmartNotification;
	NSRunLoop* aplsRunLoop;
	NSString* fakeBundleID;
	BOOL isClassCLocked;
	BOOL isAppForecastUpdating;
	BOOL isDataBudgetUpdating;
	BOOL isNoprewarmUpdating;
	BOOL isInternalInstall;
	BOOL isPowerBudgetsUpdating;
	BOOL lastFetchWasTooLongAgo;
	BOOL disableAllDueToSleep;
	BOOL disableFetch;
	BOOL disableHighPriorityPush;
	BOOL disableLowPriorityPush;
	BOOL disableTrending;
	BOOL budgetsInitialized;
	BOOL inBatterySaverMode;
	int allowedMaxCount;
	int lockStateToken;
	int whiteListAppToken;
	int trendToken;
	int pushListToken;
	int pushToken;
	int configToken;
	int aplsNotifyToken;
	int semaphoreSigToken;
	int classCLockedToken;
	int displayStateToken;
	int pluggedInToken;
	int externalTrigToken;
	int batterySaverModeToken;
	int testFetchTriggerToken;
	int lastTriggeredFetchSlot;
	int fetchesInLastTriggeredSlot;
	NSSet* trendCandidates;
	long long lowPriorityStartTime;
	NSObject*<OS_dispatch_queue> appLaunchStatDQueue;
	NSObject*<OS_dispatch_queue> appLaunchStatPushQueue;
	NSObject*<OS_dispatch_queue> delegateQueue;
	NSObject*<OS_dispatch_queue> budgetQueue;
	NSObject*<OS_dispatch_source> theTimer;
	NSObject*<OS_xpc_object> conn;
	id<AppLaunchStatsDelegate> delegate;
	CDSession* session;
	CDSession* budget_session;
	CDBudget* dataBudget;
	CDBudget* energyBudget;
	CDAttribute* bundleIdAttribute;
	NSMutableDictionary* meterTokenTracker;
	NSDate* periodicTimeTracker;
	PCPersistentTimer* newsWakeTimer;
	NSDate* newsLaunchTime;

}

@property (nonatomic,readonly) AppLaunchStatsState * aplsState; 
@property (nonatomic,readonly) id pendingHandler; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> appLaunchStatDQueue; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> conn; 
-(void)restore:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)reloadConfiguration;
-(void)onTick;
-(AppLaunchStatsState *)aplsState;
-(void)removeAppFromLST:(id)arg1 ;
-(void)aplsSBMonitorEvent:(int)arg1 withBundleID:(id)arg2 ;
-(void)handleNewsLaunch:(int)arg1 ;
-(void)deleteAllEntriesInDB;
-(void)runPCtimerHeartBeat:(BOOL)arg1 ;
-(void)updatePredictionsForAllNOIsAsync;
-(void)updateStateFromExternalNotification:(unsigned long long)arg1 ;
-(BOOL)isSpringBoardInstance;
-(void)initAfterClassCUnlocked;
-(void)initAfterClassCUnlockedForClient;
-(id)allTrackedNOIs;
-(void)didStopTrackingNOI:(id)arg1 ;
-(void)launchExternalTriggers:(unsigned long long)arg1 ;
-(void)updateTrendingBehavior:(unsigned long long)arg1 withBundleID:(id)arg2 ;
-(void)receiveIncomingLowPriorityPushList:(unsigned long long)arg1 ;
-(void)updateBatterySaverState:(int)arg1 ;
-(void)whatToLaunch:(id)arg1 ;
-(void)initSharedNotification;
-(void)receiveIncomingLowPriorityPushRequestForReservationStation:(id)arg1 ;
-(void)receiveConnectedStateNotification:(unsigned long long)arg1 ;
-(char)hasNewsPresentedSmartNotification;
-(void)wakeNewsIfNecessary:(char)arg1 ;
-(void)invalidateNewsWakeTimer;
-(void)newsWake:(id)arg1 ;
-(void)updatePredictionForNOIAsync:(id)arg1 ;
-(void)updateQuality:(int)arg1 forInterface:(int)arg2 ;
-(char)noNetworkingAvailable;
-(id)trackedNOIForInterface:(int)arg1 ;
-(char)betterPredictedQualityForInterface:(id)arg1 withMinQuality:(int)arg2 beforeDate:(id)arg3 ;
-(BOOL)hasOpportunisticFetchFeatureWithType:(id)arg1 withFetch:(int)arg2 ;
-(NSObject*<OS_dispatch_queue>)appLaunchStatDQueue;
-(void)registerAppForTrending:(id)arg1 ;
-(void)testOneHourBudgetExpirytime;
-(void)updateDailyAppForecast;
-(void)resetBudgetPool;
-(void)resetBudgetPoolClient;
-(void)updateAliveList;
-(id)convertComplicationTopicToBundleID:(id)arg1 ;
-(char)complicationIsActiveForBundle:(id)arg1 ;
-(char)budgetAvailableForComplication:(id)arg1 ;
-(void)initBudgets;
-(id)convertTopicIDtoBundleID:(id)arg1 ;
-(void)updateResourceAvailability;
-(char)shouldDeferNetworking;
-(char)isLaunchDeniedForBundle:(id)arg1 withTriggerType:(int)arg2 isTrending:(char)arg3 withPushHandler:(/*^block*/id)arg4 ;
-(void)replaceTimeSlot:(id)arg1 ;
-(id)firstWakeApps;
-(void)retrieveAppScoresWithHandler:(/*^block*/id)arg1 ;
-(int)bundlePredictionZone:(id)arg1 launchzone:(int)arg2 top:(int)arg3 filter:(BOOL)arg4 ;
-(void)appActivityForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 appFilter:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)updateDailyOutOfBandForecast;
-(void)initRegisterNotifications;
-(void)setPendingWorkQueue:(id)arg1 ;
-(void)initChargeStatusMonitoring;
-(void)checkWifiChargerConnected;
-(void)testAndReleaseBlueList;
-(char)isPushTopicForComplication:(id)arg1 ;
-(void)ableAdmissionForTopic:(id)arg1 attribute:(id)arg2 value:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)triggerLaunchQueue:(id)arg1 ;
-(void)sendLSTxtqueriesWithMask:(unsigned long long)arg1 ;
-(void)updateInstantNetworkQuality;
-(void)readPool:(id)arg1 ;
-(id)defaultsDomainReadString:(id)arg1 ;
-(void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)trendQueryLaunchApp:(/*^block*/id)arg1 ;
-(void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
-(unsigned)appUsageCountForBundle:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(void)preWarmHasStarted:(id)arg1 withResult:(unsigned)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)preWarmHasEnded:(id)arg1 withResult:(unsigned)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)setAppLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(void)setAppLaunchStatsPendingDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAppLaunchStatsPendingHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)retrieveAppScoresWithQueryHandler:(/*^block*/id)arg1 ;
-(void)testDatabaseAge:(/*^block*/id)arg1 ;
-(void)dataForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)energyForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)hasOpportunisticFetchFeature:(id)arg1 ;
-(id)doConvertTopicString:(id)arg1 withRange:(NSRange)arg2 withSubStringIndex:(unsigned)arg3 ;
-(void)setDelayLaunchFor:(id)arg1 with:(double)arg2 ;
-(id)pendingHandler;
-(NSObject*<OS_xpc_object>)conn;
@end

