/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OS_dispatch_queue, CKVideoRecorderDelegate;
@class AVCaptureDevice, NSObject, AVCaptureVideoPreviewLayer, NSURL, AVCaptureSession, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, NSString;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {

	int _currentDevice;
	char _previousStatusBarHidden;
	AVCaptureDevice* _frontFacingCamera;
	AVCaptureDevice* _rearFacingCamera;
	NSObject*<OS_dispatch_queue> _avCaptureSessionDispatchQueue;
	char _canceled;
	AVCaptureVideoPreviewLayer* _captureVideoPreviewLayer;
	id<CKVideoRecorderDelegate> _delegate;
	NSURL* _outputFileURL;
	AVCaptureSession* _session;
	AVCaptureDeviceInput* _rearVideoInput;
	AVCaptureDeviceInput* _frontVideoInput;
	AVCaptureDeviceInput* _audioInput;
	AVCaptureMovieFileOutput* _videoOutput;
	AVCaptureStillImageOutput* _stillImageOutput;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer;              //@synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer - In the implementation block
@property (assign,nonatomic) int cameraDevice; 
@property (assign,nonatomic) id<CKVideoRecorderDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                                //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,retain) AVCaptureSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * rearVideoInput;                              //@synthesize rearVideoInput=_rearVideoInput - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * frontVideoInput;                             //@synthesize frontVideoInput=_frontVideoInput - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * audioInput;                                  //@synthesize audioInput=_audioInput - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * videoOutput;                             //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,retain) AVCaptureStillImageOutput * stillImageOutput;                       //@synthesize stillImageOutput=_stillImageOutput - In the implementation block
@property (assign,nonatomic) char canceled;                                                      //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVCaptureSession *)session;
-(void)cancel;
-(void)setDelegate:(id<CKVideoRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CKVideoRecorderDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)takePicture;
-(char)startVideoCapture;
-(void)stopVideoCapture;
-(int)cameraDevice;
-(void)setCameraDevice:(int)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)setCaptureVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(id)_configureFrontVideoInput;
-(id)_configureRearVideoInput;
-(void)setVideoOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(void)setStillImageOutput:(AVCaptureStillImageOutput *)arg1 ;
-(AVCaptureVideoPreviewLayer *)captureVideoPreviewLayer;
-(id)audioDevice;
-(void)setAudioInput:(AVCaptureDeviceInput *)arg1 ;
-(AVCaptureMovieFileOutput *)videoOutput;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(AVCaptureStillImageOutput *)stillImageOutput;
-(id)_cameraWithPosition:(int)arg1 ;
-(void)setupCamera:(id)arg1 ;
-(id)frontFacingCamera;
-(void)setFrontVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(id)rearFacingCamera;
-(void)setRearVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(AVCaptureDeviceInput *)frontVideoInput;
-(AVCaptureDeviceInput *)rearVideoInput;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(AVCaptureDeviceInput *)audioInput;
-(char)canceled;
@end

