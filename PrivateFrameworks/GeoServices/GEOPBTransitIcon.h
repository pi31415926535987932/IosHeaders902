/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIconDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {

	unsigned _cartoId;
	unsigned _transitTypeEnumValue;
	SCD_Struct_GE7 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@property (assign,nonatomic) char hasCartoId; 
@property (assign,nonatomic) unsigned cartoId;                           //@synthesize cartoId=_cartoId - In the implementation block
@property (assign,nonatomic) char hasTransitTypeEnumValue; 
@property (assign,nonatomic) unsigned transitTypeEnumValue;              //@synthesize transitTypeEnumValue=_transitTypeEnumValue - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(void)setTransitTypeEnumValue:(unsigned)arg1 ;
-(char)hasCartoId;
-(void)setCartoId:(unsigned)arg1 ;
-(char)hasTransitTypeEnumValue;
-(unsigned)transitTypeEnumValue;
-(void)setHasCartoId:(char)arg1 ;
-(unsigned)cartoId;
-(void)setHasTransitTypeEnumValue:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

