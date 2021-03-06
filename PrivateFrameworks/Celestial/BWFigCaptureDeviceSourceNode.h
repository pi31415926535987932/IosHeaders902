/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class BWFigVideoCaptureDevice, BWNodeOutput, NSObject, NSString;

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	/*^block*/id _videoSBufHandler;
	/*^block*/id _stillImageSBufHandler;
	BWFigVideoCaptureDevice* _captureDevice;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedFacesOutput;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	char _detectedFacesOutputEnabled;
	int _resolvedSensorFormatIndex;
	int _streamSensorFormatIndex;
	unsigned long _sensorPixelFormat;
	unsigned long _streamSensorPixelFormat;
	int _offlineConfigurationSeed;
	int _resolvedOfflineConfigurationSeed;
	SCD_Struct_BW12 _sensorDimensions;
	SCD_Struct_BW12 _minOutputDimensions;
	int _minOutputDimensionsSensorFormatIndex;
	int _sensorFormatIndex;
	float _minFrameRate;
	float _maxFrameRate;
	float _aeMaxGain;
	int _maxIntegrationTimeOverride;
	char _requiresOverscan;
	char _temporalNoiseReductionEnabled;
	char _chromaNoiseReductionEnabled;
	char _automaticallyEnablesLowLightBoostWhenAvailable;
	char _lowLightBoostSupportedForFormat;
	int _motionAttachmentsSource;
	SCD_Struct_BW12 _outputDimensions;
	SCD_Struct_BW12 _streamOutputDimensions;
	SCD_Struct_BW12 _sensorOverscanDimensions;
	char _streamFormatChangeInFlight;
	SCD_Struct_BW12 _streamOutputDimensionsAfterFormatChange;
	unsigned long _streamSensorPixelFormatAfterFormatChange;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
+(void)initialize;
+(id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1 ;
+(int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(SCD_Struct_BW12)arg2 sensorPixelFormat:(unsigned long)arg3 sensorFormatIndex:(int)arg4 ;
-(OpaqueCMClockRef)clock;
-(char)automaticallyEnablesLowLightBoostWhenAvailable;
-(SCD_Struct_BW12)sensorDimensions;
-(void)setChromaNoiseReductionEnabled:(char)arg1 ;
-(void)dealloc;
-(BWFigVideoCaptureDevice *)captureDevice;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(char)arg1 ;
-(float)minFrameRate;
-(float)maxFrameRate;
-(id)nodeSubType;
-(void)setOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(char)start:(id*)arg1 ;
-(char)stop:(id*)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setDetectedFacesOutputEnabled:(char)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setTemporalNoiseReductionEnabled:(char)arg1 ;
-(void)setAeMaxGain:(float)arg1 ;
-(int)maxIntegrationTimeOverride;
-(void)setMaxIntegrationTimeOverride:(int)arg1 ;
-(void)updateOutputRequirements;
-(float)aeMaxGain;
-(void)setSensorPixelFormat:(unsigned long)arg1 ;
-(void)setSensorDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setSensorFormatIndex:(int)arg1 ;
-(void)setRequiresOverscan:(char)arg1 ;
-(void)setLowLightBoostSupportedForFormat:(char)arg1 ;
-(SCD_Struct_BW12)minOutputDimensions;
-(SCD_Struct_BW12)sensorOverscanDimensions;
-(void)willStop;
-(char)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(long)_bringStreamUpToDate;
-(void)_resolveOfflineConfiguration;
-(char)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(char*)arg1 sensorPixelFormatChanged:(char*)arg2 outputDimensionsChanged:(char*)arg3 ;
-(void)_registerForStreamNotifications;
-(void)_unregisterFromStreamNotifications;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
-(void)_bringStreamFormatIndexUpToDate;
-(void)_bringStreamPixelFormatUpToDate;
-(long)_updateStreamOutputDimensions;
-(long)_lockFramerateToMaxSupportedByCurrentSensorFormat;
-(void)_updateMetadataConfigurations;
-(SCD_Struct_BW12)_maxOutputDimensionsForResolvedSensorFormatIndex;
-(unsigned long)sensorPixelFormat;
-(int)sensorFormatIndex;
-(SCD_Struct_BW12)outputDimensions;
-(int)motionAttachmentsSource;
-(char)requiresOverscan;
-(char)temporalNoiseReductionEnabled;
-(char)chromaNoiseReductionEnabled;
-(char)lowLightBoostSupportedForFormat;
-(BWNodeOutput *)stillImageOutput;
@end

