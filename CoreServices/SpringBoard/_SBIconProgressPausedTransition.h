/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressPausedTransition : _SBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	char _toPaused;
	float _fraction;

}
+(id)newTransitionToPaused:(char)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateToPaused:(char)arg1 ;
-(char)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(void)_updateView:(id)arg1 ;
-(id)_initToPaused:(char)arg1 ;
-(void)_updateTimingFunction;
-(void)_updateElapsedTimeFromFraction;
-(void)dealloc;
@end

