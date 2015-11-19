/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, TRDeviceSetupPeripheralDelegate;
@class _TRUserNotfication, NSString, NSData, NSObject;

@interface TRDeviceSetupPeripheral : NSObject {

	_TRUserNotfication* _activeUserNotification;
	NSString* _authenticationAppleID;
	unsigned _authenticationAttemptCount;
	NSData* _dataToSend;
	NSObject*<OS_dispatch_semaphore> _dataToSendSemaphore;
	NSString* _deviceGUID;
	char _performingSetup;
	char _preparingForSetup;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _userAgent;
	id<TRDeviceSetupPeripheralDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TRDeviceSetupPeripheralDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_didReceiveData:(id)arg1 ;
-(void)setDelegate:(id<TRDeviceSetupPeripheralDelegate>)arg1 ;
-(id)init;
-(id<TRDeviceSetupPeripheralDelegate>)delegate;
-(id)_didTap;
-(void)_didDisconnect;
-(char)_canPerformSetupReturningHasWiFiNetwork:(char*)arg1 ;
-(void)_showUserNotificationForErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_setupDidFailWithError:(id)arg1 ;
-(void)_authenticateWithParameters:(id)arg1 ;
-(void)_setupDidComplete;
-(void)_startAuthentication;
-(char)_showUserNotificationForAppleID:(id)arg1 returningAppleID:(id*)arg2 password:(id*)arg3 ;
-(char)_showUserNotificationForRememberPasswordForAppleID:(id)arg1 ;
-(char)_showUserNotificationForDiagnosticSubmission;
-(void)_sendSetupDataWithAuthInfo:(id)arg1 diagnosticSubmissionEnabled:(char)arg2 rememberPasswordEnabled:(char)arg3 ;
-(void)_showUserNotificationForAuthenticationFailure:(id)arg1 ;
-(char)performSetup;
-(void)cancelPreparingForSetup;
-(void)cancelSetupForStateChange;
-(void)cancelSetupForTimeout;
@end

