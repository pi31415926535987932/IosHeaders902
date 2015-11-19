/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {

	float __videoZoomFactor;
	float __rate;

}

@property (nonatomic,readonly) float _videoZoomFactor;              //@synthesize _videoZoomFactor=__videoZoomFactor - In the implementation block
@property (nonatomic,readonly) float _rate;                         //@synthesize _rate=__rate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)_videoZoomFactor;
-(float)_rate;
-(id)initWithVideoZoomFactor:(float)arg1 rate:(float)arg2 ;
-(void)executeWithContext:(id)arg1 ;
@end

