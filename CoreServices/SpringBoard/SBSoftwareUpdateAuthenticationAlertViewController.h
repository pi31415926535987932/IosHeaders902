/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPasscodeEntryAlertViewController.h>
#import <SpringBoard/SBPasscodeEntryAlertViewDelegate.h>

@protocol SBPasscodeEntryAlertViewControllerDelegate;
@class SUDocumentation, NSString, UINavigationController;

@interface SBSoftwareUpdateAuthenticationAlertViewController : SBPasscodeEntryAlertViewController <SBPasscodeEntryAlertViewDelegate> {

	/*^block*/id _completionBlock;
	SUDocumentation* _documentation;
	NSString* _passcode;
	UINavigationController* _termsAndConditionsController;
	char _showingTermsAndConditions;
	id<SBPasscodeEntryAlertViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) id completion;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain,readonly) SUDocumentation * documentation;              //@synthesize documentation=_documentation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(char)suppressesBanners;
-(char)suppressesNotificationCenter;
-(char)suppressesControlCenter;
-(char)suppressesSiri;
-(void)setVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendDeactivationResponseFailureIfNecessary;
-(void)_dismissTermsAndConditionsIfNecessaryAnimated:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)_shouldShowPasscodeView;
-(void)_presentTermsAndConditionsOrDismissAfterDelay:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configurePasscodeView:(id)arg1 ;
-(void)_dismissSelf:(char)arg1 ;
-(void)_presentTermsAndConditions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendCompletionResponse:(char)arg1 ;
-(char)passcodeAlertViewShouldShowAutomaticallyWhenVisible:(id)arg1 ;
-(id)initWithDocumentation:(id)arg1 ;
-(void)_authenticationCancelled;
-(void)_authenticationSuccess:(id)arg1 fromMesa:(char)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)deactivate;
-(SUDocumentation *)documentation;
-(void)_termsDisagree;
-(void)_termsAgree;
@end

