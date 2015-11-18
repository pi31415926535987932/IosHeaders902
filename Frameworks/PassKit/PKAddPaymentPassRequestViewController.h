/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPrivacyFooterViewDelegate.h>

@protocol NSObject, OS_dispatch_source;
@class NSString, PKWeakReference, PKPaymentProvisioningController, PKAddPaymentPassRequestConfiguration, CLInUseAssertion, NSObject, PKAddPaymentPassRequest, PKTableHeaderView, PKPaymentSetupPrivacyFooterView, RemoteUIController, PKPaymentWebService;

@interface PKAddPaymentPassRequestViewController : UITableViewController <PKPaymentSetupPrivacyFooterViewDelegate> {

	NSString* _title;
	NSString* _subtitle;
	int _headerState;
	id<NSObject> _notificationToken;
	PKWeakReference* _weakDelegate;
	PKPaymentProvisioningController* _provisioningController;
	PKAddPaymentPassRequestConfiguration* _configuration;
	CLInUseAssertion* _passbookForegroundAssertion;
	NSObject*<OS_dispatch_source> _datasourceTimeout;
	PKAddPaymentPassRequest* _addRequest;
	char _maxHeaderWidthCalculated;
	float _maxHeaderWidth;
	char _viewAppearing;
	char _preconditionsValidated;
	PKTableHeaderView* _headerView;
	PKPaymentSetupPrivacyFooterView* _privacyView;
	RemoteUIController* _termsController;
	char _hidePrivacy;
	char _singleTarget;
	PKPaymentWebService* _webService;

}

@property (assign,nonatomic) char hidePrivacy;                                                        //@synthesize hidePrivacy=_hidePrivacy - In the implementation block
@property (assign,nonatomic) char singleTarget;                                                       //@synthesize singleTarget=_singleTarget - In the implementation block
@property (assign,nonatomic) id<PKAddPaymentPassRequestViewControllerDelegate> delegate; 
@property (nonatomic,readonly) PKPaymentWebService * webService;                                      //@synthesize webService=_webService - In the implementation block
-(PKPaymentWebService *)webService;
-(void)_handleAdd:(id)arg1 ;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1 ;
-(void)_cancelDatasourceTimeout;
-(void)_applyHeaderState;
-(void)_setNavigationBarEnabled:(char)arg1 ;
-(void)_performNextProvisioningStep;
-(void)_setHeaderState:(int)arg1 ;
-(void)_performPreconditionValidation;
-(void)_performEligibility;
-(void)_fetchCertificates;
-(void)_performTerms:(id)arg1 ;
-(void)_performProvisioning:(id)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)_fetchAddRequestWithCertificatesResponse:(id)arg1 ;
-(void)_showEligibilityIssueForStatus:(int)arg1 learnMoreURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentDisplayableError:(id)arg1 allowEarlyExit:(char)arg2 ;
-(void)_displayTermsForEligibilityResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setupTermsControllerHandlerWithNavigationController:(id)arg1 forCompletion:(/*^block*/id)arg2 ;
-(void)privacyFooterLinkTapped:(id)arg1 ;
-(id)initWithPaymentWebService:(id)arg1 configuration:(id)arg2 ;
-(char)hidePrivacy;
-(void)setHidePrivacy:(char)arg1 ;
-(char)singleTarget;
-(void)setSingleTarget:(char)arg1 ;
-(void)setDelegate:(id<PKAddPaymentPassRequestViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<PKAddPaymentPassRequestViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

