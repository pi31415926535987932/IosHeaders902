/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying> {

	NSString* _locale;
	NSString* _name;
	NSString* _phoneticName;
	int _phoneticType;
	NSString* _shield;
	int _shieldType;
	int _signType;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;              //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) char hasShield; 
@property (nonatomic,retain) NSString * shield;                    //@synthesize shield=_shield - In the implementation block
@property (assign,nonatomic) char hasShieldType; 
@property (assign,nonatomic) int shieldType;                       //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) char hasPhoneticType; 
@property (assign,nonatomic) int phoneticType;                     //@synthesize phoneticType=_phoneticType - In the implementation block
@property (assign,nonatomic) char hasSignType; 
@property (assign,nonatomic) int signType;                         //@synthesize signType=_signType - In the implementation block
@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) NSString * locale;                    //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)phoneticName;
-(char)hasPhoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(char)hasName;
-(NSString *)shield;
-(void)setShield:(NSString *)arg1 ;
-(char)hasShield;
-(char)hasLocale;
-(char)hasPhoneticType;
-(int)signType;
-(void)setShieldType:(int)arg1 ;
-(void)setSignType:(int)arg1 ;
-(int)phoneticType;
-(void)setHasSignType:(char)arg1 ;
-(char)hasShieldType;
-(char)hasSignType;
-(void)setPhoneticType:(int)arg1 ;
-(int)shieldType;
-(void)setHasShieldType:(char)arg1 ;
-(void)setHasPhoneticType:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

