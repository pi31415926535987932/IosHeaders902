/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying> {

	GEOTraitsTransitScheduleModeFilter* _highFrequencyFilter;
	GEOTraitsTransitScheduleModeFilter* _lowFrequencyFilter;
	GEOTraitsTransitScheduleTimeRange* _operatingHoursRange;

}

@property (nonatomic,readonly) char hasHighFrequencyFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleModeFilter * highFrequencyFilter;              //@synthesize highFrequencyFilter=_highFrequencyFilter - In the implementation block
@property (nonatomic,readonly) char hasLowFrequencyFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleModeFilter * lowFrequencyFilter;               //@synthesize lowFrequencyFilter=_lowFrequencyFilter - In the implementation block
@property (nonatomic,readonly) char hasOperatingHoursRange; 
@property (nonatomic,retain) GEOTraitsTransitScheduleTimeRange * operatingHoursRange;               //@synthesize operatingHoursRange=_operatingHoursRange - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOTraitsTransitScheduleTimeRange *)operatingHoursRange;
-(char)hasOperatingHoursRange;
-(void)setOperatingHoursRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
-(void)setHighFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
-(char)hasLowFrequencyFilter;
-(GEOTraitsTransitScheduleModeFilter *)lowFrequencyFilter;
-(char)hasHighFrequencyFilter;
-(GEOTraitsTransitScheduleModeFilter *)highFrequencyFilter;
-(void)setLowFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

