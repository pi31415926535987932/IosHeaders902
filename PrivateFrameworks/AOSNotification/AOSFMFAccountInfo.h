/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AOSFMFAccountInfo : NSObject <NSSecureCoding> {

	NSString* _dsid;
	NSString* _username;
	NSString* _appServerHost;
	NSString* _appAuthToken;
	NSDictionary* _additionalInfo;
	NSString* _aosServerHost;
	NSString* _aosServerProtocolScheme;
	NSString* _aosAPSEnvironment;
	NSString* _internalAuthToken;
	int _appAuthTokenStatus;
	NSString* _legacyDsid;
	NSString* _legacyUsername;

}

@property (nonatomic,retain) NSString * dsid;                                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * appServerHost;                        //@synthesize appServerHost=_appServerHost - In the implementation block
@property (nonatomic,retain) NSString * appAuthToken;                         //@synthesize appAuthToken=_appAuthToken - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalInfo;                   //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,retain) NSString * aosServerHost;                        //@synthesize aosServerHost=_aosServerHost - In the implementation block
@property (nonatomic,retain) NSString * aosServerProtocolScheme;              //@synthesize aosServerProtocolScheme=_aosServerProtocolScheme - In the implementation block
@property (nonatomic,retain) NSString * aosAPSEnvironment;                    //@synthesize aosAPSEnvironment=_aosAPSEnvironment - In the implementation block
@property (nonatomic,retain) NSString * internalAuthToken;                    //@synthesize internalAuthToken=_internalAuthToken - In the implementation block
@property (assign,nonatomic) int appAuthTokenStatus;                          //@synthesize appAuthTokenStatus=_appAuthTokenStatus - In the implementation block
@property (nonatomic,retain) NSString * legacyDsid;                           //@synthesize legacyDsid=_legacyDsid - In the implementation block
@property (nonatomic,retain) NSString * legacyUsername;                       //@synthesize legacyUsername=_legacyUsername - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setAosServerHost:(NSString *)arg1 ;
-(void)setAosServerProtocolScheme:(NSString *)arg1 ;
-(void)setAosAPSEnvironment:(NSString *)arg1 ;
-(void)setInternalAuthToken:(NSString *)arg1 ;
-(NSString *)internalAuthToken;
-(NSString *)aosServerHost;
-(NSString *)aosServerProtocolScheme;
-(NSString *)aosAPSEnvironment;
-(NSString *)appAuthToken;
-(int)appAuthTokenStatus;
-(NSString *)appServerHost;
-(NSString *)legacyDsid;
-(NSString *)legacyUsername;
-(void)setAppServerHost:(NSString *)arg1 ;
-(void)setAppAuthToken:(NSString *)arg1 ;
-(void)setAppAuthTokenStatus:(int)arg1 ;
-(void)setLegacyDsid:(NSString *)arg1 ;
-(void)setLegacyUsername:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
@end

