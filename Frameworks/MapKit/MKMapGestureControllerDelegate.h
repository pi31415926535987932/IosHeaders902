/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKMapGestureControllerDelegate <NSObject>
@optional
-(double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;

@required
-(void)gestureControllerWillStartUserInteraction:(id)arg1;
-(void)gestureControllerWillStartPanning:(id)arg1;
-(void)gestureControllerDidStopUserInteraction:(id)arg1;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(char)arg2;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(char)arg2;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(char)arg3;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2;
-(void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
-(void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
-(void)gestureControllerWillStartRotating:(id)arg1;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(char)arg2;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
-(void)gestureControllerWillStartTilting:(id)arg1;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(char)arg2;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
-(char)gestureController:(id)arg1 shouldReceiveTouch:(id)arg2;

@end
