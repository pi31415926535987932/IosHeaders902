/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBRemoteAlertAdapter, SBAppStatusBarSettingsAssertion, SBAlertManager, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationFadeRemoteAlertToApps : SBUIMainScreenAnimationController {

	SBRemoteAlertAdapter* _alert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBAlertManager* _alertManager;
	SBWindowSelfHostWrapper* _appContextHostWrapper;
	UIView* _alertContextHostView;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
-(void)_setHidden:(char)arg1 ;
@end

