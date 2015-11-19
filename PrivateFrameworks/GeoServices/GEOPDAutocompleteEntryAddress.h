/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _opaqueGeoId;
	GEOLatLng* _center;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) char hasOpaqueGeoId; 
@property (assign,nonatomic) unsigned long long opaqueGeoId;                 //@synthesize opaqueGeoId=_opaqueGeoId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasCenter;
-(PBUnknownFields *)unknownFields;
-(void)setOpaqueGeoId:(unsigned long long)arg1 ;
-(void)setHasOpaqueGeoId:(char)arg1 ;
-(unsigned long long)opaqueGeoId;
-(char)hasOpaqueGeoId;
-(char)readFrom:(id)arg1 ;
@end

