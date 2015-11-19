/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MREffect.h>

@class NSMutableDictionary, NSMutableArray, NSArray, MRImage, MRCAMLBezierData, MROrigamiAnimationPath;

@interface MREffectOrigami : MREffect {

	NSMutableDictionary* mSprites;
	NSMutableArray* mSpriteKeysWatcher;
	NSArray* mAnimationTimeBounds;
	NSMutableArray* mItemInfos;
	double mDurationStretchFactor;
	MRImage* mBackColorImage;
	float mBackColorForImage[3];
	float mDescriptionAspectRatio;
	float mPixelUnit;
	char mIsOrigami2Effect;
	char mIsHorizontal;
	char mIsOriginallyHorizontal;
	MRCAMLBezierData* mBreakCurve;
	MROrigamiAnimationPath* mLittleSwing;
	MROrigamiAnimationPath* mBigSwing;
	MROrigamiAnimationPath* mSideSwing;
	MROrigamiAnimationPath* mThirdsSwingTop;
	MROrigamiAnimationPath* mThirdsSwingBottom;
	SCD_Struct_MR20* mBreakInfos;
	unsigned mTotalNumberOfFolds;
	NSMutableDictionary* _offsetsForTransitions;
	char _needsToUpdateSizes;

}
+(char)hasCustomTiming;
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(float)arg5 ;
+(void)initialize;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(char)_checkPanoramaAbsoluteSizeForImage:(id)arg1 inRect:(CGRect*)arg2 ;
-(char)_needsRenderingAtTime:(double)arg1 remainingStillDurationAfter:(double*)arg2 ;
-(void)renderFold4LeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderStillAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)render1To3DownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipDiagonalAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderUnfoldingFlowerAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)_renderFallImage:(id)arg1 atProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 :(CGPoint*)arg7 :(CGPoint)arg8 ;
-(void)_renderFallBreakImage:(id)arg1 atProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 :(CGPoint*)arg7 :(CGPoint)arg8 ;
-(void)_setupBreakInfos:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderFallAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFallBreakAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFall2AtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderBreakAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipLeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipDownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFoldLeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFoldDownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)render1To3LeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(id)_retainedByUserBackColorImageInContext:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2 ;
-(char)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(char)arg4 ;
-(char)hasMoreSlidesFromTime:(double)arg1 backwards:(char)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(void)_setupSwingTimings;
-(void)_cleanupSwingTimings;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_setTargetSizeOfImageProviders;
-(void)_cleanup;
-(void)updateSizes;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_unload;
@end

