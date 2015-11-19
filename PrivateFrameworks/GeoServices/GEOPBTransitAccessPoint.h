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

@class NSString, NSMutableArray, GEOLatLng;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned _accessPointIndex;
	NSString* _entranceNameDisplayString;
	NSMutableArray* _entranceZoomNames;
	NSString* _exitNameDisplayString;
	NSMutableArray* _exitZoomNames;
	GEOLatLng* _location;
	unsigned _stationIndex;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex;                         //@synthesize accessPointIndex=_accessPointIndex - In the implementation block
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex;                             //@synthesize stationIndex=_stationIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * entranceZoomNames;                //@synthesize entranceZoomNames=_entranceZoomNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * exitZoomNames;                    //@synthesize exitZoomNames=_exitZoomNames - In the implementation block
@property (nonatomic,readonly) char hasEntranceNameDisplayString; 
@property (nonatomic,retain) NSString * entranceNameDisplayString;              //@synthesize entranceNameDisplayString=_entranceNameDisplayString - In the implementation block
@property (nonatomic,readonly) char hasExitNameDisplayString; 
@property (nonatomic,retain) NSString * exitNameDisplayString;                  //@synthesize exitNameDisplayString=_exitNameDisplayString - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEntranceZoomNames:(NSMutableArray *)arg1 ;
-(unsigned)stationIndex;
-(char)hasEntranceNameDisplayString;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)clearExitZoomNames;
-(void)setHasStationIndex:(char)arg1 ;
-(void)addEntranceZoomName:(id)arg1 ;
-(char)hasExitNameDisplayString;
-(NSMutableArray *)entranceZoomNames;
-(void)clearEntranceZoomNames;
-(void)setEntranceNameDisplayString:(NSString *)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(id)exitZoomNameAtIndex:(unsigned)arg1 ;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(char)hasStationIndex;
-(NSString *)exitNameDisplayString;
-(void)setExitNameDisplayString:(NSString *)arg1 ;
-(unsigned long long)muid;
-(void)addExitZoomName:(id)arg1 ;
-(id)entranceZoomNameAtIndex:(unsigned)arg1 ;
-(unsigned)exitZoomNamesCount;
-(char)hasMuid;
-(unsigned)entranceZoomNamesCount;
-(void)setHasAccessPointIndex:(char)arg1 ;
-(NSString *)entranceNameDisplayString;
-(void)setStationIndex:(unsigned)arg1 ;
-(void)setExitZoomNames:(NSMutableArray *)arg1 ;
-(unsigned)accessPointIndex;
-(char)hasAccessPointIndex;
-(char)hasLocation;
-(NSMutableArray *)exitZoomNames;
-(id)bestEntranceNameWithLocale:(out id*)arg1 ;
-(id)bestExitName;
-(id)bestEntranceName;
-(id)bestExitNameWithLocale:(out id*)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

