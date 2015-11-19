/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TKVibrationRecorderViewDelegate <NSObject>
@required
-(void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
-(void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
-(void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
-(void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
-(char)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
-(void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
-(void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;

@end

