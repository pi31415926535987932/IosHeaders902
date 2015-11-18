/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:34 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation

@property (assign) float mass; 
@property (assign) float stiffness; 
@property (assign) float damping; 
@property (assign) float initialVelocity; 
@property (readonly) double settlingDuration; 
+(id)defaultValueForKey:(id)arg1 ;
-(float)stiffness;
-(void)setInitialVelocity:(float)arg1 ;
-(float)initialVelocity;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(double)settlingDuration;
-(void)setVelocity:(float)arg1 ;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(float)velocity;
-(float)damping;
-(float)mass;
-(double)_timeFunction:(double)arg1 ;
-(double)durationForEpsilon:(double)arg1 ;
@end

