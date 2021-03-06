/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {

	NSString* _identifier;
	int _eligibilityStatus;
	int _cardType;
	NSURL* _termsURL;
	NSString* _termsID;
	NSString* _applicationIdentifier;
	NSString* _region;
	NSURL* _learnMoreURL;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int eligibilityStatus;                         //@synthesize eligibilityStatus=_eligibilityStatus - In the implementation block
@property (nonatomic,readonly) int cardType;                                  //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) NSURL * termsURL;                              //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,readonly) NSString * termsID;                            //@synthesize termsID=_termsID - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * region;                             //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSURL * learnMoreURL;                          //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
-(int)eligibilityStatus;
-(NSURL *)learnMoreURL;
-(NSURL *)termsURL;
-(NSString *)termsID;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)applicationIdentifier;
-(id)initWithData:(id)arg1 ;
-(NSString *)region;
-(int)cardType;
@end

