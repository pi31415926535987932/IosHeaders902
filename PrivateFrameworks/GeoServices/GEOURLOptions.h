/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOURLCamera, GEOURLCenterSpan, NSString, GEOURLRouteHandle, GEOURLTimePoint;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {

	GEOURLCamera* _camera;
	GEOURLCenterSpan* _centerSpan;
	int _mapType;
	NSString* _referralIdentifier;
	GEOURLRouteHandle* _routeHandle;
	GEOURLTimePoint* _timePoint;
	int _transportType;
	int _userTrackingMode;
	char _enableTraffic;
	SCD_Struct_GE6 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasEnableTraffic; 
@property (assign,nonatomic) char enableTraffic;                           //@synthesize enableTraffic=_enableTraffic - In the implementation block
@property (assign,nonatomic) char hasMapType; 
@property (assign,nonatomic) int mapType;                                  //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                            //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) char hasCenterSpan; 
@property (nonatomic,retain) GEOURLCenterSpan * centerSpan;                //@synthesize centerSpan=_centerSpan - In the implementation block
@property (nonatomic,readonly) char hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera;                        //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) char hasReferralIdentifier; 
@property (nonatomic,retain) NSString * referralIdentifier;                //@synthesize referralIdentifier=_referralIdentifier - In the implementation block
@property (assign,nonatomic) char hasUserTrackingMode; 
@property (assign,nonatomic) int userTrackingMode;                         //@synthesize userTrackingMode=_userTrackingMode - In the implementation block
@property (nonatomic,readonly) char hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle;              //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) char hasTimePoint; 
@property (nonatomic,retain) GEOURLTimePoint * timePoint;                  //@synthesize timePoint=_timePoint - In the implementation block
-(id)initWithLaunchOptions:(id)arg1 ;
-(id)launchOptions;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasRouteHandle;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(GEOURLRouteHandle *)routeHandle;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(char)hasTransportType;
-(void)setHasTransportType:(char)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(char)hasMapType;
-(void)setHasMapType:(char)arg1 ;
-(char)hasCamera;
-(void)setCenterSpan:(GEOURLCenterSpan *)arg1 ;
-(char)hasReferralIdentifier;
-(void)setHasEnableTraffic:(char)arg1 ;
-(NSString *)referralIdentifier;
-(void)setEnableTraffic:(char)arg1 ;
-(char)hasUserTrackingMode;
-(char)hasCenterSpan;
-(char)enableTraffic;
-(void)setTimePoint:(GEOURLTimePoint *)arg1 ;
-(void)setHasUserTrackingMode:(char)arg1 ;
-(void)setReferralIdentifier:(NSString *)arg1 ;
-(GEOURLTimePoint *)timePoint;
-(GEOURLCenterSpan *)centerSpan;
-(void)setUserTrackingMode:(int)arg1 ;
-(char)hasEnableTraffic;
-(int)userTrackingMode;
-(char)hasTimePoint;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(GEOURLCamera *)camera;
-(char)readFrom:(id)arg1 ;
@end
