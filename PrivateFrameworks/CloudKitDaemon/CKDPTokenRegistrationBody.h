/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {

	int _apnsEnv;
	NSString* _bundleIdentifier;
	NSData* _token;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasToken; 
@property (nonatomic,retain) NSData * token;                           //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) char hasApnsEnv; 
@property (assign,nonatomic) int apnsEnv;                              //@synthesize apnsEnv=_apnsEnv - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(int)apnsEnv;
-(void)setApnsEnv:(int)arg1 ;
-(void)setHasApnsEnv:(char)arg1 ;
-(char)hasApnsEnv;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)hasBundleIdentifier;
-(char)hasToken;
-(char)readFrom:(id)arg1 ;
@end

