/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKWidgetContentEffect.h>

@class OKPanGenerator, CABasicAnimation, NSString;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect {

	OKPanGenerator* _panGenerator;
	CABasicAnimation* _translationXAnimation;
	CABasicAnimation* _translationYAnimation;
	CABasicAnimation* _scaleAnimation;
	float _fromScale;
	float _toScale;
	float _fromX;
	float _toX;
	float _fromY;
	float _toY;
	float _panningCropThreshold;
	double _beginTime;
	NSString* _timingFunction;
	double _speedMitigator;
	double _durationPadding;
	float _panningAmount;
	char _animationIsUnderway;
	double _animationProgressAtStateChange;
	double _animationResumeTime;

}
+(id)supportedSettings;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)stopAnimation;
-(void)startAnimation;
-(id)settingObjectForKey:(id)arg1 ;
-(void)applySettings;
-(void)prepareContentEffectWithView:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(double)remainingPlayDuration;
-(float)_croppedFractionforRectAspectRatio:(float)arg1 photoAspectRatio:(float)arg2 ;
-(void)_applyGeometryForStart:(char)arg1 ;
-(double)_fullDuration;
-(void)_setupAnimation;
@end

