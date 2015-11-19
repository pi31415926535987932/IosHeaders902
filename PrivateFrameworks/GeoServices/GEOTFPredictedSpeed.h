/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {

	unsigned _deltaMinutesInFuture;
	float _deltaSpeed;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasDeltaMinutesInFuture; 
@property (assign,nonatomic) unsigned deltaMinutesInFuture;              //@synthesize deltaMinutesInFuture=_deltaMinutesInFuture - In the implementation block
@property (assign,nonatomic) char hasDeltaSpeed; 
@property (assign,nonatomic) float deltaSpeed;                           //@synthesize deltaSpeed=_deltaSpeed - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)deltaMinutesInFuture;
-(void)setHasDeltaSpeed:(char)arg1 ;
-(char)hasDeltaMinutesInFuture;
-(char)hasDeltaSpeed;
-(void)setDeltaSpeed:(float)arg1 ;
-(void)setDeltaMinutesInFuture:(unsigned)arg1 ;
-(void)setHasDeltaMinutesInFuture:(char)arg1 ;
-(float)deltaSpeed;
-(char)readFrom:(id)arg1 ;
@end

