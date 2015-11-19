/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>
#import <libobjc.A.dylib/CNFRegCreateAccountControllerDelegate.h>

@class PSSpecifier, NSString, CNFRegLearnMoreButton;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate> {

	PSSpecifier* _usernameSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _actionGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _createAccountButtonSpecifier;
	NSString* _pendingUsername;
	NSString* _pendingPassword;
	unsigned _signinFailureCount;
	CNFRegLearnMoreButton* _learnMoreButton;
	char _hideLearnMoreButton;
	char _useSystemAccount;

}

@property (nonatomic,copy) NSString * pendingUsername;                 //@synthesize pendingUsername=_pendingUsername - In the implementation block
@property (nonatomic,copy) NSString * pendingPassword;                 //@synthesize pendingPassword=_pendingPassword - In the implementation block
@property (assign,nonatomic) unsigned signinFailureCount;              //@synthesize signinFailureCount=_signinFailureCount - In the implementation block
@property (assign,nonatomic) char hideLearnMoreButton;                 //@synthesize hideLearnMoreButton=_hideLearnMoreButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationDidResume;
-(void)loadView;
-(id)passwordTextField;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)bundle;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(id)specifierList;
-(id)logName;
-(void)_setFieldsEnabled:(char)arg1 animated:(char)arg2 ;
-(void)_setupEventHandlers;
-(void)signInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(void)_launchForgotPasswordUrl;
-(void)_resetSigninFailureCount;
-(void)_incrementSigninFailureCount;
-(void)_showRegistrationFailureWithError:(id)arg1 ;
-(void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)setHideLearnMoreButton:(char)arg1 ;
-(char)hideLearnMoreButton;
-(void)_returnKeyPressed;
-(id)_rightButtonItem;
-(id)validationString;
-(void)_updateControllerState;
-(void)_layoutLearnMoreButton;
-(void)learnMorePressed:(id)arg1 ;
-(void)_resignFirstResponders;
-(id)usernameTextField;
-(NSString *)pendingUsername;
-(NSString *)pendingPassword;
-(id)getUserNameForSpecifier:(id)arg1 ;
-(id)getPasswordForSpecifier:(id)arg1 ;
-(char)passwordIsEmpty;
-(void)setSignInButtonEnabled:(char)arg1 animated:(char)arg2 ;
-(char)usernameIsEmpty;
-(void)setPasswordText:(id)arg1 ;
-(void)__userTappedTextField;
-(void)setUsernameText:(id)arg1 ;
-(void)setPendingUsername:(NSString *)arg1 ;
-(void)setPendingPassword:(NSString *)arg1 ;
-(void)_startTimeout;
-(void)_loadRegionsIfNecessary;
-(void)setUsernameEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setPasswordEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setCreateAccountButtonEnabled:(char)arg1 animated:(char)arg2 ;
-(void)signInTapped:(id)arg1 ;
-(void)_buildCreateAccountButtonSpecifierCache:(id)arg1 ;
-(void)_buildSignInGroupSpecifierCache:(id)arg1 ;
-(void)_buildCredentialSpecifierCache:(id)arg1 ;
-(unsigned)signinFailureCount;
-(void)_showSigninFailureAlert;
-(void)setSigninFailureCount:(unsigned)arg1 ;
-(void)_showNewPasswordNeededSheetWithAppleID:(id)arg1 ;
-(void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2 ;
-(void)_finishSignInWithAccount:(id)arg1 animated:(char)arg2 ;
-(void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)usernameFieldDidBeginEditing:(id)arg1 ;
-(void)passwordFieldDidBeginEditing:(id)arg1 ;
-(void)showCreateAccountController;
-(void)forgotIDButtonTapped;
-(void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1 ;
-(void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2 ;
-(void)_handleTimeout;
-(void)setSpecifier:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)_updateUI;
-(void)cancelButtonTapped;
@end

