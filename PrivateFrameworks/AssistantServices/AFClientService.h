/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFClientService <NSObject>
@required
-(oneway void)endSession;
-(oneway void)cancelSpeech;
-(oneway void)stopSpeechWithOptions:(id)arg1;
-(oneway void)requestStateUpdateWithReply:(/*^block*/id)arg1;
-(oneway void)recordCancellationMetrics;
-(oneway void)recordFailureMetricsForError:(id)arg1;
-(oneway void)willPresentUIWithReply:(/*^block*/id)arg1;
-(oneway void)setLockState:(char)arg1 showingLockScreen:(char)arg2;
-(oneway void)startSpeechRequestWithOptions:(id)arg1;
-(oneway void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)startAcousticIDRequestWithOptions:(id)arg1 context:(id)arg2;
-(oneway void)performGenericAceCommand:(id)arg1 interruptOutstandingRequest:(char)arg2 reply:(/*^block*/id)arg3;
-(oneway void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)willSetApplicationContextWithRefId:(id)arg1;
-(oneway void)setAlertContextDirty;
-(oneway void)prepareForPhoneCall;
-(oneway void)_startSpeechWithURL:(id)arg1 isNarrowBand:(char)arg2;
-(oneway void)_requestBarrierWithReply:(/*^block*/id)arg1;
-(oneway void)_barrierWithReply:(/*^block*/id)arg1;
-(oneway void)_clearAssistantInfoForAccountIdentifier:(id)arg1;
-(oneway void)_listInstalledServicesWithReply:(/*^block*/id)arg1;
-(oneway void)_pingServiceForIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)_sendLargeData:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)_performCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)_performTaskCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)_broadcastCommandDictionary:(id)arg1;
-(oneway void)_fetchAppContextWithReply:(/*^block*/id)arg1;
-(oneway void)_refreshAssistantValidation;
-(oneway void)setIsStark:(char)arg1;
-(oneway void)forceAudioSessionActive;
-(oneway void)rollbackClearContext;
-(oneway void)telephonyRequestCompleted;
-(oneway void)recordUIMetrics:(id)arg1;
-(oneway void)setVoiceOverIsActive:(char)arg1;
-(oneway void)preheatWithStyle:(int)arg1;
-(oneway void)updateSpeechOptions:(id)arg1;
-(oneway void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
-(oneway void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2;
-(oneway void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;
-(oneway void)startRequestWithInfo:(id)arg1;
-(oneway void)setApplicationContextForApplicationInfos:(id)arg1;
-(oneway void)didDismissUI;
-(oneway void)cancelRequest;
-(oneway void)setApplicationContext:(id)arg1;
-(oneway void)clearContext;
-(oneway void)rollbackRequest;

@end
