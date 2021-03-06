/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface CDPContext : NSObject {

	char _isHSA2Account;
	char _didUseSMSVerification;
	char __useSecureBackupCachedPassphrase;
	NSDictionary* _authenticationResults;
	NSString* _appleID;
	NSString* _password;
	NSString* _passwordEquivToken;
	NSNumber* _dsid;
	NSString* _cachedLocalSecret;
	unsigned _cachedLocalSecretType;

}

@property (nonatomic,copy) NSDictionary * authenticationResults;                 //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                   //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * passwordEquivToken;                        //@synthesize passwordEquivToken=_passwordEquivToken - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                      //@synthesize dsid=_dsid - In the implementation block
@property (assign,nonatomic) char isHSA2Account;                                 //@synthesize isHSA2Account=_isHSA2Account - In the implementation block
@property (assign,nonatomic) char didUseSMSVerification;                         //@synthesize didUseSMSVerification=_didUseSMSVerification - In the implementation block
@property (nonatomic,copy) NSString * cachedLocalSecret;                         //@synthesize cachedLocalSecret=_cachedLocalSecret - In the implementation block
@property (assign,nonatomic) unsigned cachedLocalSecretType;                     //@synthesize cachedLocalSecretType=_cachedLocalSecretType - In the implementation block
@property (assign,nonatomic) char _useSecureBackupCachedPassphrase;              //@synthesize _useSecureBackupCachedPassphrase=__useSecureBackupCachedPassphrase - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSDictionary *)authenticationResults;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(NSString *)passwordEquivToken;
-(void)setPasswordEquivToken:(NSString *)arg1 ;
-(char)isHSA2Account;
-(void)setIsHSA2Account:(char)arg1 ;
-(void)setDidUseSMSVerification:(char)arg1 ;
-(NSString *)cachedLocalSecret;
-(void)setCachedLocalSecret:(NSString *)arg1 ;
-(unsigned)cachedLocalSecretType;
-(void)setCachedLocalSecretType:(unsigned)arg1 ;
-(char)_useSecureBackupCachedPassphrase;
-(void)set_useSecureBackupCachedPassphrase:(char)arg1 ;
-(char)didUseSMSVerification;
-(id)initWithAuthenticationResults:(id)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSNumber *)dsid;
-(NSString *)appleID;
-(void)setDsid:(NSNumber *)arg1 ;
@end

