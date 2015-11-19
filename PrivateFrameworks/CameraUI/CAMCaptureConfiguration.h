/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMCaptureConfiguration : NSObject {

	int _mode;
	int _device;
	int _flashMode;
	int _torchMode;
	int _HDRMode;
	int _timerDuration;
	int _irisMode;
	int _photoModeEffectFilterType;
	int _squareModeEffectFilterType;

}

@property (nonatomic,readonly) int mode;                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) int flashMode;                               //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) int torchMode;                               //@synthesize torchMode=_torchMode - In the implementation block
@property (nonatomic,readonly) int HDRMode;                                 //@synthesize HDRMode=_HDRMode - In the implementation block
@property (nonatomic,readonly) int timerDuration;                           //@synthesize timerDuration=_timerDuration - In the implementation block
@property (nonatomic,readonly) int irisMode;                                //@synthesize irisMode=_irisMode - In the implementation block
@property (nonatomic,readonly) int photoModeEffectFilterType;               //@synthesize photoModeEffectFilterType=_photoModeEffectFilterType - In the implementation block
@property (nonatomic,readonly) int squareModeEffectFilterType;              //@synthesize squareModeEffectFilterType=_squareModeEffectFilterType - In the implementation block
+(int)audioConfigurationForMode:(int)arg1 device:(int)arg2 ;
-(int)mode;
-(int)flashMode;
-(int)irisMode;
-(int)device;
-(int)torchMode;
-(int)HDRMode;
-(int)timerDuration;
-(int)photoModeEffectFilterType;
-(int)squareModeEffectFilterType;
-(id)initWithCaptureMode:(int)arg1 captureDevice:(int)arg2 flashMode:(int)arg3 torchMode:(int)arg4 HDRMode:(int)arg5 irisMode:(int)arg6 timerDuration:(int)arg7 photoModeEffectFilterType:(int)arg8 squareModeEffectFilterType:(int)arg9 ;
-(CAMCaptureModeWithOptions)currentModeWithOptions;
@end
