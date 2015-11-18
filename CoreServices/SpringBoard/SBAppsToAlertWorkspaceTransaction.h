/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class NSArray, SBWorkspaceAlert, SBUIAnimationController, FBDisplayLayoutTransition, NSString;

@interface SBAppsToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {

	NSArray* _topApplications;
	SBWorkspaceAlert* _activatingAlert;
	SBUIAnimationController* _animation;
	/*^block*/id _alertActivationBlock;
	char _animatedAppDeactivation;
	FBDisplayLayoutTransition* _layoutTransition;
	char _deferAlertActivationForAnimationCompletion;

}

@property (nonatomic,copy) id alertActivationBlock;                 //@synthesize alertActivationBlock=_alertActivationBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(char)_isFromMainSwitcher;
-(void)_activateAlert;
-(void)_updateSceneLayout;
-(id)alertActivationBlock;
-(void)setAlertActivationBlock:(id)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)_willBegin;
-(void)_didComplete;
-(void)_begin;
@end

