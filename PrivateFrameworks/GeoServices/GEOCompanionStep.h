/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCompanionDriveStep, GEOCompanionFerryStep, NSString, GEOCompanionWalkStep;

@interface GEOCompanionStep : PBCodable <NSCopying> {

	unsigned _distance;
	GEOCompanionDriveStep* _driveStep;
	unsigned _endCoordinateIndex;
	GEOCompanionFerryStep* _ferryStep;
	unsigned _maneuverStartCoordinateIndex;
	NSString* _roadName;
	unsigned _startCoordinateIndex;
	unsigned _stepID;
	unsigned _time;
	GEOCompanionWalkStep* _walkStep;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) char hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                    //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance;                                  //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) char hasTime; 
@property (assign,nonatomic) unsigned time;                                      //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) char hasRoadName; 
@property (nonatomic,retain) NSString * roadName;                                //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) char hasDriveStep; 
@property (nonatomic,retain) GEOCompanionDriveStep * driveStep;                  //@synthesize driveStep=_driveStep - In the implementation block
@property (nonatomic,readonly) char hasWalkStep; 
@property (nonatomic,retain) GEOCompanionWalkStep * walkStep;                    //@synthesize walkStep=_walkStep - In the implementation block
@property (nonatomic,readonly) char hasFerryStep; 
@property (nonatomic,retain) GEOCompanionFerryStep * ferryStep;                  //@synthesize ferryStep=_ferryStep - In the implementation block
@property (assign,nonatomic) char hasStartCoordinateIndex; 
@property (assign,nonatomic) unsigned startCoordinateIndex;                      //@synthesize startCoordinateIndex=_startCoordinateIndex - In the implementation block
@property (assign,nonatomic) char hasManeuverStartCoordinateIndex; 
@property (assign,nonatomic) unsigned maneuverStartCoordinateIndex;              //@synthesize maneuverStartCoordinateIndex=_maneuverStartCoordinateIndex - In the implementation block
@property (assign,nonatomic) char hasEndCoordinateIndex; 
@property (assign,nonatomic) unsigned endCoordinateIndex;                        //@synthesize endCoordinateIndex=_endCoordinateIndex - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(unsigned)time;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasDistance;
-(void)setHasDistance:(char)arg1 ;
-(char)hasStepID;
-(unsigned)stepID;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(char)arg1 ;
-(id)maneuverStep;
-(id)initWithStep:(id)arg1 route:(id)arg2 ;
-(NSString *)roadName;
-(id)geoStep;
-(void)setRoadName:(NSString *)arg1 ;
-(char)hasEndCoordinateIndex;
-(char)hasRoadName;
-(void)setWalkStep:(GEOCompanionWalkStep *)arg1 ;
-(GEOCompanionDriveStep *)driveStep;
-(char)hasStartCoordinateIndex;
-(void)setHasEndCoordinateIndex:(char)arg1 ;
-(char)hasTime;
-(void)setHasStartCoordinateIndex:(char)arg1 ;
-(void)setManeuverStartCoordinateIndex:(unsigned)arg1 ;
-(unsigned)maneuverStartCoordinateIndex;
-(char)hasDriveStep;
-(void)setDriveStep:(GEOCompanionDriveStep *)arg1 ;
-(char)hasFerryStep;
-(unsigned)endCoordinateIndex;
-(char)hasManeuverStartCoordinateIndex;
-(char)hasWalkStep;
-(unsigned)startCoordinateIndex;
-(void)setHasManeuverStartCoordinateIndex:(char)arg1 ;
-(void)setEndCoordinateIndex:(unsigned)arg1 ;
-(void)setHasTime:(char)arg1 ;
-(GEOCompanionWalkStep *)walkStep;
-(void)setFerryStep:(GEOCompanionFerryStep *)arg1 ;
-(GEOCompanionFerryStep *)ferryStep;
-(void)setStartCoordinateIndex:(unsigned)arg1 ;
-(unsigned)distance;
-(void)setDistance:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

