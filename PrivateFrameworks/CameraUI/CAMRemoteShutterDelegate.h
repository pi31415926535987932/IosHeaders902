/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMRemoteShutterDelegate <NSObject>
@required
-(void)remoteShutter:(id)arg1 takePhotoWithCountdown:(unsigned)arg2;
-(void)remoteShutterCancelCountdown:(id)arg1;
-(void)remoteShutter:(id)arg1 setMode:(int)arg2;
-(void)remoteShutter:(id)arg1 focusOn:(CGPoint)arg2;
-(void)remoteShutterBeginVideo:(id)arg1;
-(void)remoteShutterEndVideo:(id)arg1;
-(void)remoteShutter:(id)arg1 setFlashMode:(int)arg2;
-(void)remoteShutter:(id)arg1 setZoomAmount:(float)arg2;
-(void)remoteShutter:(id)arg1 setCaptureDevice:(int)arg2;

@end

