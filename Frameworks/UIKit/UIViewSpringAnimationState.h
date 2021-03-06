/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewAnimationState.h>

@interface UIViewSpringAnimationState : UIViewAnimationState {

	float _mass;
	float _stiffness;
	float _damping;
	float _velocity;

}
+(id)defaultSpringAnimationForKey:(id)arg1 mass:(float)arg2 stiffness:(float)arg3 damping:(float)arg4 velocity:(float)arg5 ;
-(id)_defaultAnimationForKey:(id)arg1 ;
-(id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)generateSpringPropertiesForDuration:(float)arg1 damping:(float)arg2 velocity:(float)arg3 ;
@end

