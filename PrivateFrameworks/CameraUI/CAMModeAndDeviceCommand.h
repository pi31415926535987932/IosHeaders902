/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand {

	int __device;
	NSError* __configurationError;
	CAMCaptureModeWithOptions __modeWithOptions;

}

@property (nonatomic,readonly) CAMCaptureModeWithOptions _modeWithOptions;                              //@synthesize _modeWithOptions=__modeWithOptions - In the implementation block
@property (nonatomic,readonly) int _device;                                                             //@synthesize _device=__device - In the implementation block
@property (setter=_setConfigurationError:,nonatomic,retain) NSError * _configurationError;              //@synthesize _configurationError=__configurationError - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(int)arg2 ;
-(int)_device;
-(CAMCaptureModeWithOptions)_modeWithOptions;
-(CAMCaptureModeWithOptions)_introspectedModeWithOptionsFromContext:(id)arg1 ;
-(int)_introspectedDeviceFromContext:(id)arg1 ;
-(char)_isVideoMode:(int)arg1 ;
-(void)_sanitizeDeviceUsingContext:(id)arg1 ;
-(id)_desiredInputsWithContext:(id)arg1 ;
-(id)_existingInputsWithContext:(id)arg1 without:(id)arg2 ;
-(id)_specificFramerateCommandForMode:(CAMCaptureModeWithOptions)arg1 withContext:(id)arg2 ;
-(id)_desiredOutputsWithContext:(id)arg1 ;
-(id)_existingOutputsWithContext:(id)arg1 without:(id)arg2 ;
-(void)_performPostConfigurationSetupForModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(int)arg2 withContext:(id)arg3 ;
-(void)_performPostConfigurationSanityCheckForModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(int)arg2 withContext:(id)arg3 ;
-(NSError *)_configurationError;
-(void)_setConfigurationError:(id)arg1 ;
-(id)initWithModeWithOptions:(CAMCaptureModeWithOptions)arg1 ;
-(id)initWithDevice:(int)arg1 ;
-(char)requiresSessionModification;
-(char)_isStillImageMode:(int)arg1 ;
@end
