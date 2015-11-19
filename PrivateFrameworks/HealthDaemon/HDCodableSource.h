/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableSource : PBCodable <NSCopying> {

	double _modificationDate;
	long long _options;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSString* _productType;
	NSData* _uuid;
	char _deleted;
	SCD_Struct_HD28 _has;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasProductType; 
@property (nonatomic,retain) NSString * productType;                   //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) char hasOptions; 
@property (assign,nonatomic) long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) char hasUuid; 
@property (nonatomic,retain) NSData * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) char hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) char hasDeleted; 
@property (assign,nonatomic) char deleted;                             //@synthesize deleted=_deleted - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)modificationDate;
-(id)dictionaryRepresentation;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(NSData *)uuid;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)hasName;
-(char)hasOptions;
-(char)hasBundleIdentifier;
-(id)decodedUUID;
-(NSString *)productType;
-(id)decodedModificationDate;
-(void)setProductType:(NSString *)arg1 ;
-(void)setHasModificationDate:(char)arg1 ;
-(char)hasModificationDate;
-(char)hasProductType;
-(void)setHasOptions:(char)arg1 ;
-(void)setHasDeleted:(char)arg1 ;
-(char)hasDeleted;
-(char)deleted;
-(void)setDeleted:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setModificationDate:(double)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(char)hasUuid;
@end

