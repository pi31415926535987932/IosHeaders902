/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOComposedRouteStep, NSString, MKRouteStepPolyline, MKPolyline;

@interface MKRouteStep : NSObject {

	GEOComposedRouteStep* _geoComposedRouteStep;
	NSString* _instructions;
	unsigned _transportType;
	MKRouteStepPolyline* _polyline;

}

@property (nonatomic,readonly) NSString * instructions;                                                               //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSString * notice; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                                 //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) unsigned transportType;                                                                //@synthesize transportType=_transportType - In the implementation block
@property (getter=_geoComposedRouteStep,nonatomic,readonly) GEOComposedRouteStep * geoComposedRouteStep;              //@synthesize geoComposedRouteStep=_geoComposedRouteStep - In the implementation block
-(MKPolyline *)polyline;
-(id)_geoComposedRouteStep;
-(id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned)arg3 polyline:(id)arg4 ;
-(NSString *)instructions;
-(unsigned)transportType;
-(NSString *)notice;
-(double)distance;
@end

