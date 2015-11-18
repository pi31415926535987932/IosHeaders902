/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBFakeBlurObserver.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBAppViewBackgroundView.h>

@protocol _SBFakeBlur;
@class UIColor, UIView, UIImageView, UIImage, NSString;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver, SBAppViewBackgroundView> {

	int _variant;
	UIColor* _wallpaperAverageColor;
	int _startStyle;
	int _endStyle;
	float _transitionFraction;
	UIView*<_SBFakeBlur> _blurView;
	UIView* _grayscaleTintView;
	UIView* _colorTintView;
	UIView*<_SBFakeBlur> _transitionBlurView;
	UIView* _transitionGrayscaleTintView;
	UIView* _transitionColorTintView;
	UIImageView* _maskImageView;
	UIView* _blurMaskingContainer;
	UIView* _tintMaskingContainer;
	UIImage* _maskImage;
	char _shouldMaskBlur;
	char _shouldMaskTint;
	char _fullscreen;
	char _forcesOpaque;
	char _accessibilityReduceTransparencyEnabled;

}

@property (assign,nonatomic) char fullscreen;                              //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) char forcesOpaque;                            //@synthesize forcesOpaque=_forcesOpaque - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasDiscreteWallpaperEffect; 
@property (assign,nonatomic) int wallpaperStyle; 
+(id)imageInRect:(CGRect)arg1 forVariant:(int)arg2 withStyle:(int)arg3 zoomFactor:(float)arg4 mask:(id)arg5 masksBlur:(char)arg6 masksTint:(char)arg7 ;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(int)wallpaperStyle;
-(void)setWallpaperStyle:(int)arg1 ;
-(void)setForcesOpaque:(char)arg1 ;
-(char)prepareToAnimateToTransitionState:(inout SCD_Struct_SB19*)arg1 ;
-(void)setTransitionState:(SCD_Struct_SB19)arg1 ;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(char)currentTransitionStateIsOpaque;
-(void)fakeBlurView:(id)arg1 didChangeStyle:(int)arg2 ;
-(char)fullscreen;
-(void)setMaskImage:(id)arg1 masksBlur:(char)arg2 masksTint:(char)arg3 ;
-(void)_configureFromScratch;
-(void)_setTransitionFraction:(float)arg1 ;
-(void)_configureForCurrentBlurStyle;
-(void)_updateWallpaperAverageColor:(id)arg1 ;
-(void)_clearView:(id*)arg1 ;
-(void)_configureGrayscaleTintView:(id*)arg1 colorTintView:(id*)arg2 forStyle:(int)arg3 ;
-(char)forcesOpaque;
-(void)setFullscreen:(char)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setAppearanceStorage:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(int)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(char)arg1 ;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)_setIsContainedInPopover:(char)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(char)arg2 ;
-(void)_configureViews;
-(id)initWithWallpaperVariant:(int)arg1 ;
@end

