/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSArray;

@interface BWAudioSourceNode : BWSourceNode {

	opaqueCMSessionRef _CMSession;
	char _configuresSession;
	char _isAppAudioSession;
	char _mixesWithOthers;
	char _didBeginInterruption;
	SCD_Struct_BW26 _clientAuditToken;
	char _clientAuditTokenIsValid;
	int _clientPID;
	OpaqueCMClockRef _clock;
	opaqueCMFormatDescriptionRef _formatDescription;
	unsigned _pullDuration;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned long _auSubType;
	opaqueCMSimpleQueueRef _renderProcErrorQueue;
	opaqueCMSimpleQueueRef _inactiveBuffersQueue;
	opaqueCMSimpleQueueRef _activeBuffersQueue;
	SCD_Struct_BW2 _nextExpectedSampleTime;
	NSObject*<OS_dispatch_queue> _generateSamplesDispatchQueue;
	char _streamStarted;
	char _streamInterrupted;
	char _levelMeteringEnabled;
	int _audioLevelUnits;
	SCD_Struct_BW2 _latencyOffset;
	char _usesVideoCMSessionAudioMode;
	char _selectsMicForFrontCamera;
	NSObject*<OS_dispatch_source> _silenceTimer;
	long long _auRenderCount;
	long long _silenceFramesGeneratedSinceLastAURenderProc;
	TimestampedAudioBufferList* _currentSilenceBuffer;

}

@property (assign,nonatomic) char levelMeteringEnabled; 
@property (nonatomic,readonly) NSArray * audioLevels; 
@property (assign,nonatomic) char usesVideoCMSessionAudioMode;              //@synthesize usesVideoCMSessionAudioMode=_usesVideoCMSessionAudioMode - In the implementation block
@property (assign,nonatomic) char selectsMicForFrontCamera;                 //@synthesize selectsMicForFrontCamera=_selectsMicForFrontCamera - In the implementation block
@property (assign,nonatomic) char interrupted;                              //@synthesize streamInterrupted=_streamInterrupted - In the implementation block
+(void)initialize;
+(double)_desiredSampleRate;
-(OpaqueCMClockRef)clock;
-(void)dealloc;
-(id)nodeSubType;
-(char)start:(id*)arg1 ;
-(char)stop:(id*)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithCMSession:(opaqueCMSessionRef)arg1 configureSession:(char)arg2 mixWithOthers:(char)arg3 clientToken:(id)arg4 clientPID:(int)arg5 ;
-(void)setLevelMeteringEnabled:(char)arg1 ;
-(void)setUsesVideoCMSessionAudioMode:(char)arg1 ;
-(void)setSelectsMicForFrontCamera:(char)arg1 ;
-(NSArray *)audioLevels;
-(long)_setCMSessionAudioModeAndSelectMic;
-(long)_updatePullFormatDescription;
-(long)_setCMSessionPropertyWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_generateSilenceIfNeeded;
-(long)_setupAudioUnit;
-(long)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 ;
-(long)_selectMicForAudioRoute:(id)arg1 ;
-(long)_getAudioDevicePullFrames:(unsigned*)arg1 ;
-(long)_generatePullBuffers;
-(unsigned)_audioCombinedLatency;
-(opaqueCMSampleBufferRef)_createSampleBufferForTimestampedAudioBufferList:(TimestampedAudioBufferList*)arg1 ;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(char)levelMeteringEnabled;
-(void)_generateSamples;
-(char)usesVideoCMSessionAudioMode;
-(char)selectsMicForFrontCamera;
-(char)interrupted;
-(void)setInterrupted:(char)arg1 ;
@end
