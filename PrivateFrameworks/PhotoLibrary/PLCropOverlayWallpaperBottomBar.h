/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLWallpaperButton, _UILegibilityLabel, UIView, _UIBackdropView;

@interface PLCropOverlayWallpaperBottomBar : UIView {

	char _motionToggleHidden;
	char _shouldOnlyShowLockScreenButton;
	char _shouldOnlyShowHomeScreenButton;
	PLWallpaperButton* _doCancelButton;
	PLWallpaperButton* _doSetButton;
	PLWallpaperButton* _doSetHomeScreenButton;
	PLWallpaperButton* _doSetLockScreenButton;
	PLWallpaperButton* _doSetBothScreenButton;
	PLWallpaperButton* _motionToggle;
	_UILegibilityLabel* _titleLabel;
	UIView* _separatorLine;
	_UIBackdropView* _backdropView;
	float _maxToggleWidth;

}

@property (nonatomic,retain,readonly) PLWallpaperButton * doCancelButton;                     //@synthesize doCancelButton=_doCancelButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetButton;                        //@synthesize doSetButton=_doSetButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetHomeScreenButton;              //@synthesize doSetHomeScreenButton=_doSetHomeScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetLockScreenButton;              //@synthesize doSetLockScreenButton=_doSetLockScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetBothScreenButton;              //@synthesize doSetBothScreenButton=_doSetBothScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * motionToggle;                       //@synthesize motionToggle=_motionToggle - In the implementation block
@property (assign,nonatomic) char motionToggleHidden;                                         //@synthesize motionToggleHidden=_motionToggleHidden - In the implementation block
@property (assign,nonatomic) char shouldOnlyShowLockScreenButton;                             //@synthesize shouldOnlyShowLockScreenButton=_shouldOnlyShowLockScreenButton - In the implementation block
@property (assign,nonatomic) char shouldOnlyShowHomeScreenButton;                             //@synthesize shouldOnlyShowHomeScreenButton=_shouldOnlyShowHomeScreenButton - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                          //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                  //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) float maxToggleWidth;                                            //@synthesize maxToggleWidth=_maxToggleWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(_UILegibilityLabel *)titleLabel;
-(void)setTitleLabel:(_UILegibilityLabel *)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)updateForChangedSettings:(id)arg1 ;
-(PLWallpaperButton *)doCancelButton;
-(PLWallpaperButton *)doSetHomeScreenButton;
-(PLWallpaperButton *)doSetLockScreenButton;
-(PLWallpaperButton *)doSetBothScreenButton;
-(PLWallpaperButton *)motionToggle;
-(PLWallpaperButton *)doSetButton;
-(void)setShouldOnlyShowHomeScreenButton:(char)arg1 ;
-(void)setShouldOnlyShowLockScreenButton:(char)arg1 ;
-(void)setMotionToggleHidden:(char)arg1 ;
-(char)motionToggleHidden;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
-(float)widthForToggleText;
-(void)setMaxToggleWidth:(float)arg1 ;
-(void)_commonPLCropOverlayWallpaperBottomBarInitialization;
-(void)_layoutSubviewsPad;
-(void)_layoutSubviewsPhone;
-(CGSize)_sizeForString:(id)arg1 ;
-(char)shouldOnlyShowLockScreenButton;
-(char)shouldOnlyShowHomeScreenButton;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(float)maxToggleWidth;
@end

