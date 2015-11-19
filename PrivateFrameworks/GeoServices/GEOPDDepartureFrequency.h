/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDepartureFrequency.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {

	unsigned _displayDepartureFrequency;
	unsigned _earliestDepartureTime;
	unsigned _latestDepartureTime;
	unsigned _maxDepartureFrequency;
	unsigned _minDepartureFrequency;
	char _isEstimated;
	SCD_Struct_GE60 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * firstTimeInFrequency; 
@property (nonatomic,readonly) NSDate * lastTimeInFrequency; 
@property (nonatomic,readonly) double frequencyForSorting; 
@property (nonatomic,readonly) int frequencyType; 
@property (nonatomic,readonly) char isEstimate; 
@property (nonatomic,readonly) int displayFrequency; 
@property (nonatomic,readonly) int minFrequency; 
@property (nonatomic,readonly) int maxFrequency; 
@property (assign,nonatomic) char hasMinDepartureFrequency; 
@property (assign,nonatomic) unsigned minDepartureFrequency;                  //@synthesize minDepartureFrequency=_minDepartureFrequency - In the implementation block
@property (assign,nonatomic) char hasMaxDepartureFrequency; 
@property (assign,nonatomic) unsigned maxDepartureFrequency;                  //@synthesize maxDepartureFrequency=_maxDepartureFrequency - In the implementation block
@property (assign,nonatomic) char hasEarliestDepartureTime; 
@property (assign,nonatomic) unsigned earliestDepartureTime;                  //@synthesize earliestDepartureTime=_earliestDepartureTime - In the implementation block
@property (assign,nonatomic) char hasLatestDepartureTime; 
@property (assign,nonatomic) unsigned latestDepartureTime;                    //@synthesize latestDepartureTime=_latestDepartureTime - In the implementation block
@property (assign,nonatomic) char hasIsEstimated; 
@property (assign,nonatomic) char isEstimated;                                //@synthesize isEstimated=_isEstimated - In the implementation block
@property (assign,nonatomic) char hasDisplayDepartureFrequency; 
@property (assign,nonatomic) unsigned displayDepartureFrequency;              //@synthesize displayDepartureFrequency=_displayDepartureFrequency - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMaxDepartureFrequency:(unsigned)arg1 ;
-(void)setLatestDepartureTime:(unsigned)arg1 ;
-(void)setHasDisplayDepartureFrequency:(char)arg1 ;
-(unsigned)maxDepartureFrequency;
-(void)setDisplayDepartureFrequency:(unsigned)arg1 ;
-(void)setHasLatestDepartureTime:(char)arg1 ;
-(unsigned)minDepartureFrequency;
-(void)setHasMaxDepartureFrequency:(char)arg1 ;
-(char)hasEarliestDepartureTime;
-(unsigned)displayDepartureFrequency;
-(void)setMinDepartureFrequency:(unsigned)arg1 ;
-(char)hasIsEstimated;
-(void)setEarliestDepartureTime:(unsigned)arg1 ;
-(void)setIsEstimated:(char)arg1 ;
-(char)isEstimated;
-(void)setHasEarliestDepartureTime:(char)arg1 ;
-(void)setHasIsEstimated:(char)arg1 ;
-(unsigned)latestDepartureTime;
-(char)hasMinDepartureFrequency;
-(char)hasMaxDepartureFrequency;
-(char)hasDisplayDepartureFrequency;
-(void)setHasMinDepartureFrequency:(char)arg1 ;
-(unsigned)earliestDepartureTime;
-(char)hasLatestDepartureTime;
-(int)frequencyType;
-(char)isEstimate;
-(int)maxFrequency;
-(double)frequencyForSorting;
-(int)displayFrequency;
-(NSDate *)firstTimeInFrequency;
-(int)minFrequency;
-(char)isValidAtDate:(id)arg1 ;
-(NSDate *)lastTimeInFrequency;
-(char)readFrom:(id)arg1 ;
@end
