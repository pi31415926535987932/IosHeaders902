/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushCert;
	SecKeyRef _pushKey;
	SecKeyRef _pushPublicKey;
	NSData* _pushToken;
	NSString* _authToken;
	NSString* _profileID;

}

@property (nonatomic,copy) NSString * profileID;                    //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,copy) NSString * authToken;                    //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPrivateKey;              //@synthesize pushKey=_pushKey - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPublicKey;               //@synthesize pushPublicKey=_pushPublicKey - In the implementation block
@property (nonatomic,copy) NSData * pushCertificate;                //@synthesize pushCert=_pushCert - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                      //@synthesize pushToken=_pushToken - In the implementation block
-(void)setProfileID:(NSString *)arg1 ;
-(int)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)profileID;
-(char)wantsHTTPHeaders;
-(char)wantsBinaryPush;
-(char)wantsCompressedBody;
-(char)wantsBagKey;
-(SecKeyRef)pushPrivateKey;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(NSData *)pushCertificate;
-(void)setPushCertificate:(NSData *)arg1 ;
-(char)hasRequiredKeys:(id*)arg1 ;
-(int)responseCommand;
-(id)additionalMessageHeaders;
-(id)additionalMessageHeadersForOutgoingPush;
-(void)handleResponseDictionary:(id)arg1 ;
@end

