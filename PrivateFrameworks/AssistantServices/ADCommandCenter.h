/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <assistantd/ADSessionDelegate.h>
#import <assistantd/ADSpeechManagerDelegate.h>
#import <assistantd/ADLocationManagerDelegate.h>
#import <assistantd/ADUIServiceDelegate.h>
#import <assistantd/ADCallObserverDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, ADCommandCenterClient, ADCommandCenterRequestDelegate, ADCommandCenterSpeechDelegate, OS_dispatch_group, ADCommandCenterSyncDelegate, OS_dispatch_source;
@class NSObject, ADUIService, ADAccount, ADSession, ADDiagnosticsManager, ADSpeechManager, ADServiceManager, ADDomainObjectCache, ADRetryManager, ADResultObjectCache, ADLocationManager, ADMotionManager, ADOfflineSAMetricsManager, ADRemoteRequestHelper, ADRequestStatistics, ADCallObserver, NSUUID, AFSpeechRequestOptions, SASStartSpeech, SABaseCommand, SASPronunciationContext, NSMutableSet, NSMutableDictionary, NSString, ADContextManager, SAClearContext, ADSyncManager, ADSyncVerificationHelper, ADAcousticIDHelper, ADSharedDataConnection;

@interface ADCommandCenter : NSObject <ADSessionDelegate, ADSpeechManagerDelegate, ADLocationManagerDelegate, ADUIServiceDelegate, ADCallObserverDelegate, MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	id<ADCommandCenterClient> _currentClient;
	id<ADCommandCenterRequestDelegate> _requestDelegate;
	id<ADCommandCenterSpeechDelegate> _speechDelegate;
	id<ADCommandCenterSpeechDelegate> _speechFileDelegate;
	ADUIService* _uiService;
	ADAccount* _account;
	ADSession* _session;
	ADDiagnosticsManager* _diagnosticsManager;
	ADSpeechManager* _speechManager;
	ADServiceManager* _serviceManager;
	ADDomainObjectCache* _domainObjectCache;
	ADRetryManager* _retryManager;
	ADResultObjectCache* _resultObjectCache;
	ADLocationManager* _locationManager;
	ADMotionManager* _motionManager;
	ADOfflineSAMetricsManager* _offlineSAMetricsManager;
	ADRemoteRequestHelper* _remoteRequestHelper;
	ADRequestStatistics* _requestStatistics;
	ADCallObserver* _callObserver;
	char _callInProcess;
	NSUUID* _callTransactionUUID;
	char _callIsLikely;
	/*^block*/id _speechCompletion;
	/*^block*/id _requestBarrier;
	AFSpeechRequestOptions* _currentSpeechRequestOptions;
	SASStartSpeech* _startSpeechCommand;
	SABaseCommand* _currentRequest;
	SABaseCommand* _lastRequest;
	char _startingPronunciationRequest;
	SASPronunciationContext* _pronunciationContext;
	char _speechDelegateHasReceivedSpeechRecognized;
	char _speechDelegateHasReceivedPartialResult;
	char _sessionExperiencedError;
	char _hasReceivedServerSpeechRecognitions;
	NSObject*<OS_dispatch_group> _speechRecognitionGroup;
	NSObject*<OS_dispatch_group> _speechRequestGroup;
	NSMutableSet* _outstandingRequestIds;
	NSMutableDictionary* _aceCompletionMap;
	char _deviceIsLocked;
	char _deviceIsShowingLockScreen;
	double _requestEffectiveStartTime;
	char _isInStarkMode;
	char _cachedLocationWasSentForRequest;
	char _restrictionsWereSetForRequest;
	/*^block*/id _requestEndCompletion;
	NSString* _deferredRequestEndIdentifier;
	ADContextManager* _contextManager;
	SAClearContext* _lastClearContext;
	ADSyncManager* _syncManager;
	id<ADCommandCenterSyncDelegate> _syncDelegate;
	NSMutableSet* _oustandingAnchorsRequests;
	NSMutableSet* _outstandingSyncChunks;
	char _needsToSendSyncFinished;
	NSString* _outstandingSyncVerificationRequestID;
	char _shouldPostSyncVerifyFinishedNotification;
	char _needVerificationFullReport;
	char _isVerifying;
	ADSyncVerificationHelper* _verificationHelper;
	ADAcousticIDHelper* _acousticIDHelper;
	NSObject*<OS_dispatch_source> _partialResultAcousticIDTimer;
	char _hasSanityCheckedAutodownloadedAssets;
	ADSharedDataConnection* _sharedDataConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<ADCommandCenterClient> _currentClient;                        //@synthesize currentClient=_currentClient - In the implementation block
