/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {

	int _status;
	NSArray* _requiredPaymentSetupFields;
	NSString* _productIdentifier;
	NSArray* _possibleProducts;
	NSArray* _possibleProductIdentifiers;
	NSURL* _learnMoreURL;

}

@property (nonatomic,readonly) int status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSArray * requiredPaymentSetupFields;              //@synthesize requiredPaymentSetupFields=_requiredPaymentSetupFields - In the implementation block
@property (nonatomic,readonly) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * possibleProducts;                        //@synthesize possibleProducts=_possibleProducts - In the implementation block
@property (nonatomic,readonly) NSArray * possibleProductIdentifiers;              //@synthesize possibleProductIdentifiers=_possibleProductIdentifiers - In the implementation block
@property (nonatomic,readonly) NSURL * learnMoreURL;                              //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
-(NSURL *)learnMoreURL;
-(NSString *)productIdentifier;
-(NSArray *)requiredPaymentSetupFields;
-(NSArray *)possibleProducts;
-(NSArray *)possibleProductIdentifiers;
-(id)initWithProduct:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(int)status;
@end

