/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBPresentingDelegate <NSObject>
@optional
-(void)presentingController:(id)arg1 conflictingGestureDidBegin:(id)arg2;
-(void)presentingController:(id)arg1 conflictingGestureDidEnd:(id)arg2;

@required
-(char)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
-(void)presentingControllerDidFinishPresentation:(id)arg1;
-(char)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(void)presentingController:(id)arg1 willHandleGesture:(id)arg2;

@end

