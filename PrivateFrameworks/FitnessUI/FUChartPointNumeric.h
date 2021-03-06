/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FUChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface FUChartPointNumeric : NSObject <FUChartPoint> {

	NSDate* _xValue;
	NSNumber* _yValue;

}

@property (nonatomic,retain) NSNumber * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * xValue;                       //@synthesize xValue=_xValue - In the implementation block
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(NSString *)description;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 ;
-(float)yValueFloatRepresentation;
-(NSNumber *)yValue;
-(NSDate *)xValue;
-(id)allYValues;
-(id)yValueForKey:(id)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
-(void)setXValue:(NSDate *)arg1 ;
@end

