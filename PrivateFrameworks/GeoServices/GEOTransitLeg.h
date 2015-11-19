/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitLeg : PBCodable <NSCopying> {

	unsigned _defaultRideIndex;
	NSMutableArray* _rides;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * rides;                 //@synthesize rides=_rides - In the implementation block
@property (assign,nonatomic) char hasDefaultRideIndex; 
@property (assign,nonatomic) unsigned defaultRideIndex;              //@synthesize defaultRideIndex=_defaultRideIndex - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)ridesCount;
-(void)setDefaultRideIndex:(unsigned)arg1 ;
-(id)rideAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)rides;
-(void)setRides:(NSMutableArray *)arg1 ;
-(char)hasDefaultRideIndex;
-(void)addRide:(id)arg1 ;
-(void)setHasDefaultRideIndex:(char)arg1 ;
-(void)clearRides;
-(unsigned)defaultRideIndex;
-(char)readFrom:(id)arg1 ;
@end
