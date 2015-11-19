/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocation, GEOAddress, GEOMapRegion, GEOLatLng;

@interface GEOMapItemBuilder : NSObject {

	SCD_Struct_GE3 _has;
	GEOLocation* _location;
	int _referenceFrame;
	GEOAddress* _address;
	GEOMapRegion* _mapRegion;
	GEOLatLng* _latlng;

}

@property (nonatomic,retain) GEOLocation * location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int referenceFrame;                    //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,retain) GEOAddress * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) GEOMapRegion * mapRegion;              //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) GEOLatLng * latlng;                    //@synthesize latlng=_latlng - In the implementation block
+(id)buildWithSetterBlock:(/*^block*/id)arg1 ;
-(GEOAddress *)address;
-(void)dealloc;
-(id)init;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setReferenceFrame:(int)arg1 ;
-(int)referenceFrame;
-(void)setAddress:(GEOAddress *)arg1 ;
-(GEOLatLng *)latlng;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(id)build;
@end
