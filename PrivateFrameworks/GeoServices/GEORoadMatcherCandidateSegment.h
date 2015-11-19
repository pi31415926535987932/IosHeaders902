/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEORoadMatcherCandidateSegment : NSObject {

	double _score;
	SCD_Struct_GE113* _feature;
	SCD_Struct_GE16 _coordinateOnSegment;
	double _distanceFromSegment;
	double _segmentAngle;
	SCD_Struct_GE152* _junction;
	double _distanceInMetersFromJunction;

}

@property (nonatomic,readonly) double score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE113* feature;                        //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE16 coordinateOnSegment;              //@synthesize coordinateOnSegment=_coordinateOnSegment - In the implementation block
@property (nonatomic,readonly) double distanceFromSegment;                       //@synthesize distanceFromSegment=_distanceFromSegment - In the implementation block
@property (nonatomic,readonly) double segmentAngle;                              //@synthesize segmentAngle=_segmentAngle - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE152* junction;                       //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) double distanceFromJunction;                      //@synthesize distanceInMetersFromJunction=_distanceInMetersFromJunction - In the implementation block
-(double)score;
-(void)dealloc;
-(SCD_Struct_GE16)coordinateOnSegment;
-(double)distanceFromJunction;
-(double)segmentAngle;
-(SCD_Struct_GE152*)junction;
-(id)initWithLocationCoordinate:(SCD_Struct_GE16)arg1 angle:(double)arg2 feature:(SCD_Struct_GE113*)arg3 startCoordinate:(SCD_Struct_GE16)arg4 endCoordinate:(SCD_Struct_GE16)arg5 startJunction:(SCD_Struct_GE152*)arg6 endJunction:(SCD_Struct_GE152*)arg7 startJunctionCoordinate:(SCD_Struct_GE16)arg8 endJunctionCoordinate:(SCD_Struct_GE16)arg9 roadHalfWidth:(double)arg10 ;
-(double)distanceFromSegment;
-(SCD_Struct_GE113*)feature;
@end

