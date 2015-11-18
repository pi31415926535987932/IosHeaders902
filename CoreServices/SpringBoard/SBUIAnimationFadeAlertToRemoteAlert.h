/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, SBRemoteAlertAdapter, SBMainAlertManager, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationFadeAlertToRemoteAlert : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	SBRemoteAlertAdapter* _remoteAlert;
	SBMainAlertManager* _alertManager;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	char _initialFakeStatusBarNeeded;
	double _animationDuration;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end
