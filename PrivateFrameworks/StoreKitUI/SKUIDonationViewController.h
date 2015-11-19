/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class NSString, SKUIClientContext, SKUIDonationConfiguration, NSOperationQueue, UIViewController;

@interface SKUIDonationViewController : UINavigationController {

	NSString* _charityID;
	SKUIClientContext* _clientContext;
	SKUIDonationConfiguration* _donationConfiguration;
	NSOperationQueue* _operationQueue;
	UIViewController* _placeholderViewController;

}

@property (nonatomic,readonly) NSString * charityIdentifier;                 //@synthesize charityID=_charityID - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_configurationDidLoadWithResult:(char)arg1 error:(id)arg2 ;
-(id)initWithCharityIdentifier:(id)arg1 ;
-(id)_initSKUIDonationViewController;
-(void)_loadDonationConfiguration;
-(NSString *)charityIdentifier;
@end

