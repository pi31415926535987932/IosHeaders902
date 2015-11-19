/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse {

	NSArray* _certificates;
	NSData* _nonce;
	NSData* _publicKeyHash;
	NSData* _nonceSignature;

}

@property (nonatomic,readonly) NSArray * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,readonly) NSData * nonce;                      //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                  //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * nonceSignature;                 //@synthesize nonceSignature=_nonceSignature - In the implementation block
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(NSData *)nonce;
-(void)setNonceSignature:(NSData *)arg1 ;
-(NSArray *)certificates;
-(NSData *)nonceSignature;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end
