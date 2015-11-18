/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEProfilePayloadBase.h>

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {

	char _userNameRequired;
	char _passwordRequired;
	char _proxyUserNameRequired;
	char _proxyPasswordRequired;
	char _sharedSecretRequired;
	char _pinRequired;
	NSString* _userName;
	NSString* _password;
	NSString* _proxyUserName;
	NSString* _proxyPassword;
	NSString* _sharedSecret;
	NSString* _pin;

}

@property (assign,nonatomic) char userNameRequired;                   //@synthesize userNameRequired=_userNameRequired - In the implementation block
@property (assign,nonatomic) char passwordRequired;                   //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (assign,nonatomic) char proxyUserNameRequired;              //@synthesize proxyUserNameRequired=_proxyUserNameRequired - In the implementation block
@property (assign,nonatomic) char proxyPasswordRequired;              //@synthesize proxyPasswordRequired=_proxyPasswordRequired - In the implementation block
@property (assign,nonatomic) char sharedSecretRequired;               //@synthesize sharedSecretRequired=_sharedSecretRequired - In the implementation block
@property (assign,nonatomic) char pinRequired;                        //@synthesize pinRequired=_pinRequired - In the implementation block
@property (nonatomic,copy) NSString * userName;                       //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSString * password;                       //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * proxyUserName;                  //@synthesize proxyUserName=_proxyUserName - In the implementation block
@property (nonatomic,copy) NSString * proxyPassword;                  //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,copy) NSString * sharedSecret;                   //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (nonatomic,copy) NSString * pin;                            //@synthesize pin=_pin - In the implementation block
-(NSString *)userName;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)getPreprocessedPayloadContents;
-(char)setPostprocessedPayloadContents:(id)arg1 ;
-(NSString *)proxyUserName;
-(NSString *)sharedSecret;
-(void)extractPayloadContentsHTTPProxy:(id)arg1 ;
-(void)extractPayloadContentsUserNamePassword:(id)arg1 ;
-(void)extractPayloadContentsSharedSecret:(id)arg1 ;
-(void)extractPayloadContentsPIN:(id)arg1 ;
-(void)extractPayloadContents:(id)arg1 ;
-(char)userNameRequired;
-(void)setUserNameRequired:(char)arg1 ;
-(char)proxyUserNameRequired;
-(void)setProxyUserNameRequired:(char)arg1 ;
-(char)proxyPasswordRequired;
-(void)setProxyPasswordRequired:(char)arg1 ;
-(char)sharedSecretRequired;
-(void)setSharedSecretRequired:(char)arg1 ;
-(void)setPinRequired:(char)arg1 ;
-(void)setProxyUserName:(NSString *)arg1 ;
-(void)setSharedSecret:(NSString *)arg1 ;
-(void)setPin:(NSString *)arg1 ;
-(char)pinRequired;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(NSString *)pin;
-(NSString *)proxyPassword;
-(char)passwordRequired;
-(void)setPasswordRequired:(char)arg1 ;
-(void)setProxyPassword:(NSString *)arg1 ;
-(id)validatePayload;
-(void)setUserName:(NSString *)arg1 ;
@end

