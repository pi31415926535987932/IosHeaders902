/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKTableHeaderView, PKLinkedAppView, PKPaymentSetupProduct;

@interface PKPaymentCardUnsupportedViewController : PKPaymentSetupTableViewController {

	PKTableHeaderView* _headerView;
	PKLinkedAppView* _appViewCell;
	PKPaymentSetupProduct* _product;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                                //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_done:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(id)initWithUnsupportedProduct:(id)arg1 context:(int)arg2 delegate:(id)arg3 ;
-(PKPaymentSetupProduct *)product;
-(void)_updateViewsWithProduct:(id)arg1 ;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(unsigned)edgesForExtendedLayout;
@end

