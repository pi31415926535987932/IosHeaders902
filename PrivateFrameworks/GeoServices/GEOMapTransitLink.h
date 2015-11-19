/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol GEOMapTransitLink <GEOMapLine>
@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo; 
@required
-(id<GEOMapTransitStop>)stopFrom;
-(id<GEOMapTransitStop>)stopTo;
-(double)distanceInMetersFrom:(SCD_Struct_GE16)arg1 outClosestCoordinateOnLine:(SCD_Struct_GE16*)arg2;
-(NSString *)internalLineName;
-(unsigned)minimumTravelTime;
-(unsigned long long)transitLineID;

@end

