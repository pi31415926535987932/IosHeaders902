/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPPlaceProblem : PBCodable <NSCopying> {

	unsigned _componentIndex;
	unsigned _componentValueIndex;
	unsigned _problematicDepartureSequenceIndex;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasComponentIndex; 
@property (assign,nonatomic) unsigned componentIndex;                                 //@synthesize componentIndex=_componentIndex - In the implementation block
@property (assign,nonatomic) char hasComponentValueIndex; 
@property (assign,nonatomic) unsigned componentValueIndex;                            //@synthesize componentValueIndex=_componentValueIndex - In the implementation block
@property (assign,nonatomic) char hasProblematicDepartureSequenceIndex; 
@property (assign,nonatomic) unsigned problematicDepartureSequenceIndex;              //@synthesize problematicDepartureSequenceIndex=_problematicDepartureSequenceIndex - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)problematicDepartureSequenceIndex;
-(void)setHasComponentIndex:(char)arg1 ;
-(char)hasComponentValueIndex;
-(void)setHasComponentValueIndex:(char)arg1 ;
-(void)setHasProblematicDepartureSequenceIndex:(char)arg1 ;
-(unsigned)componentIndex;
-(char)hasComponentIndex;
-(void)setComponentValueIndex:(unsigned)arg1 ;
-(void)setProblematicDepartureSequenceIndex:(unsigned)arg1 ;
-(void)setComponentIndex:(unsigned)arg1 ;
-(char)hasProblematicDepartureSequenceIndex;
-(unsigned)componentValueIndex;
-(char)readFrom:(id)arg1 ;
@end

