/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, VideoCaptureProtocol, AVConferencePreviewDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, VideoAttributes, AVImageQueue;

@interface AVConferencePreviewServer : NSObject {

	int currentWidth;
	int currentHeight;
	int currentFrameRate;
	int previewFrameCount;
	int captureFrameCount;
	int encodedFrameCount;
	NSObject*<OS_dispatch_source> cameraHealthMonitor;
	int pendingWidth;
	int pendingHeight;
	int pendingFrameRate;
	unsigned currentCameraID;
	char firstPreviewFrame;
	NSMutableArray* activeConferences;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	CGSize localExpectedPortraitAspectRatio;
	CGSize localExpectedLandscapeAspectRatio;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerConferenceQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerNotificationQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewServerVariablesQueue;
	NSObject*<VideoCaptureProtocol> avCapture;
	OpaqueVTPixelTransferSessionRef transferSession;
	CVPixelBufferPoolRef bufferPool;
	char resize;
	NSObject*<AVConferencePreviewDelegate> appDelegate;
	double falteredRenderingtimeStamp;
	AVImageQueue* frontQueue;
	AVImageQueue* backQueue;
	int _thermalNotificationToken;
	int _thermalLevel;
	int _newThermalLevel;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewDelegate> appDelegate; 
+(id)AVConferencePreviewServerSingleton;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)stopPreview;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(char)setLocalScreenAttributes:(id)arg1 ;
-(CGSize)localScreenRatioForScreenOrientation:(int)arg1 ;
-(CGSize)localExpectedRatioForScreenOrientation:(int)arg1 ;
-(void)setFrameRatePercentage:(id)arg1 percentage:(double)arg2 ;
-(char)registerForFrames:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 unpausing:(char)arg5 ;
-(char)deregisterForFrames:(id)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(id)localVideoAttributes;
-(char)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(char)arg4 ;
-(char)setLocalVideoAttributes:(id)arg1 ;
-(unsigned)setLocalVideoDestination:(id)arg1 facing:(char)arg2 ;
-(char)isRunningPreview;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)handleAVCaptureError:(long)arg1 error:(id)arg2 ;
-(CVBufferRef)resizeFrame:(CVBufferRef)arg1 ;
-(char)enqueueFrameToQueueFront:(char)arg1 frame:(CVBufferRef)arg2 frameTime:(SCD_Struct_VC12)arg3 ;
-(void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)stopCapture;
-(void)setFrameRatePercentage:(double)arg1 ;
-(void)changeCameraToPendingSettingsWithReset:(char)arg1 ;
-(void)resetCameraToPreviewSettingsForced:(char)arg1 ;
-(void)reconnectClientLayerFront:(char)arg1 ;
-(long)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(char)arg4 ;
-(void)setCurrentFrameRate:(int)arg1 ;
-(void)startPreviewUnpausing:(char)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(char)arg4 ;
-(void)handleVideoCaptureEvent:(id)arg1 ;
-(char)onCaptureFrame:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC12)arg2 preview:(char)arg3 droppedFrames:(int)arg4 isSwitching:(char)arg5 cameraType:(int)arg6 ;
-(CFDictionaryRef)copyCameraColorInfo;
-(char)registerForFrames:(id)arg1 unpausing:(char)arg2 ;
-(char)isConferenceRegisteredForFrames:(id)arg1 ;
-(id)copyLocalVideoAttributes;
-(id)copyLocalScreenAttributesForVideoAttributes:(id)arg1 ;
-(char)setCaptureCamera:(unsigned)arg1 ;
-(unsigned)captureCamera;
-(NSObject*<AVConferencePreviewDelegate>)appDelegate;
-(void)setAppDelegate:(NSObject*<AVConferencePreviewDelegate>)arg1 ;
-(void)pausePreview;
@end

