/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKInAppPaymentSession : PKPaymentSession
+(id)inAppPaymentSessionWithInternalSession:(id)arg1 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 ;
-(id)initWithInternalSession:(id)arg1 ;
-(id)_appletForPaymentApplication:(id)arg1 ;
-(id)_appletWithIdentifier:(id)arg1 ;
@end
