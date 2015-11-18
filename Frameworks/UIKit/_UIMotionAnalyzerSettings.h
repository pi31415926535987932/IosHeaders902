/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings {

	char _showIdleIndicator;
	char _jumpEnabled;
	char _playJumpSound;
	char _directionalLockEnabled;
	char _showDirectionalLockIndicators;
	char _referenceShiftEnabled;
	float _inputSmoothingFactor;
	float _referenceShiftSpeed;
	float _idleLeeway;
	float _delayBeforeIdle;
	float _jumpThreshold;
	float _directionalLockThreshold;
	float _directionalLockStickiness;
	float _directionalLockSharpness;
	float _referenceShiftDistanceDependence;

}

@property (assign) float inputSmoothingFactor;                          //@synthesize inputSmoothingFactor=_inputSmoothingFactor - In the implementation block
@property (assign) float referenceShiftSpeed;                           //@synthesize referenceShiftSpeed=_referenceShiftSpeed - In the implementation block
@property (assign) float idleLeeway;                                    //@synthesize idleLeeway=_idleLeeway - In the implementation block
@property (assign) float delayBeforeIdle;                               //@synthesize delayBeforeIdle=_delayBeforeIdle - In the implementation block
@property (assign) char showIdleIndicator;                              //@synthesize showIdleIndicator=_showIdleIndicator - In the implementation block
@property (assign) char jumpEnabled;                                    //@synthesize jumpEnabled=_jumpEnabled - In the implementation block
@property (assign) float jumpThreshold;                                 //@synthesize jumpThreshold=_jumpThreshold - In the implementation block
@property (assign) char playJumpSound;                                  //@synthesize playJumpSound=_playJumpSound - In the implementation block
@property (assign) char directionalLockEnabled;                         //@synthesize directionalLockEnabled=_directionalLockEnabled - In the implementation block
@property (assign) float directionalLockThreshold;                      //@synthesize directionalLockThreshold=_directionalLockThreshold - In the implementation block
@property (assign) float directionalLockStickiness;                     //@synthesize directionalLockStickiness=_directionalLockStickiness - In the implementation block
@property (assign) float directionalLockSharpness;                      //@synthesize directionalLockSharpness=_directionalLockSharpness - In the implementation block
@property (assign) char showDirectionalLockIndicators;                  //@synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators - In the implementation block
@property (assign) char referenceShiftEnabled;                          //@synthesize referenceShiftEnabled=_referenceShiftEnabled - In the implementation block
@property (assign) float referenceShiftDistanceDependence;              //@synthesize referenceShiftDistanceDependence=_referenceShiftDistanceDependence - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setDefaultValues;
-(void)setDirectionalLockEnabled:(char)arg1 ;
-(char)directionalLockEnabled;
-(float)directionalLockStickiness;
-(float)directionalLockThreshold;
-(float)directionalLockSharpness;
-(float)inputSmoothingFactor;
-(char)referenceShiftEnabled;
-(float)referenceShiftSpeed;
-(float)referenceShiftDistanceDependence;
-(char)jumpEnabled;
-(float)jumpThreshold;
-(char)playJumpSound;
-(float)idleLeeway;
-(float)delayBeforeIdle;
-(char)showIdleIndicator;
-(char)showDirectionalLockIndicators;
-(void)setInputSmoothingFactor:(float)arg1 ;
-(void)setReferenceShiftEnabled:(char)arg1 ;
-(void)setReferenceShiftSpeed:(float)arg1 ;
-(void)setReferenceShiftDistanceDependence:(float)arg1 ;
-(void)setIdleLeeway:(float)arg1 ;
-(void)setDelayBeforeIdle:(float)arg1 ;
-(void)setShowIdleIndicator:(char)arg1 ;
-(void)setJumpEnabled:(char)arg1 ;
-(void)setJumpThreshold:(float)arg1 ;
-(void)setPlayJumpSound:(char)arg1 ;
-(void)setDirectionalLockThreshold:(float)arg1 ;
-(void)setDirectionalLockStickiness:(float)arg1 ;
-(void)setDirectionalLockSharpness:(float)arg1 ;
-(void)setShowDirectionalLockIndicators:(char)arg1 ;
@end

