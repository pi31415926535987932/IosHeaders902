/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencesUI/PSUIPasscodeLockController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/BiometricKitUIEnrollResultDelegate.h>
#import <libobjc.A.dylib/BiometricKitDelegate.h>

@protocol OS_dispatch_queue;
@class BiometricKit, NSObject, PSEnrollContainerViewController, UIPopoverController, NSString;

@interface PSUITouchIDPasscodeController : PSUIPasscodeLockController <UIPopoverControllerDelegate, BiometricKitUIEnrollResultDelegate, BiometricKitDelegate> {

	char _currentlyEnablingTouchIDForPurchases;
	int _storeState;
	BiometricKit* _highlightMatcher;
	NSObject*<OS_dispatch_queue> _highlightQueue;
	PSEnrollContainerViewController* _enrollController;
	/*^block*/id _modalFlowSuccessCompletion;
	/*^block*/id _modalFlowCancelCompletion;
	UIPopoverController* _enrollmentPopoverController;

}

@property (assign,nonatomic) int storeState;                                                         //@synthesize storeState=_storeState - In the implementation block
@property (nonatomic,retain) BiometricKit * highlightMatcher;                                        //@synthesize highlightMatcher=_highlightMatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> highlightQueue;                            //@synthesize highlightQueue=_highlightQueue - In the implementation block
@property (assign,nonatomic,__weak) PSEnrollContainerViewController * enrollController;              //@synthesize enrollController=_enrollController - In the implementation block
@property (nonatomic,copy) id modalFlowSuccessCompletion;                                            //@synthesize modalFlowSuccessCompletion=_modalFlowSuccessCompletion - In the implementation block
@property (nonatomic,copy) id modalFlowCancelCompletion;                                             //@synthesize modalFlowCancelCompletion=_modalFlowCancelCompletion - In the implementation block
@property (assign,nonatomic) char currentlyEnablingTouchIDForPurchases;                              //@synthesize currentlyEnablingTouchIDForPurchases=_currentlyEnablingTouchIDForPurchases - In the implementation block
@property (nonatomic,retain) UIPopoverController * enrollmentPopoverController;                      //@synthesize enrollmentPopoverController=_enrollmentPopoverController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldPresentEnrollmentInPopover;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)didUnlock;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)didCancelEnteringPIN;
-(PSEnrollContainerViewController *)enrollController;
-(void)setEnrollController:(PSEnrollContainerViewController *)arg1 ;
-(void)backgrounded:(id)arg1 ;
-(void)setupTouchIDLogoHeader;
-(void)setHighlightQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)touchIDSwitchSpecifiers;
-(id)fingerprintSpecifiers;
-(void)setModalFlowSuccessCompletion:(id)arg1 ;
-(void)addEnrollment:(id)arg1 ;
-(void)presentPasscodePaneFromSpecifier:(id)arg1 ;
-(char)hasPasscodeAndFingerprints;
-(UIPopoverController *)enrollmentPopoverController;
-(void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(char)shouldRestrictFeaturesRequiringEnrollment;
-(char)isTouchIDUnlockRestricted;
-(void)setStoreState:(int)arg1 ;
-(char)currentlyEnablingTouchIDForPurchases;
-(int)storeState;
-(void)setCurrentlyEnablingTouchIDForPurchases:(char)arg1 ;
-(id)_authorizationToken;
-(void)updateStoreBiometricsState;
-(char)isTouchIDForPurchasesRestricted;
-(char)isTouchIDForStockholmRestricted;
-(char)isFingerprintEditingAllowed;
-(char)isEnrollmentAvailable;
-(void)setTouchIDUnlockEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDUnlockEnabled:(id)arg1 ;
-(void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForPurchasesEnabled:(id)arg1 ;
-(void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForStockholmEnabled:(id)arg1 ;
-(id)_fingerprintSpecifierForIdentity:(id)arg1 ;
-(BiometricKit *)highlightMatcher;
-(void)setHighlightMatcher:(BiometricKit *)arg1 ;
-(void)_setupMatching;
-(void)_cancelMatching;
-(void)cancelModalFlow;
-(void)highlightFingerprintSpecifier:(id)arg1 ;
-(void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)highlightQueue;
-(void)setEnrollmentPopoverController:(UIPopoverController *)arg1 ;
-(void)_presentPopoverForContentViewController:(id)arg1 ;
-(id)_passcodeControllerForSpecifier:(id)arg1 ;
-(void)enrollmentCompletedForIdentity:(id)arg1 ;
-(void)setModalFlowCancelCompletion:(id)arg1 ;
-(void)completeModalFlow;
-(void)pushPasscodePane;
-(void)hideCancelButton;
-(id)modalFlowSuccessCompletion;
-(void)_popEnrollmentController;
-(id)modalFlowCancelCompletion;
-(id)_fingerprintSpecifierAtIndexPath:(id)arg1 ;
-(void)updateAfterFingerprintChanges;
-(void)updateTouchIDUnlockSpecifier;
-(void)updateTouchIDForPurchasesSpecifier;
-(void)updateTouchIDForStockholmSpecifier;
-(void)updateAddFingerprintSpecifier;
-(void)enrollResult:(int)arg1 identity:(id)arg2 ;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
@end

