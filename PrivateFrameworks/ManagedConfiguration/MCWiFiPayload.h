/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary, NSArray, NSNumber;

@interface MCWiFiPayload : MCPayload {

	char _isHidden;
	char _isWEP;
	char _isWPA;
	char _passwordRequired;
	char _usernameRequired;
	char _autoJoin;
	char _proxyPACFallbackAllowed;
	char _isHotspot;
	char _serviceProviderRoamingEnabled;
	NSString* _ssid;
	NSString* _encryptionType;
	NSDictionary* _eapClientConfig;
	NSString* _password;
	NSString* _username;
	NSString* _certificateUUID;
	NSArray* _payloadCertificateAnchorUUID;
	int _proxyType;
	NSString* _proxyServer;
	NSNumber* _proxyServerPort;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPACURLString;
	NSString* _credentialUUID;
	NSNumber* _priority;
	NSString* _domainName;
	NSString* _HESSID;
	NSArray* _roamingConsortiumOIs;
	NSArray* _NAIRealmNames;
	NSArray* _MCCAndMNCs;
	NSString* _displayedOperatorName;
	NSNumber* _isHiddenNum;
	NSNumber* _autoJoinNum;
	NSNumber* _proxyPACFallbackAllowedNum;
	NSNumber* _isHotspotNum;
	NSNumber* _serviceProviderRoamingEnabledNum;

}

