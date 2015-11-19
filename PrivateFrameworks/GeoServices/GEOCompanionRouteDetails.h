/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitDecoderData, GEOMapItemStorage, NSString, GEOTransitSuggestedRoute, NSData, NSMutableArray;

@interface GEOCompanionRouteDetails : PBCodable <NSCopying> {

	SCD_Struct_GE101* _coordinates;
	SCD_Struct_GE52* _trafficColorOffsets;
	SCD_Struct_GE52* _trafficColors;
	GEOTransitDecoderData* _decoderData;
	GEOMapItemStorage* _destination;
	NSString* _destinationName;
	unsigned _distance;
	unsigned _historicalDuration;
	NSString* _name;
	GEOMapItemStorage* _origin;
	unsigned _originalDuration;
	GEOTransitSuggestedRoute* _originalSuggestedRoute;
	NSData* _routeID;
	NSMutableArray* _steps;
	int _transportType;
	char _canNavigate;
	char _showTransitSchedules;
	SCD_Struct_GE60 _has;

}

@property (nonatomic,readonly) char hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName;                                     //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) char hasOriginalDuration; 
@property (assign,nonatomic) unsigned originalDuration;                                      //@synthesize originalDuration=_originalDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                         //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) unsigned coordinatesCount; 
@property (nonatomic,readonly) double* coordinates; 
@property (nonatomic,readonly) char hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                               //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) char hasDestination; 
@property (nonatomic,retain) GEOMapItemStorage * destination;                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) char hasOrigin; 
@property (nonatomic,retain) GEOMapItemStorage * origin;                                     //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) unsigned trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (assign,nonatomic) char hasHistoricalDuration; 
@property (assign,nonatomic) unsigned historicalDuration;                                    //@synthesize historicalDuration=_historicalDuration - In the implementation block
@property (assign,nonatomic) char hasCanNavigate; 
@property (assign,nonatomic) char canNavigate;                                               //@synthesize canNavigate=_canNavigate - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance;                                              //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) char hasOriginalSuggestedRoute; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * originalSuggestedRoute;              //@synthesize originalSuggestedRoute=_originalSuggestedRoute - In the implementation block
@property (nonatomic,readonly) char hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData;                            //@synthesize decoderData=_decoderData - In the implementation block
@property (assign,nonatomic) char hasShowTransitSchedules; 
@property (assign,nonatomic) char showTransitSchedules;                                      //@synthesize showTransitSchedules=_showTransitSchedules - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                                              //@synthesize transportType=_transportType - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOMapItemStorage *)origin;
-(void)setOrigin:(GEOMapItemStorage *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOMapItemStorage *)destination;
-(void)setDestination:(GEOMapItemStorage *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(NSString *)destinationName;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(char)hasTransportType;
-(void)setHasTransportType:(char)arg1 ;
-(char)hasName;
-(char)hasDecoderData;
-(GEOTransitDecoderData *)decoderData;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(char)hasDistance;
-(void)addTrafficColor:(unsigned)arg1 ;
-(unsigned*)trafficColors;
-(void)clearTrafficColors;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned)arg2 ;
-(NSMutableArray *)steps;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(void)clearSteps;
-(void)addStep:(id)arg1 ;
-(unsigned)trafficColorOffsetsCount;
-(unsigned)trafficColorOffsetAtIndex:(unsigned)arg1 ;
-(unsigned*)trafficColorOffsets;
-(unsigned)trafficColorAtIndex:(unsigned)arg1 ;
-(void)setHasDistance:(char)arg1 ;
-(void)clearTrafficColorOffsets;
-(id)stepAtIndex:(unsigned)arg1 ;
-(unsigned)stepsCount;
-(unsigned)trafficColorsCount;
-(GEOTransitSuggestedRoute *)originalSuggestedRoute;
-(unsigned)originalDuration;
-(void)setHasShowTransitSchedules:(char)arg1 ;
-(void)setHasCanNavigate:(char)arg1 ;
-(char)hasShowTransitSchedules;
-(char)hasCanNavigate;
-(double*)coordinates;
-(void)setDestinationName:(NSString *)arg1 ;
-(char)hasDestinationName;
-(void)setOriginalSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(void)clearCoordinates;
-(unsigned)historicalDuration;
-(char)canNavigate;
-(void)setCoordinates:(double*)arg1 count:(unsigned)arg2 ;
-(void)setOriginalDuration:(unsigned)arg1 ;
-(void)addCoordinates:(double)arg1 ;
-(char)hasOriginalSuggestedRoute;
-(unsigned)coordinatesCount;
-(char)showTransitSchedules;
-(void)setHasOriginalDuration:(char)arg1 ;
-(void)setHistoricalDuration:(unsigned)arg1 ;
-(double)coordinatesAtIndex:(unsigned)arg1 ;
-(char)hasOriginalDuration;
-(char)hasDestination;
-(char)hasHistoricalDuration;
-(char)hasOrigin;
-(void)setHasHistoricalDuration:(char)arg1 ;
-(void)setShowTransitSchedules:(char)arg1 ;
-(void)setCanNavigate:(char)arg1 ;
-(char)isSyntheticRoute;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(unsigned)distance;
-(void)setDistance:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

