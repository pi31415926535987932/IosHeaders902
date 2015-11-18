/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPUISearchPluginWrapperInterface
@property (assign,nonatomic) char needsStatusBarLayoutLayer; 
@property (assign,getter=isDisplayLayoutElementActive,nonatomic) char displayLayoutElementActive; 
@property (assign,nonatomic) char needsFakeStatusBarForModalPresentation; 
@required
-(double)_accessibilityActivationAnimationStartDelay;
-(void)requestGestureResetAnimated:(char)arg1;
-(void)searchViewControllerWillTriggerLaunch;
-(char)needsStatusBarLayoutLayer;
-(void)setNeedsStatusBarLayoutLayer:(char)arg1;
-(char)isDisplayLayoutElementActive;
-(void)setDisplayLayoutElementActive:(char)arg1;
-(char)needsFakeStatusBarForModalPresentation;
-(void)setNeedsFakeStatusBarForModalPresentation:(char)arg1;

@end

