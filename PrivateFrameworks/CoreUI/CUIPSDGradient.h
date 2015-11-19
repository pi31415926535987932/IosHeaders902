/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject {

	CUIPSDGradientEvaluator* evaluator;
	float drawingAngle;
	unsigned gradientStyle;

}

@property (retain) CUIPSDGradientEvaluator * evaluator; 
@property (assign) float drawingAngle; 
@property (assign) unsigned gradientStyle; 
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(float)arg4 style:(unsigned)arg5 ;
+(id)getMidpointLocationFromArray:(id)arg1 atIndex:(int)arg2 withPolicy:(int)arg3 ;
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(float)arg4 isRadial:(char)arg5 ;
-(void)dealloc;
-(CUIPSDGradientEvaluator *)evaluator;
-(unsigned)gradientStyle;
-(float)drawingAngle;
-(id)initWithEvaluator:(id)arg1 drawingAngle:(float)arg2 gradientStyle:(unsigned)arg3 ;
-(void)setEvaluator:(CUIPSDGradientEvaluator *)arg1 ;
-(void)setDrawingAngle:(float)arg1 ;
-(void)setGradientStyle:(unsigned)arg1 ;
@end

