/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLatLng;

@interface GEORouteIncident : PBCodable <NSCopying> {

	long long _endTime;
	long long _startTime;
	long long _updateTime;
	NSString* _crossStreet;
	NSString* _incidentId;
	NSString* _info;
	unsigned _laneClosureCount;
	int _laneClosureType;
	GEOLatLng* _position;
	int _significance;
	NSString* _street;
	int _type;
	char _endTimeReliable;
	SCD_Struct_GE65 _has;

}

@property (nonatomic,readonly) char hasPosition; 
@property (nonatomic,retain) GEOLatLng * position;                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) char hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId;                  //@synthesize incidentId=_incidentId - In the implementation block
@property (nonatomic,readonly) char hasInfo; 
@property (nonatomic,retain) NSString * info;                        //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasStreet; 
@property (nonatomic,retain) NSString * street;                      //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) char hasCrossStreet; 
@property (nonatomic,retain) NSString * crossStreet;                 //@synthesize crossStreet=_crossStreet - In the implementation block
@property (assign,nonatomic) char hasStartTime; 
@property (assign,nonatomic) long long startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char hasEndTime; 
@property (assign,nonatomic) long long endTime;                      //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) char hasUpdateTime; 
@property (assign,nonatomic) long long updateTime;                   //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,nonatomic) char hasLaneClosureType; 
@property (assign,nonatomic) int laneClosureType;                    //@synthesize laneClosureType=_laneClosureType - In the implementation block
@property (assign,nonatomic) char hasLaneClosureCount; 
@property (assign,nonatomic) unsigned laneClosureCount;              //@synthesize laneClosureCount=_laneClosureCount - In the implementation block
@property (assign,nonatomic) char hasEndTimeReliable; 
@property (assign,nonatomic) char endTimeReliable;                   //@synthesize endTimeReliable=_endTimeReliable - In the implementation block
@property (assign,nonatomic) char hasSignificance; 
@property (assign,nonatomic) int significance;                       //@synthesize significance=_significance - In the implementation block
-(CGImageRef)_mapKitImage;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setStartTime:(long long)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(GEOLatLng *)arg1 ;
-(GEOLatLng *)position;
-(NSString *)info;
-(id)dictionaryRepresentation;
-(long long)startTime;
-(void)setInfo:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(long long)endTime;
-(char)hasInfo;
-(void)setEndTime:(long long)arg1 ;
-(void)setHasEndTime:(char)arg1 ;
-(char)hasEndTime;
-(void)setHasStartTime:(char)arg1 ;
-(char)hasStartTime;
-(void)setHasEndTimeReliable:(char)arg1 ;
-(char)hasLaneClosureType;
-(NSString *)crossStreet;
-(void)setUpdateTime:(long long)arg1 ;
-(void)setHasLaneClosureType:(char)arg1 ;
-(char)hasPosition;
-(void)setEndTimeReliable:(char)arg1 ;
-(char)hasSignificance;
-(NSString *)street;
-(void)setIncidentId:(NSString *)arg1 ;
-(unsigned)laneClosureCount;
-(void)setHasUpdateTime:(char)arg1 ;
-(void)setLaneClosureCount:(unsigned)arg1 ;
-(char)hasIncidentId;
-(char)hasEndTimeReliable;
-(char)endTimeReliable;
-(void)setStreet:(NSString *)arg1 ;
-(void)setHasLaneClosureCount:(char)arg1 ;
-(void)setHasSignificance:(char)arg1 ;
-(int)laneClosureType;
-(char)hasUpdateTime;
-(long long)updateTime;
-(int)significance;
-(char)hasCrossStreet;
-(void)setLaneClosureType:(int)arg1 ;
-(NSString *)incidentId;
-(char)hasStreet;
-(char)hasLaneClosureCount;
-(void)setSignificance:(int)arg1 ;
-(void)setCrossStreet:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end
