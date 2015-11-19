/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <ToneKit/TKVibrationRecorderRippleView.h>

@protocol TKVibrationRecorderTouchSurfaceDelegate;
@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView {

	char _recordingModeEnabled;
	char _shouldIgnoreCurrentTouch;
	char _replayModeEnabled;
	id<TKVibrationRecorderTouchSurfaceDelegate> _delegate;
	TKVibrationRecorderTouchSurfaceRecordedDataWrapper* _recordedDataWrapper;
	TLVibrationPattern* _vibrationPatternToReplay;
	double _vibrationPatternMaximumDuration;
	double _replayModeWasEnteredStartTime;

}

@property (assign,nonatomic) id<TKVibrationRecorderTouchSurfaceDelegate> delegate;                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setRecordingModeEnabled:,getter=_isRecordingModeEnabled,nonatomic) char _recordingModeEnabled;                             //@synthesize recordingModeEnabled=_recordingModeEnabled - In the implementation block
@property (assign,setter=_setVibrationPatternMaximumDuration:,nonatomic) double _vibrationPatternMaximumDuration;                                    //@synthesize vibrationPatternMaximumDuration=_vibrationPatternMaximumDuration - In the implementation block
@property (setter=_setRecordedDataWrapper:,nonatomic,retain) TKVibrationRecorderTouchSurfaceRecordedDataWrapper * _recordedDataWrapper;              //@synthesize recordedDataWrapper=_recordedDataWrapper - In the implementation block
@property (assign,setter=_setShouldIgnoreCurrentTouch:,nonatomic) char _shouldIgnoreCurrentTouch;                                                    //@synthesize shouldIgnoreCurrentTouch=_shouldIgnoreCurrentTouch - In the implementation block
@property (assign,setter=_setReplayModeEnabled:,getter=_isReplayModeEnabled,nonatomic) char _replayModeEnabled;                                      //@synthesize replayModeEnabled=_replayModeEnabled - In the implementation block
@property (setter=_setVibrationPatternToReplay:,nonatomic,retain) TLVibrationPattern * _vibrationPatternToReplay;                                    //@synthesize vibrationPatternToReplay=_vibrationPatternToReplay - In the implementation block
@property (assign,setter=_setReplayModeWasEnteredStartTime:,nonatomic) double _replayModeWasEnteredStartTime;                                        //@synthesize replayModeWasEnteredStartTime=_replayModeWasEnteredStartTime - In the implementation block
-(void)setDelegate:(id<TKVibrationRecorderTouchSurfaceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TKVibrationRecorderTouchSurfaceDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)enterReplayModeWithVibrationPattern:(id)arg1 ;
-(void)enterRecordingMode;
-(void)exitReplayMode;
-(void)_setVibrationPatternMaximumDuration:(double)arg1 ;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2 ;
-(void)exitRecordingMode;
-(char)_isReplayModeEnabled;
-(void)_setReplayModeEnabled:(char)arg1 ;
-(double)_vibrationPatternMaximumDuration;
-(void)currentVibrationComponentShouldEnd;
-(void)_setRecordedDataWrapper:(id)arg1 ;
-(void)_setVibrationPatternToReplay:(id)arg1 ;
-(char)_isRecordingModeEnabled;
-(void)_setShouldIgnoreCurrentTouch:(char)arg1 ;
-(void)_recordTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 ;
-(char)_shouldIgnoreCurrentTouch;
-(void)_setRecordingModeEnabled:(char)arg1 ;
-(TKVibrationRecorderTouchSurfaceRecordedDataWrapper *)_recordedDataWrapper;
-(void)_setReplayModeWasEnteredStartTime:(double)arg1 ;
-(void)_updateTouchLocationForReplayMode:(id)arg1 ;
-(double)_replayModeWasEnteredStartTime;
-(TLVibrationPattern *)_vibrationPatternToReplay;
@end

