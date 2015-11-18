/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKAuthenticatorDelegate.h>
#import <libobjc.A.dylib/PKPassPaymentSummaryViewDelegate.h>
#import <libobjc.A.dylib/PKPassPaymentPayStateViewDelegate.h>
#import <libobjc.A.dylib/PKPassPaymentApplicationViewDelegate.h>
#import <libobjc.A.dylib/PKContactlessInterfaceSessionDelegate.h>
#import <libobjc.A.dylib/PKPaymentConfirmationAlertControllerDelegate.h>

@class PKPaymentService, PKAuthenticator, PKContactlessInterfaceSession, PKPassPaymentPayStateView, UIView, PKPassLibrary, PKPassPaymentSummaryView, PKPassPaymentApplicationView, PKPassValueAddedServiceInfoView, UIButton, NSString, NSMutableArray, PKWeakReference, PKPaymentConfirmationAlertController, NSData;

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentSummaryViewDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKPaymentConfirmationAlertControllerDelegate> {

	PKPaymentService* _paymentService;
	PKAuthenticator* _authenticator;
	PKContactlessInterfaceSession* _contactlessInterfaceSession;
	PKPassPaymentPayStateView* _payStateView;
	UIView* _summaryView;
	PKPassLibrary* _passLibrary;
	PKPassPaymentSummaryView* _paymentSummaryView;
	PKPassPaymentApplicationView* _applicationsView;
	PKPassValueAddedServiceInfoView* _valueAddedServiceInfoView;
	UIButton* _actionButton;
	NSString* _pendingPayStateTextOverride;
	NSString* _secureElementIdentifier;
	unsigned _payStateTransitionCounter;
	int _pendingPayState;
	int _currentPayState;
	unsigned _authenticatorState;
	char _authenticating;
	char _recognizing;
	char _returnToSummaryOnFingerOff;
	char _needsConfirmation;
	char _transitioning;
	NSMutableArray* _transitionCompletionHandlers;
	char _waitingForGlyphView;
	char _presentingPasscode;
	char _requiresPasscodeDismissal;
	PKWeakReference* _passcodePresenterVC;
	char _inBackground;
	unsigned _deactivationReasons;
	char _isVisible;
	char _shouldShowApplications;
	char _enhancedContrast;
	char _valueAddedServiceInfoViewHidden;
	char _waitingForPasses;
	PKPaymentConfirmationAlertController* _confirmationAlertController;
	NSData* _stashedAuthenticationCredential;
	int _style;
	NSMutableArray* _whitelistedValueAddedPasses;
	NSMutableArray* _greylistedValueAddedPasses;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(char)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)didCancelConfirmationAlert;
