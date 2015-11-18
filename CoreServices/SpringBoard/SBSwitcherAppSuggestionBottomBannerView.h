/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBSwitcherAppSuggestionBottomBannerViewDelegate;
@class SBBestAppSuggestion, SBWallpaperEffectView, _UIBackdropView, NSArray, SBAppSwitcherSettings, UIView, UILabel, SBSlideUpAppGrabberView;

@interface SBSwitcherAppSuggestionBottomBannerView : UIView {

	SBBestAppSuggestion* _suggestion;
	SBWallpaperEffectView* _fakeWallpaperView;
	_UIBackdropView* _blurWallpaperView;
	NSArray* _blurViewConstraints;
	SBAppSwitcherSettings* _settings;
	UIView* _contentView;
	UILabel* _appLabel;
	UILabel* _descriptionLabel;
	SBSlideUpAppGrabberView* _iconView;
	char _usesFakeBlur;
	id<SBSwitcherAppSuggestionBottomBannerViewDelegate> _delegate;
	unsigned _style;

}

@property (assign,nonatomic) id<SBSwitcherAppSuggestionBottomBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char usesFakeBlur;                                                         //@synthesize usesFakeBlur=_usesFakeBlur - In the implementation block
@property (nonatomic,retain,readonly) SBBestAppSuggestion * representedAppSuggestion; 
@property (nonatomic,readonly) unsigned style;                                                          //@synthesize style=_style - In the implementation block
+(float)extraBottomLayoutMargin;
-(void)_configureWallpaperView;
-(void)_createAppLabelForSuggestion:(id)arg1 ;
-(void)_createDescriptionLabelForSuggestion:(id)arg1 ;
-(void)_createIconViewForSuggestion:(id)arg1 ;
-(void)_configureConstraints;
-(id)initWithFrame:(CGRect)arg1 appSuggestion:(id)arg2 style:(unsigned)arg3 ;
-(void)_configureIconBackgroundView;
-(char)_isSingleLine;
-(id)_backdropSettings;
-(id)_appTitleForSuggestion:(id)arg1 ;
-(id)_descriptionStringForSuggestion:(id)arg1 ;
-(void)_configureLabelForVibrancy:(id)arg1 ;
-(id)_firstWakeGreetingString;
-(id)_meCardShortName;
-(void)setUsesFakeBlur:(char)arg1 ;
-(SBBestAppSuggestion *)representedAppSuggestion;
-(char)usesFakeBlur;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SBSwitcherAppSuggestionBottomBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SBSwitcherAppSuggestionBottomBannerViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)style;
-(id)_labelFont;
@end

