/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@protocol CDPRemoteSecretEntryDelegate;
@class CDPDevice, CDPRemoteDeviceSecretValidator, NSString;

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {

	CDPDevice* _device;
	CDPRemoteDeviceSecretValidator* _validator;
	id<CDPRemoteSecretEntryDelegate> _delegate;
	unsigned _validationState;

}

@property (nonatomic,readonly) CDPRemoteDeviceSecretValidator * validator;              //@synthesize validator=_validator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithValidator:(id)arg1 ;
-(CDPRemoteDeviceSecretValidator *)validator;
-(id)title;
-(id)initWithDevice:(id)arg1 validator:(id)arg2 delegate:(id)arg3 ;
-(void)exceededMaximumAttemptsForValidation;
-(void)depletedRemainingAttemptsForRecord;
-(void)showIncorrectRemoteSecretAlert;
-(void)didEnterValidRemoteSecret:(id)arg1 ;
-(char)useProgressiveDelays;
-(char)validatePIN:(id)arg1 ;
-(char)simplePIN;
-(char)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(id)pinInstructionsPrompt;
@end

