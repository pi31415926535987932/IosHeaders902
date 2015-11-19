/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableSample;

@interface HDCodableQuantitySample : PBCodable <NSCopying> {

	double _valueInCanonicalUnit;
	double _valueInOriginalUnit;
	NSString* _originalUnitString;
	HDCodableSample* _sample;
	SCD_Struct_HD1 _has;

}

@property (nonatomic,readonly) char hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                   //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) char hasValueInCanonicalUnit; 
@property (assign,nonatomic) double valueInCanonicalUnit;                //@synthesize valueInCanonicalUnit=_valueInCanonicalUnit - In the implementation block
@property (assign,nonatomic) char hasValueInOriginalUnit; 
@property (assign,nonatomic) double valueInOriginalUnit;                 //@synthesize valueInOriginalUnit=_valueInOriginalUnit - In the implementation block
@property (nonatomic,readonly) char hasOriginalUnitString; 
@property (nonatomic,retain) NSString * originalUnitString;              //@synthesize originalUnitString=_originalUnitString - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSample:(HDCodableSample *)arg1 ;
-(HDCodableSample *)sample;
-(void)setValueInCanonicalUnit:(double)arg1 ;
-(void)setOriginalUnitString:(NSString *)arg1 ;
-(void)setValueInOriginalUnit:(double)arg1 ;
-(double)valueInCanonicalUnit;
-(char)hasSample;
-(void)setHasValueInCanonicalUnit:(char)arg1 ;
-(char)hasValueInCanonicalUnit;
-(void)setHasValueInOriginalUnit:(char)arg1 ;
-(char)hasValueInOriginalUnit;
-(char)hasOriginalUnitString;
-(double)valueInOriginalUnit;
-(NSString *)originalUnitString;
-(char)readFrom:(id)arg1 ;
@end
