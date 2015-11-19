/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, NSTimer, NSDate, PLProgressArcLayer;

@interface PLRoundProgressView : UIView {

	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	CGPoint _pieCenter;
	float _pieRadius;
	NSTimer* _progressTimer;
	float _uiProgress;
	float _realProgress;
	float _increaseRate;
	NSDate* _prevUpdateTime;
	int _style;
	float _progress;
	PLProgressArcLayer* __progressArcLayer;
	float __contentsScale;

}

@property (nonatomic,readonly) int style;                                                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float progress;                                                                   //@synthesize progress=_progress - In the implementation block
@property (setter=_setProgressArcLayer:,nonatomic,retain) PLProgressArcLayer * _progressArcLayer;              //@synthesize _progressArcLayer=__progressArcLayer - In the implementation block
@property (assign,setter=_setContentsScale:,nonatomic) float _contentsScale;                                   //@synthesize _contentsScale=__contentsScale - In the implementation block
-(void)_setupSubviews;
-(void)startProgressTimer;
-(void)resetProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(int)style;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(float)progress;
-(void)stopProgressTimer;
-(void)_setContentsScale:(float)arg1 ;
-(void)_updateSublayersContentsScale;
-(float)_contentsScale;
-(PLProgressArcLayer *)_progressArcLayer;
-(void)setPieRadius:(float)arg1 ;
-(void)_setProgressArcLayer:(id)arg1 ;
-(void)_updateUIProgress;
-(void)increaseUIProgress:(id)arg1 ;
-(float)toRadian:(float)arg1 ;
-(void)recalculateIncreaseProgress:(float)arg1 withTimeDiff:(double)arg2 ;
-(void)setInitialIncreaseRatePerFrame:(float)arg1 ;
@end
