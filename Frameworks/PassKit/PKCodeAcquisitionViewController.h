/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PKCaptureDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKCodeAcquisitionDelegate;
@class UINavigationBar, PKCaptureSession, PKReticleView, NSURLConnection, NSMutableData, UILabel, UIProgressView, NSSet, NSString;

@interface PKCodeAcquisitionViewController : UIViewController <PKCaptureDelegate, NSURLConnectionDataDelegate, UIGestureRecognizerDelegate> {

	UINavigationBar* _navBar;
	PKCaptureSession* _captureSession;
	PKReticleView* _reticleView;
	NSURLConnection* _downloadConnection;
	NSMutableData* _downloadData;
	long long _downloadExpectedContentSize;
	UILabel* _captionLabel;
	UIProgressView* _downloadProgressView;
	UILabel* _errorLabel;
	UILabel* _helpLabel;
	NSSet* _supportedBarcodeTypes;
	id<PKCodeAcquisitionDelegate> _delegate;

}

@property (assign,nonatomic) id<PKCodeAcquisitionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureSession:(id)arg1 isRunning:(char)arg2 ;
-(void)_cleanupDownload;
-(void)_handleSingleTap:(id)arg1 ;
-(void)_setCaptureUIState:(int)arg1 animated:(char)arg2 ;
-(void)_restartCaptureSession;
-(void)_handleFoundCode:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 ;
-(void)_handleDownloadedPass:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 errorToDisplay:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<PKCodeAcquisitionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKCodeAcquisitionDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
@end

