/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCPlugTiming.h>

@interface MRLayerClock : NSObject <MCPlugTiming> {

	double _internalTimeOffset;
	double _externalTimeForPauseInversion;
	unsigned _flags;
	int _currentLoopIndex;
	double _externalTime;
	double _phaseInDuration;
	double _loopDuration;
	double _phaseOutDuration;
	double _numberOfLoops;
	double _containerTime;
	double _containerDuration;

}

@property (assign,nonatomic) double externalTime;                     //@synthesize externalTime=_externalTime - In the implementation block
@property (assign,nonatomic) double fullDuration; 
@property (assign,nonatomic) double containerTime;                    //@synthesize containerTime=_containerTime - In the implementation block
@property (nonatomic,readonly) double containerDuration;              //@synthesize containerDuration=_containerDuration - In the implementation block
@property (nonatomic,readonly) int currentLoopIndex;                  //@synthesize currentLoopIndex=_currentLoopIndex - In the implementation block
@property (readonly) char _isPaused; 
@property (nonatomic,readonly) char isPaused; 
@property (nonatomic,readonly) char jumpedBackInTime; 
@property (nonatomic,readonly) char isInPhaseIn; 
@property (nonatomic,readonly) char isInPhaseOut; 
@property (assign,nonatomic) char parentIsPaused; 
@property (readonly) char selfIsPaused; 
@property (assign,nonatomic) double phaseInDuration;                  //@synthesize phaseInDuration=_phaseInDuration - In the implementation block
@property (assign,nonatomic) double loopDuration;                     //@synthesize loopDuration=_loopDuration - In the implementation block
@property (assign,nonatomic) double phaseOutDuration;                 //@synthesize phaseOutDuration=_phaseOutDuration - In the implementation block
@property (assign,nonatomic) double numberOfLoops;                    //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
-(void)resumeAfter:(double)arg1 ;
-(char)parentIsPaused;
-(double)loopDuration;
-(char)isInPhaseIn;
-(void)reactivateWithPlug:(id)arg1 ;
-(void)setExternalTime:(double)arg1 ;
-(void)setLoopDuration:(double)arg1 ;
-(void)setContainerTime:(double)arg1 ;
-(void)resumeOnNextUpdate;
-(void)pauseOnNextUpdate;
-(void)setFullDuration:(double)arg1 ;
-(double)phaseInDuration;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)setParentIsPaused:(char)arg1 ;
-(char)jumpedBackInTime;
-(int)currentLoopIndex;
-(void)updateForExternalTime:(double)arg1 ;
-(id)initWithPlug:(id)arg1 ;
-(double)externalTime;
-(double)fullDuration;
-(char)selfIsPaused;
-(void)pauseAfter:(double)arg1 ;
-(double)containerDuration;
-(double)containerTime;
-(char)_isPaused;
-(char)isInPhaseOut;
-(void)syncToPlug:(id)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(char)isPaused;
-(void)deactivate;
@end

