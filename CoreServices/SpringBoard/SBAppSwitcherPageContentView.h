/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBAppSwitcherPageContentView <NSObject>
@optional
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)viewPresenting:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4;
-(void)viewDismissing:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4;
-(void)updateTransitionProgress:(float)arg1;
-(void)interactionDidEnd:(char)arg1;
-(void)transitionDidEnd:(char)arg1 forPresentation:(char)arg2;

@required
-(void)invalidate;
-(void)setCornerRadius:(float)arg1;
-(float)cornerRadius;

@end

