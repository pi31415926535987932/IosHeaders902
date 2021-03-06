/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MSCLProximityObserver.h>

@protocol MSCLSoundBiteViewDelegate;
@class UIView, MSCLSoundBiteViewButton, UIImageView, UIButton, UILabel, CMKShutterButton, MSCLWaveformImageProducer, NSString;

@interface MSCLSoundBiteView : UIView <MSCLProximityObserver> {

	UIView* _backgroundView;
	id<MSCLSoundBiteViewDelegate> _delegate;
	char _detectedFaceProximity;
	MSCLSoundBiteViewButton* _explicitToggleButton;
	char _isExplicit;
	char _isObservingProximity;
	int _mode;
	float _playbackProgress;
	UIImageView* _playbackProgressImageView;
	UIButton* _playButton;
	UILabel* _promptLabel;
	UILabel* _promptExplicitLabel;
	UIButton* _recordButton;
	float _recordingTimeLabelWidth;
	CMKShutterButton* _stopRecordingIndicator;
	UILabel* _timeLabel;
	UIView* _waveformBackgroundView;
	MSCLWaveformImageProducer* _waveformImageProducer;
	UIImageView* _waveformImageView;

}

@property (assign,nonatomic,__weak) id<MSCLSoundBiteViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isExplicit;                                            //@synthesize isExplicit=_isExplicit - In the implementation block
@property (assign,nonatomic) int mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float playbackProgress;                                     //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,copy) NSString * promptString; 
@property (nonatomic,copy) NSString * timeString; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)playbackProgress;
-(void)setPlaybackProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MSCLSoundBiteViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MSCLSoundBiteViewDelegate>)delegate;
-(void)tintColorDidChange;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setIsExplicit:(char)arg1 ;
-(char)isExplicit;
-(void)_playButtonAction:(id)arg1 ;
-(void)proximityCoordinatorStateDidChange:(id)arg1 ;
-(void)setExplictButtonTitle:(id)arg1 ;
-(void)setExplictPromptString:(id)arg1 ;
-(void)reserveSpaceForRecordingTimes:(int)arg1 timeFormat:(id)arg2 ;
-(void)setTimeString:(NSString *)arg1 ;
-(void)setWaveformImageUsingProducer:(id)arg1 ;
-(void)_recordButtonTouchDown:(id)arg1 ;
-(void)_recordButtonTouchUp:(id)arg1 ;
-(void)_toggleExplicit:(id)arg1 ;
-(char)_showsPlaybackProgress;
-(void)_sendFaceProximityDidEnd;
-(void)_sendFaceProximityDidBegin;
-(NSString *)timeString;
-(void)setPromptString:(NSString *)arg1 ;
-(NSString *)promptString;
@end

