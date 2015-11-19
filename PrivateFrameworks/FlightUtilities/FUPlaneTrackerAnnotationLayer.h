/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface FUPlaneTrackerAnnotationLayer : CALayer {

	CALayer* _planeImageLayer;
	SCD_Struct_FU1 _startLocation;
	SCD_Struct_FU1 _endLocation;

}

@property (assign,nonatomic) SCD_Struct_FU1 startLocation;                  //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) SCD_Struct_FU1 endLocation;                    //@synthesize endLocation=_endLocation - In the implementation block
@property (assign,nonatomic) float currentProgress; 
@property (readonly) SCD_Struct_FU1 currentLocation; 
@property (assign,nonatomic,__weak) CALayer * planeImageLayer;              //@synthesize planeImageLayer=_planeImageLayer - In the implementation block
+(char)needsDisplayForKey:(id)arg1 ;
-(SCD_Struct_FU1)endLocation;
-(void)setEndLocation:(SCD_Struct_FU1)arg1 ;
-(id)init;
-(void)display;
-(id)actionForKey:(id)arg1 ;
-(void)setStartLocation:(SCD_Struct_FU1)arg1 ;
-(SCD_Struct_FU1)startLocation;
-(void)updatePlaneStateForProgress:(float)arg1 ;
-(void)setPlaneImage:(id)arg1 ;
-(CALayer *)planeImageLayer;
-(void)setPlaneImageLayer:(CALayer *)arg1 ;
-(SCD_Struct_FU1)geodesicLocationForStartPosition:(SCD_Struct_FU1)arg1 endPosition:(SCD_Struct_FU1)arg2 positionPercentage:(float)arg3 ;
-(float)defaultHeadingForStartPosition:(SCD_Struct_FU1)arg1 endPosition:(SCD_Struct_FU1)arg2 positionPercentage:(float)arg3 ;
-(SCD_Struct_FU1)currentLocation;
@end

