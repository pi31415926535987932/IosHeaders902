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

@interface GEOPDHours : PBCodable <NSCopying> {

	SCD_Struct_GE1* _days;
	SCD_Struct_GE51* _timeRanges;
	unsigned _timeRangesCount;
	unsigned _timeRangesSpace;

}

@property (nonatomic,readonly) unsigned daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,readonly) unsigned timeRangesCount; 
@property (nonatomic,readonly) SCD_Struct_GE51* timeRanges; 
+(char)operatingHoursAvailableForPlaceData:(id)arg1 ;
+(char)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
+(id)currentOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addTimeRange:(SCD_Struct_GE51)arg1 ;
-(void)clearTimeRanges;
-(unsigned)timeRangesCount;
-(void)setDays:(int*)arg1 count:(unsigned)arg2 ;
-(void)clearDays;
-(SCD_Struct_GE51)timeRangeAtIndex:(unsigned)arg1 ;
-(void)addDay:(int)arg1 ;
-(void)setTimeRanges:(SCD_Struct_GE51*)arg1 count:(unsigned)arg2 ;
-(int*)days;
-(SCD_Struct_GE51*)timeRanges;
-(unsigned)daysCount;
-(int)dayAtIndex:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

