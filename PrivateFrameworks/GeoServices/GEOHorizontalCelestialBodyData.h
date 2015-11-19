/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHorizontalCelestialBodyData : NSObject {

	double _altitude;
	double _azimuth;

}

@property (nonatomic,readonly) double altitude;              //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double azimuth;               //@synthesize azimuth=_azimuth - In the implementation block
-(double)altitude;
-(void)_calcuateAzimuthandAltitudeForCoordinate:(SCD_Struct_GE16)arg1 julianDay:(double)arg2 eclipticLongitude:(double)arg3 eclipticLatitude:(double)arg4 radius:(double)arg5 ;
-(double)azimuth;
-(id)initWithLocation:(SCD_Struct_GE16)arg1 date:(id)arg2 body:(int)arg3 ;
@end

