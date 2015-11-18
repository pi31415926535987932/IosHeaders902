/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkStartupAnimation.h>

@class NSMutableArray, SBStarkLockOutView;

@interface SBUIStarkStartupToLockoutAnimation : SBUIStarkStartupAnimation {

	NSMutableArray* _viewsToSlideUp;
	SBStarkLockOutView* _toLockoutView;
	unsigned _significantAnimationsRemaining;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_slideUpViewsWithSlideFactory:(id)arg1 fadeFactory:(id)arg2 delayIncrement:(double)arg3 ;
-(void)_noteSignificantAnimationFinished;
-(void)_finishViewForSlideUp:(id)arg1 ;
-(id)initFromLockoutView:(id)arg1 toLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
@end

