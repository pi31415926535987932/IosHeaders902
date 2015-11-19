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

@class NSString, GEOFormattedString;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying> {

	NSString* _detailTimeFormatted;
	GEOFormattedString* _duration;
	GEOFormattedString* _durationList;
	GEOFormattedString* _planningDescription;
	GEOFormattedString* _serviceGap;

}

@property (nonatomic,readonly) char hasDetailTimeFormatted; 
@property (nonatomic,retain) NSString * detailTimeFormatted;                        //@synthesize detailTimeFormatted=_detailTimeFormatted - In the implementation block
@property (nonatomic,readonly) char hasPlanningDescription; 
@property (nonatomic,retain) GEOFormattedString * planningDescription;              //@synthesize planningDescription=_planningDescription - In the implementation block
@property (nonatomic,readonly) char hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) char hasDurationList; 
@property (nonatomic,retain) GEOFormattedString * durationList;                     //@synthesize durationList=_durationList - In the implementation block
@property (nonatomic,readonly) char hasServiceGap; 
@property (nonatomic,retain) GEOFormattedString * serviceGap;                       //@synthesize serviceGap=_serviceGap - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(GEOFormattedString *)duration;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasPlanningDescription;
-(GEOFormattedString *)serviceGap;
-(void)setDetailTimeFormatted:(NSString *)arg1 ;
-(void)setServiceGap:(GEOFormattedString *)arg1 ;
-(NSString *)detailTimeFormatted;
-(char)hasServiceGap;
-(GEOFormattedString *)durationList;
-(void)setDurationList:(GEOFormattedString *)arg1 ;
-(void)setPlanningDescription:(GEOFormattedString *)arg1 ;
-(char)hasDetailTimeFormatted;
-(GEOFormattedString *)planningDescription;
-(char)hasDurationList;
-(char)hasDuration;
-(char)readFrom:(id)arg1 ;
@end

