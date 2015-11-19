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

@class GEOLatLng;

@interface GEOLocation : PBCodable <NSCopying> {

	double _course;
	double _courseAccuracy;
	double _heading;
	double _horizontalAccuracy;
	double _speed;
	double _speedAccuracy;
	double _timestamp;
	unsigned long long _transitID;
	double _verticalAccuracy;
	int _altitude;
	GEOLatLng* _latLng;
	int _referenceFrame;
	int _type;
	char _isMatchedLocation;
	char _isShifted;
	SCD_Struct_GE58 _has;

}

@property (assign,nonatomic) char hasCourseAccuracy; 
@property (assign,nonatomic) double courseAccuracy; 
@property (assign,nonatomic) char hasSpeedAccuracy; 
@property (assign,nonatomic) double speedAccuracy; 
@property (assign,nonatomic) char hasIsMatchedLocation; 
@property (assign,nonatomic) char isMatchedLocation; 
@property (assign,nonatomic) char hasIsShifted; 
@property (assign,nonatomic) char isShifted; 
@property (assign,nonatomic) char hasTransitID; 
@property (assign,nonatomic) unsigned long long transitID; 
@property (assign,nonatomic) char hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) char hasAccurateCourse; 
@property (nonatomic,retain) GEOLatLng * latLng;                        //@synthesize latLng=_latLng - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasAltitude; 
@property (assign,nonatomic) int altitude;                              //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) char hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;                 //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) char hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                   //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) char hasSpeed; 
@property (assign,nonatomic) double speed;                              //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) char hasHeading; 
@property (assign,nonatomic) double heading;                            //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) char hasCourse; 
@property (assign,nonatomic) double course;                             //@synthesize course=_course - In the implementation block
+(id)locationWithCLLocation:(id)arg1 course:(double)arg2 ;
-(id)initWithCLLocation:(id)arg1 ;
-(id)initWithCLLocation:(id)arg1 course:(double)arg2 ;
-(id)initWithCLLocation:(id)arg1 useMatchInfo:(char)arg2 ;
-(id)_initWithCLClientLocation:(const SCD_Struct_GE59*)arg1 ;
-(SCD_Struct_GE16)coordinate;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(double)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(char)isShifted;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIsShifted:(char)arg1 ;
-(void)setAltitude:(int)arg1 ;
-(void)setHasCourseAccuracy:(char)arg1 ;
-(void)setCourseAccuracy:(double)arg1 ;
-(char)hasTimestamp;
-(void)setIsShifted:(char)arg1 ;
-(char)hasCourseAccuracy;
-(void)setHasSpeed:(char)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned long long)transitID;
-(GEOLatLng *)latLng;
-(char)hasIsShifted;
-(char)hasIsMatchedLocation;
-(double)course;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(char)hasReferenceFrame;
-(char)hasHeading;
-(char)hasAltitude;
-(void)setHasIsMatchedLocation:(char)arg1 ;
-(void)setHasHeading:(char)arg1 ;
-(void)setHasAltitude:(char)arg1 ;
-(double)courseAccuracy;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setHasReferenceFrame:(char)arg1 ;
-(void)setHeading:(double)arg1 ;
-(char)hasTransitID;
-(void)setHasType:(char)arg1 ;
-(char)isMatchedLocation;
-(char)hasCourse;
-(char)hasSpeedAccuracy;
-(void)setHasTransitID:(char)arg1 ;
-(char)hasHorizontalAccuracy;
-(void)setHasHorizontalAccuracy:(char)arg1 ;
-(void)setHasCourse:(char)arg1 ;
-(double)heading;
-(int)referenceFrame;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setIsMatchedLocation:(char)arg1 ;
-(void)setCourse:(double)arg1 ;
-(void)setSpeedAccuracy:(double)arg1 ;
-(double)speedAccuracy;
-(char)hasVerticalAccuracy;
-(int)altitude;
-(void)setHasSpeedAccuracy:(char)arg1 ;
-(void)setHasVerticalAccuracy:(char)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setTransitID:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(id)initWithGEOCoordinate:(SCD_Struct_GE16)arg1 ;
-(char)hasAccurateCourse;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
-(char)hasSpeed;
@end
