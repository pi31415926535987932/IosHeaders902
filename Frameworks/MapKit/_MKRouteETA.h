/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _MKRouteETA : NSObject {

	unsigned _transportType;
	double _distance;
	double _travelTime;
	double _responseTime;

}

@property (assign,nonatomic) double distance;                     //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double travelTime;                   //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) unsigned transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) double responseTime;               //@synthesize responseTime=_responseTime - In the implementation block
+(id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned)arg3 ;
-(void)setTransportType:(unsigned)arg1 ;
-(unsigned)transportType;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(double)responseTime;
-(double)distance;
-(void)setDistance:(double)arg1 ;
@end

