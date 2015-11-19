/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class NSDictionary, iAP2Session, NSTimer, NSData, NSString;

@interface iAP2AuthenticationController : NSObject {

	BOOL _disableAuthForTestingPref;
	CFDictionaryRef _authInfoDict;
	int _authState;
	int _certClass;
	unsigned char _keyLength;
	NSDictionary* _AuthVersionsSupported;
	iAP2Session* _controlSession;
	NSTimer* _AuthTimer;
	NSData* _pNSDataAuthSerNum;
	NSString* _pNSStrAuthSerNum;
	BOOL _bCertMatchInCache;

}

@property (nonatomic,readonly) int authState;                                     //@synthesize authState=_authState - In the implementation block
@property (nonatomic,readonly) int certClass;                                     //@synthesize certClass=_certClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * AuthVersionsSupported;              //@synthesize AuthVersionsSupported=_AuthVersionsSupported - In the implementation block
@property (nonatomic,readonly) CFDictionaryRef authInfoDict;                      //@synthesize authInfoDict=_authInfoDict - In the implementation block
@property (assign,nonatomic) iAP2Session * controlSession;                        //@synthesize controlSession=_controlSession - In the implementation block
-(const char*)getCertificateAndLength:(unsigned*)arg1 ;
-(int)authState;
-(int)certClass;
-(void)setControlSession:(iAP2Session *)arg1 ;
-(void)startAuthentication:(BOOL)arg1 ;
-(void)shutdownAuthController;
-(void)sendiPodCertificate;
-(void)handleAccessoryCertificate:(const char*)arg1 withLength:(unsigned short)arg2 forAuthType:(unsigned short)arg3 ;
-(void)sendiPodSignature:(const char*)arg1 withLength:(unsigned short)arg2 ;
-(char)verifyAccessoryChallengeResponse:(const char*)arg1 withLength:(unsigned)arg2 ;
-(void)_changeAuthStateAndNotify:(int)arg1 ;
-(void)_sendAuthFailureMessageAndLockoutPort:(id)arg1 ;
-(void)_setCertificate:(const char*)arg1 withLength:(unsigned)arg2 ;
-(char)_verifyCertificateValidity;
-(void)_createNonceAndStoreInDictionary;
-(void)_handleAuthInfoFailure;
-(void)_setChallengeResponseInDictionary:(const char*)arg1 withLength:(unsigned)arg2 ;
-(id)certificateSerial;
-(void)_handleAuthChallengeResponseFailure;
-(void)_setCertOrNonceOrChallengeInternal:(CFStringRef)arg1 withBytes:(const char*)arg2 andLength:(unsigned)arg3 ;
-(BOOL)isFeatureSupportedByCertClass:(int)arg1 ;
-(NSDictionary *)AuthVersionsSupported;
-(iAP2Session *)controlSession;
-(CFDictionaryRef)authInfoDict;
-(void)dealloc;
-(id)init;
@end

