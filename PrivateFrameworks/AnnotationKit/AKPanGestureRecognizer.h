/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@interface AKPanGestureRecognizer : UIPanGestureRecognizer {

	float _currentWeight;
	float _currentMaxWeight;
	CGPoint _locationOfFirstTouch;

}

@property (assign,nonatomic) float currentWeight;                       //@synthesize currentWeight=_currentWeight - In the implementation block
@property (assign,nonatomic) float currentMaxWeight;                    //@synthesize currentMaxWeight=_currentMaxWeight - In the implementation block
@property (assign,nonatomic) CGPoint locationOfFirstTouch;              //@synthesize locationOfFirstTouch=_locationOfFirstTouch - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setCurrentWeight:(float)arg1 ;
-(float)currentWeight;
-(void)setCurrentMaxWeight:(float)arg1 ;
-(void)setLocationOfFirstTouch:(CGPoint)arg1 ;
-(CGPoint)locationOfFirstTouch;
-(CGPoint)locationOfFirstTouchInView:(id)arg1 ;
-(float)currentMaxWeight;
@end

