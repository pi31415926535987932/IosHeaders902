/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitConnection : PBCodable <NSCopying> {

	SCD_Struct_GE52* _fromRideIndexs;
	SCD_Struct_GE52* _toRideIndexs;
	NSMutableArray* _steps;

}

@property (nonatomic,readonly) unsigned fromRideIndexsCount; 
@property (nonatomic,readonly) unsigned* fromRideIndexs; 
@property (nonatomic,readonly) unsigned toRideIndexsCount; 
@property (nonatomic,readonly) unsigned* toRideIndexs; 
@property (nonatomic,retain) NSMutableArray * steps;                      //@synthesize steps=_steps - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)steps;
-(void)clearSteps;
-(void)addStep:(id)arg1 ;
-(id)stepAtIndex:(unsigned)arg1 ;
-(unsigned)stepsCount;
-(unsigned)fromRideIndexsCount;
-(unsigned*)fromRideIndexs;
-(void)clearToRideIndexs;
-(unsigned*)toRideIndexs;
-(void)addFromRideIndex:(unsigned)arg1 ;
-(unsigned)toRideIndexAtIndex:(unsigned)arg1 ;
-(void)clearFromRideIndexs;
-(unsigned)toRideIndexsCount;
-(void)addToRideIndex:(unsigned)arg1 ;
-(void)setFromRideIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)fromRideIndexAtIndex:(unsigned)arg1 ;
-(void)setToRideIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(char)readFrom:(id)arg1 ;
@end

