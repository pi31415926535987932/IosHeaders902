/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <CoreRecognition/CRCameraReader.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>

@protocol CRCodeRedeemerControllerDelegate;
@class NSString;

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate> {

	id<CRCodeRedeemerControllerDelegate> _delegate;

}

@property (__weak) id<CRCodeRedeemerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCaptureMode) char captureMode; 
@property (assign) unsigned captureCount; 
@property (assign) double sessionTimeout; 
@property (assign) int whiteBalanceMode; 
@property (assign) int focusMode; 
@property (assign) int exposureMode; 
@property (assign) int torchMode; 
@property (copy) NSString * cameraMode; 
@property (assign) int cameraPosition; 
@property (assign) char showDiagnosticHUD; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned)arg2 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned)arg2 roi:(CGRect)arg3 ;
+(unsigned)isCRCodeRedeemerAvailable;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReaderDidDisplayMessage:(id)arg1 ;
-(void)cameraReaderDidFindTarget:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)setDelegate:(id<CRCodeRedeemerControllerDelegate>)arg1 ;
-(id)init;
-(id<CRCodeRedeemerControllerDelegate>)delegate;
-(void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned)arg3 duration:(double)arg4 ;
@end

