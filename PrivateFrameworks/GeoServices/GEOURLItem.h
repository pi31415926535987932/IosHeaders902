/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {

	GEOMapItemStorage* _mapItemStorage;
	GEOPlace* _place;
	char _currentLocation;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasPlace; 
@property (nonatomic,retain) GEOPlace * place;                                //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) char hasCurrentLocation; 
@property (assign,nonatomic) char currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) char hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
-(id)mapItem;
-(void)setMapItem:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPlace *)place;
-(void)setPlace:(GEOPlace *)arg1 ;
-(char)hasPlace;
-(char)hasMapItemStorage;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(char)currentLocation;
-(void)setHasCurrentLocation:(char)arg1 ;
-(void)setCurrentLocation:(char)arg1 ;
-(char)hasCurrentLocation;
-(char)readFrom:(id)arg1 ;
@end

