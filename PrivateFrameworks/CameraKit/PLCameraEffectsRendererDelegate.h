/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCameraEffectsRendererDelegate <NSObject>
@required
-(void)cameraEffectsRendererDidStartPreview:(id)arg1;
-(void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(char)arg2;
-(void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(char)arg2;
-(void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(char)arg2;
-(void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(char)arg2 animated:(char)arg3;
-(void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(char)arg2;

@end

