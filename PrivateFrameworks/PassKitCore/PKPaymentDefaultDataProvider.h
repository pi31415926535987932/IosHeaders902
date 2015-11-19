/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProvider.h>

@protocol PKPaymentDataProviderDelegate;
@class NSString, PKPaymentService, PKSecureElement;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider> {

	PKPaymentService* _paymentService;
	PKSecureElement* _secureElement;
	id<PKPaymentDataProviderDelegate> delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isDeviceInRestrictedMode; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (assign,nonatomic) id<PKPaymentDataProviderDelegate> delegate; 
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned)arg2 limit:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(char)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(char)isDeviceInRestrictedMode;
-(NSString *)secureElementIdentifier;
-(void)setDelegate:(id<PKPaymentDataProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKPaymentDataProviderDelegate>)delegate;
@end

