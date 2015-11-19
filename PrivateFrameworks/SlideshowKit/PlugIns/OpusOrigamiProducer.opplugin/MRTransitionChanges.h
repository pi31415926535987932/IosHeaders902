/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MRLayer, MCTransitionTrigger, MRGesturePanZoomRotation;

@interface MRTransitionChanges : NSObject {

	double startTime;
	double duration;
	char isBackwards;
	MRLayer* _currentSublayer;
	MRLayer* _nextSublayer;
	MCTransitionTrigger* _transition;
	MRGesturePanZoomRotation* _pzr;

}

@property (retain) MRLayer * currentSublayer;                     //@synthesize currentSublayer=_currentSublayer - In the implementation block
@property (retain) MRLayer * nextSublayer;                        //@synthesize nextSublayer=_nextSublayer - In the implementation block
@property (retain) MCTransitionTrigger * transition;              //@synthesize transition=_transition - In the implementation block
@property (retain) MRGesturePanZoomRotation * pzr;                //@synthesize pzr=_pzr - In the implementation block
-(MRLayer *)nextSublayer;
-(MRGesturePanZoomRotation *)pzr;
-(void)setPzr:(MRGesturePanZoomRotation *)arg1 ;
-(void)setCurrentSublayer:(MRLayer *)arg1 ;
-(void)setNextSublayer:(MRLayer *)arg1 ;
-(MRLayer *)currentSublayer;
-(void)dealloc;
-(void)setTransition:(MCTransitionTrigger *)arg1 ;
-(MCTransitionTrigger *)transition;
@end

