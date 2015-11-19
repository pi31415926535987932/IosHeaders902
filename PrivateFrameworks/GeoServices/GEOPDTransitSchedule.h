/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDDeparturePredicate, NSMutableArray;

@interface GEOPDTransitSchedule : PBCodable <NSCopying> {

	SCD_Struct_GE50 _operatingHoursRange;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	NSMutableArray* _departureSequences;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * departureSequences;                                //@synthesize departureSequences=_departureSequences - In the implementation block
@property (nonatomic,readonly) char hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown;              //@synthesize departurePredicateCountdown=_departurePredicateCountdown - In the implementation block
@property (nonatomic,readonly) char hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp;                  //@synthesize departurePredicateStamp=_departurePredicateStamp - In the implementation block
@property (assign,nonatomic) char hasOperatingHoursRange; 
@property (assign,nonatomic) SCD_Struct_GE51 operatingHoursRange;                                //@synthesize operatingHoursRange=_operatingHoursRange - In the implementation block
+(id)transitScheduleForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)departureSequencesCount;
-(SCD_Struct_GE51)operatingHoursRange;
-(void)setHasOperatingHoursRange:(char)arg1 ;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(id)departureSequenceAtIndex:(unsigned)arg1 ;
-(char)hasDeparturePredicateCountdown;
-(char)hasOperatingHoursRange;
-(void)addDepartureSequence:(id)arg1 ;
-(void)setOperatingHoursRange:(SCD_Struct_GE51)arg1 ;
-(char)hasDeparturePredicateStamp;
-(void)setDepartureSequences:(NSMutableArray *)arg1 ;
-(NSMutableArray *)departureSequences;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
-(void)clearDepartureSequences;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(char)readFrom:(id)arg1 ;
@end

