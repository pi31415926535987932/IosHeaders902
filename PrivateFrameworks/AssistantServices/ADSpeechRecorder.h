/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <assistantd/AVVoiceControllerRecordDelegate.h>
#import <assistantd/ADPassthroughEndpointerDelegate.h>
#import <assistantd/ADAcousticFingerprinterDelegate.h>
#import <assistantd/AFAudioAnalyzerDelegate.h>
#import <assistantd/ADSpeechCapturing.h>

@protocol ADSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group, ADAudioStackTracking, ADSpeechCapturingPowerDelegate;
@class NSObject, AVVoiceController, AFAudioAnalyzer, ADAudioActivationInfo, ADPassthroughEndpointer, ADAcousticFingerprinter, NSFileHandle, ADAudioFileWriter, NSString;

@interface ADSpeechRecorder : NSObject <AVVoiceControllerRecordDelegate, ADPassthroughEndpointerDelegate, ADAcousticFingerprinterDelegate, AFAudioAnalyzerDelegate, ADSpeechCapturing> {

	id<ADSpeechCapturingDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	AVVoiceController* _voiceController;
	NSObject*<OS_dispatch_source> _powerUpdateTimer;
	int _packetCount;
	int _speechCapturingMode;
	char _usingDictationAlerts;
	NSObject*<OS_dispatch_source> _extendedEndpointTimer;
	AFAudioAnalyzer* _audioAnalyzer;
	ADAudioActivationInfo* _activationInfo;
	ADAudioActivationInfo* _pendingActivationInfo;
	ADPassthroughEndpointer* _passthroughEndpointer;
	AudioStreamBasicDescription _endpointerASBD;
	char _fingerprintingEnabled;
	ADAcousticFingerprinter* _fingerprinter;
	int _audioFileType;
	char _needsAVVCLPCMCallbacks;
	NSFileHandle* _audioFileHandle;
	ADAudioFileWriter* _audioFileWriter;
	ADAudioFileWriter* _audioLogggingFileWriter;
	int _startEvent;
	char _willStartRecording;
	char _didReceiveFirstBuffer;
	char _didDetectStartpoint;
	char _didDetectEndpoint;
	char _didEnterTwoShotMode;
	char _didFakeTwoShotWithAlert;
	char _serverDidRecognizeSpeech;
	char _serverDidEndpoint;
	char _didTimeout;
	char _wasCanceled;
	char _suppressRecordingStoppedAlert;
	char _useAutomaticEndpointing;
	char _isRecordingUsingBTRoute;
	double _twoShotStartTime;
	char _forceSuccessAlertOnStop;
	char _isDriving;
	char _isActivelyRecording;
	char _needsUpdateCurrentContext;
	double _startRecordingTimestamp;
	NSObject*<OS_dispatch_group> _recordingWillStartGroup;
	id<ADAudioStackTracking> _audioStackTracker;
	id<ADSpeechCapturingPowerDelegate> _powerDelegate;

}

@property (assign,nonatomic,__weak) id<ADSpeechCapturingPowerDelegate> powerDelegate;              //@synthesize powerDelegate=_powerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)acousticFingerprinter:(id)arg1 hasFingerprint:(id)arg2 duration:(double)arg3 ;
-(void)cancelSpeechCaptureSuppressingAlert:(char)arg1 ;
-(void)suspendAutomaticEndpointingInRange:(AFTimeRange)arg1 ;
-(void)setIsDriving:(char)arg1 ;
-(id)initWithQueue:(id)arg1 audioStackTracker:(id)arg2 ;
-(void)setPowerDelegate:(id<ADSpeechCapturingPowerDelegate>)arg1 ;
-(void)setSpeechEvent:(int)arg1 timestamp:(double)arg2 deviceIdentifier:(id)arg3 ;
-(void)eagerlyInitializeAudioRecording;
-(void)prepareSpeechCapture;
-(id)recordingInfoForPreheatWithEvent:(int)arg1 ;
-(void)setFingerprintingEnabled:(char)arg1 ;
-(char)startSpeechCaptureWithWillStartHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)stopSpeechCaptureForEvent:(int)arg1 suppressAlert:(char)arg2 ;
-(void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(char)arg2 ;
-(void)forceSuccessAudioAlertOnStop;
-(id)_voiceController;
-(void)_updateRecordBufferDuration;
-(void)_resetVoiceController;
-(void)_cancelExtendedEndpointTimer;
-(void)_setCurrentDeviceContext;
-(void)_updateToPostVoiceIfNecessary;
-(void)_setEndpointStyle:(int)arg1 ;
-(char)_prepareVoiceController;
-(void)_setAlertsIfNeeded;
-(id)_recordingInfoForEvent:(int)arg1 audioAlertStyle:(int)arg2 ;
-(void)_stopRecordingForEndpoint;
-(void)_setSpeechCapturingMode:(int)arg1 ;
-(void)_configurePassthroughEndpointerOnVoiceController:(id)arg1 withEndpointer:(id)arg2 ;
-(void)_scheduleExtendedEndpointTimer;
-(void)_playAudioAlert:(int)arg1 ;
-(void)_setActivationInfo:(id)arg1 ;
-(void)_resetToDefaultAudioContext;
-(void)_voiceControllerDidStartRecording:(id)arg1 successfully:(char)arg2 error:(id)arg3 ;
-(void)_voiceControllerDidStopRecording:(id)arg1 forReason:(int)arg2 errorCodeOverride:(int)arg3 underlyingError:(id)arg4 ;
-(id)_currentRecordingInfo;
-(void)_setupAudioFileWritingForVoiceController:(id)arg1 ;
-(void)_setPendingContextIfNecessary;
-(void)_voiceControllerDidReceiveFirstAudioRecordBufferForHostTime:(unsigned long long)arg1 ;
-(void)_hardEndpointWasDetectedAtTime:(double)arg1 ;
-(char)_shouldUseTwoShotModeForEndpointTime:(double)arg1 ;
-(char)_shouldFakeTwoShotWithAlert;
-(void)_fakeTwoShotUsingAlertAtTime:(double)arg1 ;
-(id)_fingerprinter;
-(void)passthroughEndpointer:(id)arg1 wasConfiguredWithASBD:(AudioStreamBasicDescription*)arg2 frameRate:(unsigned long)arg3 ;
-(void)passthroughEndpointer:(id)arg1 didReceivePCMData:(id)arg2 ;
-(void)updatePower;
-(id<ADSpeechCapturingPowerDelegate>)powerDelegate;
-(void)_stopRecording;
-(void)setDelegate:(id)arg1 ;
-(float)averagePower;
-(void)setUseAutomaticEndpointing:(char)arg1 ;
-(void)preheat;
-(float)peakPower;
-(void)audioAnalyzer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)audioAnalyzer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 ;
-(void)setAudioFileType:(int)arg1 ;
-(void)setAudioFileHandle:(id)arg1 ;
-(void)stopUpdatingPower;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)startUpdatingPower;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(int)arg2 ;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(char)arg2 error:(id)arg3 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3 ;
-(void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 ;
-(void)voiceControllerEndRecordInterruption:(id)arg1 ;
-(void)releaseAudioSession;
-(void)prepareForMode:(int)arg1 ;
@end

