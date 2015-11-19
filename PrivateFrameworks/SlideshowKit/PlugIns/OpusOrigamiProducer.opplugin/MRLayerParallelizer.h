/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLayer.h>

@class MCContainerParallelizer, NSMutableArray, NSMutableDictionary, NSArray;

@interface MRLayerParallelizer : MRLayer {

	MCContainerParallelizer* mContainer;
	NSMutableArray* mSublayers;
	NSMutableDictionary* mSublayersForPlugs;
	float mBackgroundColor[4];
	char mNeedsToUpdateSublayersOrdering;
	char mNeedsToUpdateBackgroundColor;

}

@property (readonly) NSArray * sublayers; 
@property (assign) const float* backgroundColor; 
-(id)sublayerForKey:(id)arg1 ;
-(void)_observePlug;
-(char)isLoadedForTime:(double)arg1 ;
-(void)_setNeedsToRequestRebuildAudio:(char)arg1 ;
-(void)_unobserveSublayer:(id)arg1 ;
-(void)_deleteSublayer:(id)arg1 ;
-(void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2 ;
-(void)_unobserveSublayerOnDepreactivate:(id)arg1 ;
-(char)_isMadeOpaqueBySublayers;
-(void)_executeLayerCommandQueue;
-(void)_observeSublayerOnPreactivate:(id)arg1 ;
-(void)_updateSublayersOrdering;
-(void)_observeSublayer:(id)arg1 ;
-(char)isInInteractiveMode;
-(void)setIsInInteractiveMode:(char)arg1 ;
-(char)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(char)arg4 ;
-(char)hasMoreSlidesFromTime:(double)arg1 backwards:(char)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(id)_createSublayerForPlug:(id)arg1 ;
-(id)currentSlideInfos;
-(id)_dumpLayerWithOptions:(unsigned)arg1 ;
-(void)setSublayer:(id)arg1 forKey:(id)arg2 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(char)isAlphaFriendly;
-(id)sublayerForPlugObjectID:(id)arg1 recursive:(char)arg2 ;
-(id)currentSlideInfoForElement:(id)arg1 ;
-(id)sublayerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(char)arg2 localPoint:(CGPoint*)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasSlides;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_unobservePlugOnDepreactivate;
-(void)_observePlugOnPreactivate;
-(void)setNeedsUpdateForPluggerOfSublayer:(id)arg1 ;
-(void)_unobservePlug;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasSomethingToRender;
-(void)depreactivate:(char)arg1 ;
-(double)phaseInSublayerForKey:(id)arg1 ;
-(double)phaseOutSublayerForKey:(id)arg1 ;
-(void)endMorphing;
-(void)preactivate;
-(void)synchronizeTime;
-(id)_currentState;
-(void)setBackgroundColor:(const float*)arg1 ;
-(const float*)backgroundColor;
-(void)setDuration:(double)arg1 ;
-(char)isOpaque;
-(NSArray *)sublayers;
-(void)deactivate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
-(id)initWithParameters:(id)arg1 ;
-(char)hasAudio;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isInfinite;
-(void)removeSublayer:(id)arg1 ;
@end

