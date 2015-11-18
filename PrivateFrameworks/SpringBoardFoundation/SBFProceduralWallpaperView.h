/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 4:59:52 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>
#import <libobjc.A.dylib/SBFProceduralWallpaperDelegate.h>

@protocol SBFProceduralWallpaper;
@class NSDictionary, NSTimer, UIImage, NSString;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate> {

	id<SBFProceduralWallpaper> _proceduralWallpaper;
	NSDictionary* _options;
	NSTimer* _colorSampleTimer;
	int _thermalNotificationToken;
	char _pausedForThermalReasons;
	CAImageQueueRef _blurQueue;
	UIImage* _blur;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_allowsRasterization;
+(char)_allowsParallax;
-(void)dealloc;
-(void)layoutSubviews;
-(void)invalidate;
-(id)options;
-(void)setRotating:(char)arg1 ;
-(char)_isVisible;
-(id)_computeAverageColor;
-(void)_handleVariantChange;
-(id)_blurredImage;
-(void)_handleVisibilityChange;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(char)isDisplayingWallpaper:(id)arg1 forVariant:(int)arg2 options:(id)arg3 ;
-(char)needsImmediateLayoutBeforeRotation;
-(void)setContinuousColorSamplingEnabled:(char)arg1 ;
-(void)setWallpaperAnimationEnabled:(char)arg1 ;
-(void)_updateAnimating;
-(void)_updateSampleTimer;
-(char)_deviceMayRotate;
-(char)hasBeenInvalidated;
-(id)_newImageFromBlurSurface:(IOSurfaceRef)arg1 rect:(CGRect)arg2 ;
-(char)_shouldSampleContinuously;
-(void)_sample;
-(void)wallpaper:(id)arg1 didGenerateBlur:(IOSurfaceRef)arg2 forRect:(CGRect)arg3 ;
-(void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(CGRect)arg3 ;
-(id)initWithFrame:(CGRect)arg1 proceduralWallpaper:(id)arg2 options:(id)arg3 variant:(int)arg4 ;
@end

