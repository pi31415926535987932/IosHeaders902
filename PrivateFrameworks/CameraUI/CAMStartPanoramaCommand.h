/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaCaptureRequest;

@interface CAMStartPanoramaCommand : CAMCaptureCommand {

	CAMPanoramaCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMPanoramaCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(CAMPanoramaCaptureRequest *)_request;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end