-(void)paymentServiceReceivedInterruption;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(char)arg2 ;
-(void)_executeTransitionCompletionHandlers:(char)arg1 ;
-(char)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(char)arg1 ;
-(void)willBecomeHiddenAnimated:(char)arg1 ;
-(void)didBecomeHiddenAnimated:(char)arg1 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(char)arg2 ;
-(void)authenticatorWillRestartEvaluation:(id)arg1 ;
-(void)authenticatorDidEncounterFingerOn:(id)arg1 ;
-(void)authenticatorDidEncounterFingerOff:(id)arg1 ;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1 ;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPasscodeRemoteViewController;
-(void)summaryView:(id)arg1 didDeleteMessage:(id)arg2 ;
-(void)_configureForStyle:(int)arg1 context:(id)arg2 ;
-(void)_handleEnterForegroundNotification:(id)arg1 ;
-(void)_handleEnterBackgroundNotification:(id)arg1 ;
-(void)_handleAddDeactivationReasonNotification:(id)arg1 ;
-(void)_handleRemoveDeactivationReasonNotification:(id)arg1 ;
-(void)_transitionViewsAnimated:(char)arg1 ;
-(void)_endContactlessPaymentSession;
-(void)_layoutPaymentSubviews;
-(void)_layoutValueAddedServiceSubviews;
-(float)_valueAddedServiceInfoViewTopMargin;
-(void)_resetToIdleState;
-(void)_endPaymentAuthorization;
-(void)_applyPayState:(int)arg1 ;
-(char)_restartPaymentAuthorization;
-(void)_activateForPayment;
-(void)_beginPaymentAuthorization;
-(void)_endFingerprintAnimationWithSuccess:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)_authenticationAllowed;
-(void)_startFingerprintAnimation;
-(void)_didPerformConfirmation;
-(void)_endFingerprintAnimationWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)_showSummaryState;
-(void)_applyPayState:(int)arg1 withTextOverride:(id)arg2 ;
-(void)_lookupLatestTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)_setValueAddedServiceInfoViewHidden:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_resetToIdleStateWhileIgnoringField:(char)arg1 ;
-(void)_applyPayState:(int)arg1 withTextOverride:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_processValueAddedServiceTransactions:(id)arg1 forPasses:(id)arg2 paymentTransaction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_processPaymentTransaction:(id)arg1 forPaymentPass:(id)arg2 paymentApplication:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_resetToIdleStateAfterDelay:(double)arg1 ;
-(void)_setValueAddedServicePasses:(id)arg1 ;
-(char)_hasValueAddedServicePasses;
-(void)_promoteToAuthorizedStateIfPossible;
-(char)_isForegroundActiveWithReasons:(unsigned)arg1 ;
-(void)_beginPaymentAuthorizationWithImmediatePasscode:(char)arg1 ;
-(void)_updateAuthenticatorState;
-(char)_canAuthenticateWithTouchID;
-(char)_isDemoMode;
-(void)_performAuthentication;
-(char)_canAuthenticateWithPasscode;
-(void)_beginPasscodeOnlyAuthentication;
-(void)_beginSummaryAuthenticationIfNecessary;
-(void)_presentConfirmationAlertWithMethod:(int)arg1 forPass:(id)arg2 ;
-(char)_authorizeForTransactionWithCredential:(id)arg1 ;
-(void)_performConfirmation;
-(void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(char)arg2 ;
-(void)_lookupLatestMessageWithCompletion:(/*^block*/id)arg1 ;
-(char)_isLifecycleNotificationRelevant:(id)arg1 ;
-(void)_applyLatestTransactionAndMessageToSummaryView;
-(id)_buttonForState:(int)arg1 ;
-(char)_isDeactivatedWithReasons:(unsigned)arg1 ;
-(char)_isInBackgroundWithReasons:(unsigned)arg1 ;
-(void)_configureForPaymentWithPaymentPass:(id)arg1 context:(id)arg2 ;
-(void)_configureForValueAddedServiceWithPass:(id)arg1 context:(id)arg2 ;
-(void)_updateApplicationsView;
-(void)_emphasizeStateIfPossible:(int)arg1 withTextOverride:(id)arg2 ;
-(void)_transitionToState:(int)arg1 withTextOverride:(id)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_emphasisButtonForState:(int)arg1 ;
-(void)_dismissPile;
-(void)_addTransitionCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setValueAddedServiceInfoViewHidden:(char)arg1 ;
-(void)_endTransition:(char)arg1 ;
-(id)_passcodeButtonTitle;
-(void)_passcodeAuthenticationButtonPressed:(id)arg1 ;
-(id)_filledButtonWithTitle:(id)arg1 alignment:(int)arg2 action:(SEL)arg3 ;
-(id)_preArmButtonTitle;
-(void)_prearmButtonPressed:(id)arg1 ;
-(id)_buttonWithTitle:(id)arg1 alignment:(int)arg2 action:(SEL)arg3 ;
-(void)_passcodeFallbackButtonPressed:(id)arg1 ;
-(void)paymentApplicationView:(id)arg1 didSelectApplication:(id)arg2 ;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 ;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSession:(id)arg1 didGeneratePaymentTransaction:(id)arg2 forPaymentApplication:(id)arg3 paymentPass:(id)arg4 andValueAddedServiceTransactions:(id)arg5 forValueAddedServicePasses:(id)arg6 ;
-(void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1 ;
-(id)initWithStyle:(int)arg1 pass:(id)arg2 context:(id)arg3 paymentSession:(id)arg4 ;
-(void)_applyPayState:(int)arg1 afterDelay:(double)arg2 ;
-(char)_passContainsPaymentApplication:(id)arg1 ;
-(char)_valueAddedServiceViewHidden;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

