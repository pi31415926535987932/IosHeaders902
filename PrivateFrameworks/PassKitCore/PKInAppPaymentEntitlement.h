/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {

	NSArray* _merchantIdentifiers;
	char _ignoreMerchantIdentifiers;

}

@property (nonatomic,readonly) char ignoreMerchantIdentifiers;              //@synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers - In the implementation block
@property (nonatomic,readonly) char hasMerchantIdentifiers; 
-(id)initWithToken:(SCD_Struct_PK6)arg1 ;
-(void)dealloc;
-(void)_probeEntitlementsWithToken:(SCD_Struct_PK6)arg1 ;
-(char)hasMerchantIdentifier:(id)arg1 ;
-(char)hasMerchantIdentifiers;
-(char)ignoreMerchantIdentifiers;
@end

