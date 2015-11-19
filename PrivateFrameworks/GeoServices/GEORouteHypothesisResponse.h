/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEODirectionsResponse, GEOETAResponse;

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {

	double _updatedTimeStamp;
	GEODirectionsResponse* _directionsResponse;
	GEOETAResponse* _etaResponse;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasDirectionsResponse; 
@property (nonatomic,retain) GEODirectionsResponse * directionsResponse;              //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) char hasEtaResponse; 
@property (nonatomic,retain) GEOETAResponse * etaResponse;                            //@synthesize etaResponse=_etaResponse - In the implementation block
@property (assign,nonatomic) char hasUpdatedTimeStamp; 
@property (assign,nonatomic) double updatedTimeStamp;                                 //@synthesize updatedTimeStamp=_updatedTimeStamp - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOETAResponse *)etaResponse;
-(char)hasUpdatedTimeStamp;
-(char)hasDirectionsResponse;
-(double)updatedTimeStamp;
-(void)setUpdatedTimeStamp:(double)arg1 ;
-(void)setEtaResponse:(GEOETAResponse *)arg1 ;
-(GEODirectionsResponse *)directionsResponse;
-(char)hasEtaResponse;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(void)setHasUpdatedTimeStamp:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

