/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PKPaymentRegistrationUtilities : NSObject
+(void)registerAndRetrieveCardsWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)registrationIsSupportedInCurrentRegionWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_retrieveRemoteCredentialsWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_checkEligibilityForCredential:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_checkRequirementsForCredential:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