@property (nonatomic,readonly) id<ADCommandCenterSpeechDelegate> _speechDelegate;               //@synthesize speechDelegate=_speechDelegate - In the implementation block
@property (nonatomic,readonly) char _speechDelegateHasReceivedPartialResult;                    //@synthesize speechDelegateHasReceivedPartialResult=_speechDelegateHasReceivedPartialResult - In the implementation block
@property (nonatomic,readonly) SABaseCommand * _currentRequest;                                 //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,readonly) char _deviceIsLocked;                                            //@synthesize deviceIsLocked=_deviceIsLocked - In the implementation block
@property (nonatomic,readonly) ADSpeechManager * _speechManager; 
@property (setter=_setLastRequest:,nonatomic,retain) SABaseCommand * _lastRequest;              //@synthesize lastRequest=_lastRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCommandCenter;
+(id)sharedQueue;
-(void)dismissAssistant;
-(id)_sharedDataConnection;
-(void)acquireLocationInUseAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientDisconnected:(id)arg1 ;
-(void)releaseLocationInUseAssertionForReason:(id)arg1 ;
-(void)clientConnected:(id)arg1 ;
-(void)sanityCheckAutodownloadedAssetsForced:(char)arg1 ;
-(void)installedAssetsUpdated;
-(void)updateSharedDataFromPeerUseCache:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncAnchorKeys:(id)arg1 forceReset:(char)arg2 reason:(id)arg3 ;
-(void)syncNeeded;
-(void)rescheduleValidationRefresh;
-(void)refreshAssistantValidation;
-(void)prepareForShutdown;
-(void)destroyActiveAccount;
-(void)recordDefrostXPCMessageToProcessLaunchDuration:(double)arg1 ;
-(void)getSharedDataForPeer:(/*^block*/id)arg1 ;
-(void)handleRemoteRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_acousticIDHelper;
-(void)_sendCommandToServer:(id)arg1 ;
-(ADSpeechManager *)_speechManager;
-(void)_acousticId_startSessionForSpeechRequest:(id)arg1 ;
-(id<ADCommandCenterClient>)_currentClient;
-(id)_requestStatistics;
-(void)_startAcousticIDRequestWithDelegate:(id)arg1 withOptions:(id)arg2 context:(id)arg3 ;
-(char)_speechDelegateHasReceivedPartialResult;
-(id<ADCommandCenterSpeechDelegate>)_speechDelegate;
-(void)cancelSpeechForDelegate:(id)arg1 ;
-(void)_acousticId_startSessionWithContext:(id)arg1 ;
-(void)_acousticId_handleFingerprint:(id)arg1 duration:(double)arg2 ;
-(void)_acousticId_musicWasDetected;
-(char)_acousticId_hasCommandForRefId:(id)arg1 ;
-(void)_acousticId_speechCaptureCompleted;
-(void)_acousticId_commandFailed:(id)arg1 ;
-(void)_acousticId_sessionFailed;
-(void)_acousticId_reset;
-(void)_acousticId_clearPartialResultTimer;
-(void)_saAIRequestSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saAISearchCompleted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saAIRetrySearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acousticIDHelperDidStartSession:(id)arg1 ;
-(void)acousticIDHelper:(id)arg1 didCompleteSessionSuccessfully:(char)arg2 ;
-(id)_serviceManager;
-(void)_activityContinuationIsAllowedFlagMayHaveChanged;
-(void)_context_reset;
-(void)_registerDomainSignalServiceWithServiceManager:(id)arg1 ;
-(void)_registerOTTServicesWithServiceManager:(id)arg1 ;
-(void)_registerNanoServicesWithServiceManager:(id)arg1 ;
-(void)_sync_reset;
-(id)_audioStackTracker;
-(void)_setCallIsLikely:(char)arg1 ;
-(void)_setCurrentRequest:(id)arg1 ;
-(void)_setLastRequest:(id)arg1 ;
-(void)_cancelCurrentRequest;
-(void)_clearRequestDelegateState;
-(void)_clearSpeechDelegateState;
-(void)_replaceSpeechDelegateWhenReady:(id)arg1 cancelRequestIfDelegatesMatch:(char)arg2 suppressAlert:(char)arg3 withCompletion:(/*^block*/id)arg4 ;
-(char)_isInCall;
-(id)_offlineSAMetricsManager;
-(id)_retryManager;
-(void)_sendCommandToServer:(id)arg1 opportunistically:(char)arg2 ;
-(void)_sendCommandToServer:(id)arg1 opportunistically:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addCompletion:(/*^block*/id)arg1 forCommandId:(id)arg2 ;
-(void)_addOutstandingRequestId:(id)arg1 ;
-(void)_sendRequestToServer:(id)arg1 ;
-(void)_retryNakedCommandsIfNeeded;
-(void)_sendRetryableRequestToServer:(id)arg1 ;
-(void)_handleGenericConcreteAceCommand:(id)arg1 withDelegate:(id)arg2 interruptOutstandingRequest:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)_reallyHandleNewStartLocalRequest:(id)arg1 ;
-(void)_handleNextCallbacksForReply:(id)arg1 forCommand:(id)arg2 currentMissingCommands:(id)arg3 ;
-(id)_resultObjectCache;
-(void)_handleCommand:(id)arg1 ;
-(SABaseCommand *)_currentRequest;
-(void)_removeOutstandingRequestId:(id)arg1 ;
-(char)_sync_isSyncing;
-(char)_hasActiveClientOrSyncing;
-(void)_sync_setSyncVerificationNeededAndFullReportNeeded:(char)arg1 shouldPostNotification:(char)arg2 ;
-(id)_lockStateSetRestrictionsThunk;
-(void)_handleServiceReply:(id)arg1 error:(id)arg2 forCommand:(id)arg3 ;
-(char)_hasOutstandingRequestId:(id)arg1 ;
-(char)_sync_hasCommandForRefId:(id)arg1 ;
-(char)_hasCompletionForCommandId:(id)arg1 ;
-(void)_processCallbacksForCommand:(id)arg1 ;
-(void)_handleServiceCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invokeCompletionForCommand:(id)arg1 ;
-(void)_handleNextCallbacksForReply:(id)arg1 forCommand:(id)arg2 ;
-(void)_sendCommandFailedForCommand:(id)arg1 error:(id)arg2 ;
-(void)_sendCommandFailedForCommand:(id)arg1 reason:(id)arg2 ;
-(void)_handleValidServiceReply:(id)arg1 forCommand:(id)arg2 ;
-(void)_shutdownSessionWhenIdle;
-(void)_cancelCallKeepAlive;
-(void)_sync_continueIfConditionsMet;
-(void)_scheduleCallKeepAlive;
-(void)_gatherAndSendSuccessMetrics;
-(char)_refIdIsSpeechStart:(id)arg1 ;
-(void)_endSpeechRequestForCommand:(id)arg1 withError:(id)arg2 suppressAlert:(char)arg3 ;
-(void)_handleBareRequestCompleted:(id)arg1 ;
-(void)_sync_commandFailed:(id)arg1 ;
-(void)_sync_commandIgnored:(id)arg1 ;
-(void)_handleSendCommands:(id)arg1 forRequestDelegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startNonSpeechRequest:(id)arg1 forDelegate:(id)arg2 options:(id)arg3 suppressAlert:(char)arg4 ;
-(void)_handleNewStartLocalRequest:(id)arg1 suppressCancelationAlertIfCapturingSpeech:(char)arg2 ;
-(void)_handleSpeechRecognizedWithRefId:(id)arg1 delegateBlock:(/*^block*/id)arg2 ;
-(void)_dictationSessionDidComplete;
-(void)_informSpeechManagerOfRecognitionForElapsedTime:(double)arg1 isFinal:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handlePartialResultWithRefId:(id)arg1 elapsedTime:(double)arg2 delegateBlock:(/*^block*/id)arg3 ;
-(void)_recordFailureMetricsForError:(id)arg1 ;
-(void)_handleSuspendClientEndpointer:(id)arg1 ;
-(void)_context_acknowledgeBulletinForObject:(id)arg1 ;
-(id)_diagnosticsManager;
-(void)_recordRequestStatisticsMetrics;
-(void)_startObservingCallState;
-(void)_invokeAllCompletions;
-(char)_shouldClearNakedCommandsOnError:(id)arg1 ;
-(void)_sessionDidFailWithError:(id)arg1 ;
-(void)_changeRequestIdFrom:(id)arg1 to:(id)arg2 ;
-(void)_sync_assistantLoadedSyncRequest:(char)arg1 anchors:(id)arg2 ;
-(void)_sendStartSpeechCommandWithSpeechManager:(id)arg1 info:(id)arg2 ;
-(void)_sendContextAndRestrictionsForSpeechRequestWithInfo:(id)arg1 ;
-(void)_sendEnableServerEndpointerCommandWithRefID:(id)arg1 ;
-(void)_sendLocationForSpeechRequest:(id)arg1 ;
-(void)_context_updateAlertContext;
-(void)_sendRestrictionsInPreparationForRequest;
-(void)_sendSessionObject:(id)arg1 opportunistically:(char)arg2 ;
-(void)_speechCaptureCompleted;
-(void)_sendCancelSpeechForCommand:(id)arg1 ;
-(void)_reallyEndSessionForDelegate:(id)arg1 ;
-(void)_replaceSpeechDelegateWhenReady:(id)arg1 suppressAlert:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_replaceRequestDelegate:(id)arg1 ;
-(void)_reallyCommitOrSaveMetrics:(id)arg1 ;
-(void)_reallyHandleNewStartRequest:(id)arg1 ;
-(void)_startSpeechRequestWithDelegate:(id)arg1 withOptions:(id)arg2 sessionUUID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_context_setSTApplicationContext:(id)arg1 ;
-(SABaseCommand *)_lastRequest;
-(void)_sendRollbackCommandForCommand:(id)arg1 ;
-(void)_updateSpeechOptions:(id)arg1 forDelegate:(id)arg2 allowUpdateInSpeechCompletion:(char)arg3 ;
-(void)_startNonSpeechRequest:(id)arg1 forDelegate:(id)arg2 ;
-(void)_context_clearContext;
-(void)_sendCommandToServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_clearAccount;
-(id)_remoteRequestHelper;
-(id)_domainObjectCache;
-(void)_sync_syncAnchorKeys:(id)arg1 forceReset:(char)arg2 reason:(id)arg3 ;
-(void)_sync_setSyncNeeded;
-(void)_sync_setSyncDelegate:(id)arg1 ;
-(void)_preheatWithStyle:(int)arg1 ;
-(void)_forceAudioSessionActive;
-(void)_setLanguageCode:(id)arg1 ;
-(void)_setLockState:(char)arg1 showingLockScreen:(char)arg2 ;
-(void)_setStarkRestriction:(char)arg1 ;
-(void)_setVoiceOverIsActive:(char)arg1 ;
-(void)_endSessionForDelegate:(id)arg1 ;
-(void)_startRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)_handleRemoteRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareAudioSessionForDelegate:(id)arg1 withOptions:(id)arg2 ;
-(void)_startSpeechRequestWithDelegate:(id)arg1 withOptions:(id)arg2 sessionUUID:(id)arg3 ;
-(void)_startRecordingForPendingSpeechRequestForDelegate:(id)arg1 withOptions:(id)arg2 sessionUUID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_startSpeechPronunciationRequestWithDelegate:(id)arg1 withOptions:(id)arg2 pronunciationContext:(id)arg3 ;
-(void)_startSpeechRequestWithURL:(id)arg1 isNarrowBand:(char)arg2 withDelegate:(id)arg3 ;
-(void)_cancelRequestForDelegate:(id)arg1 ;
-(void)_rollbackRequestForDelegate:(id)arg1 ;
-(void)_startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 sessionUUID:(id)arg4 delegate:(id)arg5 ;
-(void)_startRecordedDictationWithLanguage:(id)arg1 options:(id)arg2 sessionUUID:(id)arg3 delegate:(id)arg4 ;
-(void)_addRecordedSpeechSampleData:(id)arg1 delegate:(id)arg2 ;
-(void)_startDictationWithURL:(id)arg1 isNarrowBand:(char)arg2 language:(id)arg3 options:(id)arg4 sessionUUID:(id)arg5 delegate:(id)arg6 ;
-(void)_removeDelegate:(id)arg1 ;
-(void)_stopSpeechWithOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)_cancelSpeechForDelegate:(id)arg1 ;
-(void)_updateSpeechOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)_sendSpeechCorrectionInfo:(id)arg1 forCorrectionContext:(id)arg2 ;
-(void)_handleGenericAceCommand:(id)arg1 withDelegate:(id)arg2 interruptOutstandingRequest:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)_context_rollbackClearContext;
-(void)_context_setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2 ;
-(void)_context_willSetApplicationContextWithRefId:(id)arg1 ;
-(void)_context_setApplicationContext:(id)arg1 ;
-(void)_context_setApplicationContextForApplicationInfos:(id)arg1 ;
-(void)_context_setAlertContextDirty;
-(void)_prepareForPhoneCall;
-(void)_telephonyRequestCompleted;
-(void)_recordRequestMetric:(id)arg1 withTimestamp:(double)arg2 ;
-(void)_requestBarrier:(/*^block*/id)arg1 ;
-(void)_recordUIMetrics:(id)arg1 ;
-(void)_recordCancellationMetrics;
-(void)_recordDefrostXPCMessageToProcessLaunchDuration:(double)arg1 ;
-(void)_fetchSupportedLanguagesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSupportedLanguagesWithCompletion:(/*^block*/id)arg1 ;
-(void)_deleteAccountWithIdentifier:(id)arg1 ;
-(id)_activeAccountIdentifier;
-(void)_setActiveAccountIdentifier:(id)arg1 ;
-(void)_destroyActiveAccount;
-(void)_rescheduleValidationRefresh;
-(id)_managedStoreObjectForKey:(id)arg1 ;
-(void)_setManagedStoreObject:(id)arg1 forKey:(id)arg2 ;
-(void)_setUIService:(id)arg1 ;
-(void)_startUpdatingMotionActivity;
-(void)_stopUpdatingMotionActivity;
-(void)_recordRequestIndifferentMetrics;
-(void)_sync_syncIfNeeded;
-(void)_getDeferredObjectsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assistantSessionWillStartConnection:(id)arg1 ;
-(void)assistantSession:(id)arg1 receivedCommand:(id)arg2 ;
-(void)assistantSession:(id)arg1 receivedError:(id)arg2 ;
-(char)assistantSessionShouldLogVisibleRequestFailure:(id)arg1 forError:(id)arg2 ;
-(char)assistantSessionShouldRestartConnectionOnWiFi:(id)arg1 ;
-(void)assistantSessionConnectionDidReset:(id)arg1 ;
-(char)assistantSessionShouldAttemptRetry:(id)arg1 ;
-(id)assistantSessionCommandsToRestoreStateOnNewConnection:(id)arg1 ;
-(void)assistantSession:(id)arg1 didChangeRequestIdFrom:(id)arg2 toId:(id)arg3 ;
-(void)assistantSession:(id)arg1 didLoadAssistantSyncRequested:(char)arg2 syncAnchors:(id)arg3 ;
-(void)assistantSession:(id)arg1 didOpenConnectionWithPolicyId:(id)arg2 routeId:(id)arg3 connectionDelay:(double)arg4 ;
-(void)assistantSession:(id)arg1 willRetryOnError:(id)arg2 ;
-(void)speechManager:(id)arg1 preheatWithRecordingInfo:(id)arg2 ;
-(void)speechManager:(id)arg1 willStartRecordingAtTimestamp:(double)arg2 isFromFile:(char)arg3 sessionUUID:(id)arg4 ;
-(void)speechManager:(id)arg1 didStartRecordingWithInfo:(id)arg2 sessionUUID:(id)arg3 ;
-(void)speechManager:(id)arg1 didUpdateRecordingWithInfo:(id)arg2 sessionUUID:(id)arg3 ;
-(void)speechManager:(id)arg1 capturedPackets:(id)arg2 totalCount:(int)arg3 ;
-(void)speechManager:(id)arg1 capturedFingerprint:(id)arg2 duration:(double)arg3 ;
-(void)speechManagerDidDetectMusic:(id)arg1 ;
-(void)speechManagerDidDelayEndpointForMusic:(id)arg1 ;
-(void)speechManager:(id)arg1 updatedAveragePower:(float)arg2 peakPower:(float)arg3 ;
-(void)speechManager:(id)arg1 didFinishWithTotalPackets:(int)arg2 endpointMode:(int)arg3 capturingMode:(int)arg4 sessionUUID:(id)arg5 ;
-(void)speechManager:(id)arg1 didCancelWithSessionUUID:(id)arg2 ;
-(void)speechManager:(id)arg1 didFailWithError:(id)arg2 sessionUUID:(id)arg3 ;
-(void)speechManager:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3 sessionUUID:(id)arg4 ;
-(void)speechManager:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2 sessionUUID:(id)arg3 ;
-(void)speechManager:(id)arg1 didRecognizeTokens:(id)arg2 sessionUUID:(id)arg3 ;
-(void)speechManager:(id)arg1 didRecognizePhrases:(id)arg2 sessionUUID:(id)arg3 ;
-(void)speechManager:(id)arg1 recognitionDidFailWithError:(id)arg2 sessionUUID:(id)arg3 ;
-(void)locationManager:(id)arg1 wantsToSetRequestOrigin:(id)arg2 ;
-(void)UIService:(id)arg1 executeCommandHandler:(/*^block*/id)arg2 ;
-(void)adCallStateChangedCallInProcess:(char)arg1 ;
-(char)_hasOutstandingRequests;
-(void)_cancelSessionIfIdle;
-(void)_didLaunchAppForRequestWithIdentifier:(id)arg1 ;
-(void)setSyncVerificationNeededAndFullReportNeeded:(char)arg1 shouldPostNotification:(char)arg2 ;
-(void)_sendCachedLocationInPreparationForSpeech;
-(void)_sendServiceCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopObserveringCallState;
-(void)_saRequestCompleted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saCommandFailed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saCommandIgnored:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSendCommands:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saAssistantDestroyed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saCancelSucceeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saRollbackSucceeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSetClientData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSetHandoffPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saStartLocalRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saAddResultObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saInitiateHandoffOnCompanion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSetDeviceTTSMuteState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sasSpeechRecognized:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sasSpeechPartialResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saStructuredDictationResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saStructuredDictationFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sasSpeechFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sasAbortSpeechRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sasVoiceSearchPartialResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sasVoiceSearchFinalResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sasSuspendClientEndpointer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saAcknowledgeAlert:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saGetRequestOrigin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saHandoffAvailabilityCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSetLatencyDiagnosticConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saUnhandledObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)assistantSessionShouldSetAssistantData:(id)arg1 ;
-(void)_prepareForAppLaunchForRequest:(id)arg1 ;
-(void)setLanguageCode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endSessionForDelegate:(id)arg1 ;
-(void)startRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)prepareAudioSessionForDelegate:(id)arg1 withOptions:(id)arg2 ;
-(void)startSpeechRequestWithDelegate:(id)arg1 withOptions:(id)arg2 ;
-(void)startRecordingForPendingSpeechRequestForDelegate:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSpeechPronunciationRequestWithDelegate:(id)arg1 withOptions:(id)arg2 pronunciationContext:(id)arg3 ;
-(void)startAcousticIDRequestWithDelegate:(id)arg1 withOptions:(id)arg2 context:(id)arg3 ;
-(void)startSpeechRequestWithURL:(id)arg1 isNarrowBand:(char)arg2 withDelegate:(id)arg3 ;
-(void)cancelRequestForDelegate:(id)arg1 ;
-(void)rollbackRequestForDelegate:(id)arg1 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 sessionUUID:(id)arg4 delegate:(id)arg5 ;
-(void)startRecordedDictationWithLanguage:(id)arg1 options:(id)arg2 sessionUUID:(id)arg3 delegate:(id)arg4 ;
-(void)addRecordedSpeechSampleData:(id)arg1 delegate:(id)arg2 ;
-(void)startDictationWithURL:(id)arg1 isNarrowBand:(char)arg2 language:(id)arg3 options:(id)arg4 sessionUUID:(id)arg5 delegate:(id)arg6 ;
-(void)stopSpeechWithOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)updateSpeechOptions:(id)arg1 forDelegate:(id)arg2 ;
-(void)handleGenericAceCommand:(id)arg1 withDelegate:(id)arg2 interruptOutstandingRequest:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)recordSAMetrics:(id)arg1 ;
-(void)fetchSupportedLanguages;
-(void)fetchAccounts:(/*^block*/id)arg1 ;
-(void)fetchActiveAccountIdentifier:(/*^block*/id)arg1 ;
-(void)fetchManagedStoreObjectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchContext:(/*^block*/id)arg1 ;
-(void)openApplicationWithBundleID:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_broadcastCommand:(id)arg1 ;
-(void)_listInstalledServicesWithCompletion:(/*^block*/id)arg1 ;
-(char)_deviceIsLocked;
-(id)_contextManager;
-(id)_syncManager;
-(void)appLaunchHandler:(id)arg1 didLaunchAppForRequestId:(id)arg2 ;
-(void)syncManager:(id)arg1 finishedSyncForKeys:(id)arg2 postNotification:(char)arg3 ;
-(void)syncManager:(id)arg1 chunkForSyncInfo:(id)arg2 chunkInfo:(id)arg3 ;
-(void)_handleCommandInAMOS:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendAMOSCommand:(id)arg1 domain:(id)arg2 toBundleWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_amosSADomainObjectCreate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSADOCommandIfServiceDoesNotUseAMOS:(id)arg1 allowInterposing:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendAMOSCommandToService:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_amosSADomainObjectRetrieve:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateObjectFromService:(id)arg1 sadIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_amosSADomainObjectUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_amosSADomainObjectCancel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_amosSADomainObjectDelete:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_amosSADomainObjectCommit:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_amosSADomainObjectPunchOut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saDomainObjectCreate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saDomainObjectRetrieve:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saDomainObjectUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saDomainObjectCancel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saDomainObjectDelete:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saDomainObjectCommit:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saDomainObjectPunchOut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAutoDownloadedVoiceAssetsForOutputVoice;
-(void)contextManager:(id)arg1 didReceiveNewBackgroundContext:(id)arg2 ;
-(id)_emptySyncAnchor;
-(id)_synapseAnchorsForFullSyncForAppBundleID:(id)arg1 intentSlotName:(id)arg2 ;
-(id)_allAnchorsFromRequest:(id)arg1 andResponse:(id)arg2 ;
-(void)_resetSyncVerification;
-(void)_removeOustandingAnchorsRequestId:(id)arg1 ;
-(void)_handleValidatedSyncGetAnchorsResponse:(id)arg1 ;
-(void)_removeOutstandingSyncChunkId:(id)arg1 ;
-(void)_sync_continueVerificationIfConditionsMet;
-(void)_addOutstandingSyncChunkId:(id)arg1 ;
-(void)_finishVerificationWithKeys:(id)arg1 ;
-(void)_prepareAndStartSyncVerification;
-(void)_addOutstandingAnchorsRequestId:(id)arg1 ;
-(char)_sync_isRequestBlockingSync;
-(char)_syncChunkWindowFull;
-(void)_sync_requestAnchorsForKeys:(id)arg1 vocabSources:(NSDictionary*)arg2 includeAllKnownAnchors:(char)arg3 reason:(id)arg4 ;
-(void)_cleanUpForFailureCommandWithRefId:(id)arg1 ;
-(char)_hasOutstandingSyncChunkId:(id)arg1 ;
-(char)_hasOutstandingAnchorsRequestId:(id)arg1 ;
-(void)_saSyncClientVerify:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSyncGetAnchorsResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSyncChunkDenied:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSyncChunkAccepted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saSyncServerVerifyResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateSharedDataWithData:(id)arg1 ;
-(void)sharedDataConnection:(id)arg1 didUpdateSharedData:(id)arg2 ;
-(void)_setBackgroundContext;
-(id)_sendContextPromiseForTypes:(int)arg1 ;
-(void)_ensureBackgroundContextSentToServer;
-(void)addService:(id)arg1 ;
-(void)_clearContext;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_motionManager;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestDidEnd;
-(void)recordCancellationMetrics;
-(void)recordFailureMetricsForError:(id)arg1 ;
-(void)setLockState:(char)arg1 showingLockScreen:(char)arg2 ;
-(void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)willSetApplicationContextWithRefId:(id)arg1 ;
-(void)setAlertContextDirty;
-(void)prepareForPhoneCall;
-(void)requestBarrier:(/*^block*/id)arg1 ;
-(void)startRemoteRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAccountWithIdentifier:(id)arg1 ;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)sendSpeechCorrectionInfo:(id)arg1 forCorrectionContext:(id)arg2 ;
-(void)_sendEngagementFeedback:(int)arg1 voiceQueryIdentifier:(id)arg2 ;
-(void)sendEngagementFeedback:(int)arg1 voiceQueryIdentifier:(id)arg2 ;
-(void)setManagedStoreObject:(id)arg1 forKey:(id)arg2 ;
-(void)taskmaster:(id)arg1 didReceivePunchoutOutcome:(id)arg2 ;
-(void)taskmaster:(id)arg1 didLaunchApplicationForRequestWithId:(id)arg2 ;
-(void)_refreshAssistantValidation;
-(void)setIsStark:(char)arg1 ;
-(void)forceAudioSessionActive;
-(void)rollbackClearContext;
-(void)telephonyRequestCompleted;
-(void)recordUIMetrics:(id)arg1 ;
-(void)setVoiceOverIsActive:(char)arg1 ;
-(char)setOutputVoice:(id)arg1 ;
-(void)preheatWithStyle:(int)arg1 ;
-(void)_requestWillStart;
-(void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2 ;
-(void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2 ;
-(void)setApplicationContextForApplicationInfos:(id)arg1 ;
-(id)_session;
-(void)defrost;
-(id)_locationManager;
-(void)_cancelSession;
-(char)isDeviceLocked;
-(void)removeService:(id)arg1 ;
-(id)_accounts;
-(void)setApplicationContext:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)clearContext;
-(char)_shouldRetryForError:(id)arg1 ;
-(void)setSyncDelegate:(id)arg1 ;
-(id)_account;
@end

