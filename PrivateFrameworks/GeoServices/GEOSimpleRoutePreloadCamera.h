/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEORoutePreloadCamera.h>

@class NSString;

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera> {

	unsigned _zoomLevel;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)zoomLevel;
-(id)initWithZoomLevel:(unsigned)arg1 ;
-(void)implicateTilesForCoordinate:(SCD_Struct_GE16)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(char)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 ;
@end