@property (nonatomic,retain) NSString * ssid;                                                                        //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) char isHidden;                                                                          //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,retain) NSString * encryptionType;                                                              //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign,nonatomic) char isWEP;                                                                             //@synthesize isWEP=_isWEP - In the implementation block
@property (assign,nonatomic) char isWPA;                                                                             //@synthesize isWPA=_isWPA - In the implementation block
@property (nonatomic,retain) NSDictionary * eapClientConfig;                                                         //@synthesize eapClientConfig=_eapClientConfig - In the implementation block
@property (assign,nonatomic) char passwordRequired;                                                                  //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (nonatomic,retain) NSString * password;                                                                    //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) char usernameRequired;                                                                  //@synthesize usernameRequired=_usernameRequired - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                    //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) char autoJoin;                                                                          //@synthesize autoJoin=_autoJoin - In the implementation block
@property (nonatomic,retain) NSString * certificateUUID;                                                             //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,retain) NSArray * payloadCertificateAnchorUUID;                                                 //@synthesize payloadCertificateAnchorUUID=_payloadCertificateAnchorUUID - In the implementation block
@property (assign,nonatomic) int proxyType;                                                                          //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                                                                 //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyServerPort;                                                             //@synthesize proxyServerPort=_proxyServerPort - In the implementation block
@property (nonatomic,retain) NSString * proxyUsername;                                                               //@synthesize proxyUsername=_proxyUsername - In the implementation block
@property (nonatomic,retain) NSString * proxyPassword;                                                               //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,retain) NSString * proxyPACURLString;                                                           //@synthesize proxyPACURLString=_proxyPACURLString - In the implementation block
@property (assign,nonatomic) char proxyPACFallbackAllowed;                                                           //@synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed - In the implementation block
@property (nonatomic,retain) NSString * credentialUUID;                                                              //@synthesize credentialUUID=_credentialUUID - In the implementation block
@property (assign,nonatomic) char isHotspot;                                                                         //@synthesize isHotspot=_isHotspot - In the implementation block
@property (nonatomic,retain) NSNumber * priority;                                                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSString * domainName;                                                                  //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,retain) NSString * HESSID;                                                                      //@synthesize HESSID=_HESSID - In the implementation block
@property (assign,getter=isServiceProviderRoamingEnabled,nonatomic) char serviceProviderRoamingEnabled;              //@synthesize serviceProviderRoamingEnabled=_serviceProviderRoamingEnabled - In the implementation block
@property (nonatomic,retain) NSArray * roamingConsortiumOIs;                                                         //@synthesize roamingConsortiumOIs=_roamingConsortiumOIs - In the implementation block
@property (nonatomic,retain) NSArray * NAIRealmNames;                                                                //@synthesize NAIRealmNames=_NAIRealmNames - In the implementation block
@property (nonatomic,retain) NSArray * MCCAndMNCs;                                                                   //@synthesize MCCAndMNCs=_MCCAndMNCs - In the implementation block
@property (nonatomic,retain) NSString * displayedOperatorName;                                                       //@synthesize displayedOperatorName=_displayedOperatorName - In the implementation block
@property (nonatomic,retain) NSNumber * isHiddenNum;                                                                 //@synthesize isHiddenNum=_isHiddenNum - In the implementation block
@property (nonatomic,retain) NSNumber * autoJoinNum;                                                                 //@synthesize autoJoinNum=_autoJoinNum - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPACFallbackAllowedNum;                                                  //@synthesize proxyPACFallbackAllowedNum=_proxyPACFallbackAllowedNum - In the implementation block
@property (nonatomic,retain) NSNumber * isHotspotNum;                                                                //@synthesize isHotspotNum=_isHotspotNum - In the implementation block
@property (nonatomic,retain) NSNumber * serviceProviderRoamingEnabledNum;                                            //@synthesize serviceProviderRoamingEnabledNum=_serviceProviderRoamingEnabledNum - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(char)isHidden;
-(id)description;
-(NSNumber *)priority;
-(void)setPriority:(NSNumber *)arg1 ;
-(void)setIsHidden:(char)arg1 ;
-(id)subtitle2Label;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)installationWarnings;
-(id)subtitle2Description;
-(NSString *)proxyServer;
-(void)setProxyServer:(NSString *)arg1 ;
-(char)_eapConfigIsValid:(id)arg1 error:(id*)arg2 ;
-(id)_eapUsernameFromConfig:(id)arg1 isRequired:(char*)arg2 ;
-(id)_eapPasswordFromConfig:(id)arg1 isRequired:(char*)arg2 ;
-(void)setEapClientConfig:(NSDictionary *)arg1 ;
-(void)setProxyType:(int)arg1 ;
-(char)isHotspot;
-(NSArray *)roamingConsortiumOIs;
-(void)setRoamingConsortiumOIs:(NSArray *)arg1 ;
-(NSArray *)NAIRealmNames;
-(void)setNAIRealmNames:(NSArray *)arg1 ;
-(NSArray *)MCCAndMNCs;
-(void)setMCCAndMNCs:(NSArray *)arg1 ;
-(NSString *)HESSID;
-(char)isServiceProviderRoamingEnabled;
-(NSString *)displayedOperatorName;
-(id)_localizedEncryptionTypeString;
-(NSNumber *)isHiddenNum;
-(NSNumber *)autoJoinNum;
-(NSDictionary *)eapClientConfig;
-(NSNumber *)proxyServerPort;
-(NSString *)proxyUsername;
-(NSString *)proxyPassword;
-(NSString *)proxyPACURLString;
-(char)proxyPACFallbackAllowed;
-(char)_isEAPSIMConfig:(id)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(char)isWEP;
-(void)setIsWEP:(char)arg1 ;
-(char)isWPA;
-(void)setIsWPA:(char)arg1 ;
-(char)passwordRequired;
-(void)setPasswordRequired:(char)arg1 ;
-(char)usernameRequired;
-(void)setUsernameRequired:(char)arg1 ;
-(char)autoJoin;
-(void)setAutoJoin:(char)arg1 ;
-(NSString *)certificateUUID;
-(void)setCertificateUUID:(NSString *)arg1 ;
-(NSArray *)payloadCertificateAnchorUUID;
-(void)setPayloadCertificateAnchorUUID:(NSArray *)arg1 ;
-(void)setProxyServerPort:(NSNumber *)arg1 ;
-(void)setProxyUsername:(NSString *)arg1 ;
-(void)setProxyPassword:(NSString *)arg1 ;
-(void)setProxyPACURLString:(NSString *)arg1 ;
-(void)setProxyPACFallbackAllowed:(char)arg1 ;
-(NSString *)credentialUUID;
-(void)setCredentialUUID:(NSString *)arg1 ;
-(void)setIsHotspot:(char)arg1 ;
-(void)setHESSID:(NSString *)arg1 ;
-(void)setServiceProviderRoamingEnabled:(char)arg1 ;
-(void)setDisplayedOperatorName:(NSString *)arg1 ;
-(void)setIsHiddenNum:(NSNumber *)arg1 ;
-(void)setAutoJoinNum:(NSNumber *)arg1 ;
-(NSNumber *)proxyPACFallbackAllowedNum;
-(void)setProxyPACFallbackAllowedNum:(NSNumber *)arg1 ;
-(NSNumber *)isHotspotNum;
-(void)setIsHotspotNum:(NSNumber *)arg1 ;
-(NSNumber *)serviceProviderRoamingEnabledNum;
-(void)setServiceProviderRoamingEnabledNum:(NSNumber *)arg1 ;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(int)proxyType;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setEncryptionType:(NSString *)arg1 ;
-(NSString *)encryptionType;
-(NSString *)ssid;
@end

