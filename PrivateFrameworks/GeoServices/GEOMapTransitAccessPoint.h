/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOMapTransitAccessPoint <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
@required
-(unsigned char)entranceExitType;
-(unsigned short)accessType;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)stationID;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(double)groundRadius;

@end

