/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <QuartzCore/CALayer.h>

@interface PLProgressArcLayer : CALayer {

	float _radius;
	float _startAngle;
	float _endAngle;
	float _lineWidth;

}

@property (assign,nonatomic) float radius;                  //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) float startAngle;              //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) float endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) float lineWidth;               //@synthesize lineWidth=_lineWidth - In the implementation block
-(id)init;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setStartAngle:(float)arg1 ;
-(float)startAngle;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setRadius:(float)arg1 ;
-(float)radius;
-(void)setEndAngle:(float)arg1 ;
-(float)endAngle;
@end

