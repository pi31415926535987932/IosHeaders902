/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableSample;

@interface HDCodableCategorySample : PBCodable <NSCopying> {

	long long _value;
	HDCodableSample* _sample;
	SCD_Struct_HD22 _has;

}

@property (nonatomic,readonly) char hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) char hasValue; 
@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSample:(HDCodableSample *)arg1 ;
-(HDCodableSample *)sample;
-(char)hasSample;
-(char)readFrom:(id)arg1 ;
-(char)hasValue;
-(void)setHasValue:(char)arg1 ;
@end
