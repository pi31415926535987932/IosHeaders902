/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CMKExpandableMenuButtonDelegate.h>

@protocol CMKBottomBarDelegate;
@class UIView, CMKModeDial, CMKImageWell, CMKShutterButton, CMKFilterButton, CMKFlipButton, CMKElapsedTimeView, CMKHDRButton, CMKTimerButton, CMKSlalomIndicatorView, UIButton, CMKExpandableMenuButton;

@interface CMKBottomBar : UIView <CMKExpandableMenuButtonDelegate> {

	char __HDRButtonExpanded;
	char __timerButtonExpanded;
	id<CMKBottomBarDelegate> _delegate;
	int _orientation;
	int _backgroundStyle;
	UIView* _backgroundView;
	CMKModeDial* _modeDial;
	CMKImageWell* _imageWell;
	CMKShutterButton* _stillDuringVideoButton;
	CMKShutterButton* _shutterButton;
	CMKFilterButton* _filterButton;
	CMKFlipButton* _flipButton;
	CMKElapsedTimeView* _elapsedTimeView;
	CMKHDRButton* _HDRButton;
	CMKTimerButton* _timerButton;
	CMKSlalomIndicatorView* _slalomIndicatorView;
	UIButton* _cancelButton;
	CMKExpandableMenuButton* __expandedMenuButton;
	UIView* __shutterButtomBottomLayoutSpacer;
	UIView* __imageWellBottomLayoutSpacer;
	UIView* __filterButtonBottomLayoutSpacer;
	UIView* __slalomIndicatorBottomLayoutSpacer;
	UIView* __stillDuringVideoButtonBottomLayoutSpacer;
	UIView* __elapsedTimeViewCenteringLayoutSpacer;
	UIView* __hdrButtonCenteringLayoutSpacer;

}

@property (assign,nonatomic,__weak) id<CMKBottomBarDelegate> delegate;                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int orientation;                                                                                      //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int backgroundStyle;                                                                                  //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CMKModeDial * modeDial;                                                                               //@synthesize modeDial=_modeDial - In the implementation block
@property (nonatomic,retain) CMKImageWell * imageWell;                                                                             //@synthesize imageWell=_imageWell - In the implementation block
@property (nonatomic,retain) CMKShutterButton * stillDuringVideoButton;                                                            //@synthesize stillDuringVideoButton=_stillDuringVideoButton - In the implementation block
@property (nonatomic,retain) CMKShutterButton * shutterButton;                                                                     //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CMKFilterButton * filterButton;                                                                       //@synthesize filterButton=_filterButton - In the implementation block
@property (nonatomic,retain) CMKFlipButton * flipButton;                                                                           //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CMKElapsedTimeView * elapsedTimeView;                                                                 //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CMKHDRButton * HDRButton;                                                                             //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CMKTimerButton * timerButton;                                                                         //@synthesize timerButton=_timerButton - In the implementation block
@property (nonatomic,retain) CMKSlalomIndicatorView * slalomIndicatorView;                                                         //@synthesize slalomIndicatorView=_slalomIndicatorView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                                              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (setter=_setExpandedMenuButton:,nonatomic,retain) CMKExpandableMenuButton * _expandedMenuButton;                         //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (assign,setter=_setHDRButtonExpanded:,getter=_isHDRButtonExpanded,nonatomic) char _HDRButtonExpanded;                    //@synthesize _HDRButtonExpanded=__HDRButtonExpanded - In the implementation block
@property (assign,setter=_setTimerButtonExpanded:,getter=_isTimerButtonExpanded,nonatomic) char _timerButtonExpanded;              //@synthesize _timerButtonExpanded=__timerButtonExpanded - In the implementation block
@property (nonatomic,readonly) UIView * _shutterButtomBottomLayoutSpacer;                                                          //@synthesize _shutterButtomBottomLayoutSpacer=__shutterButtomBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _imageWellBottomLayoutSpacer;                                                              //@synthesize _imageWellBottomLayoutSpacer=__imageWellBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _filterButtonBottomLayoutSpacer;                                                           //@synthesize _filterButtonBottomLayoutSpacer=__filterButtonBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _slalomIndicatorBottomLayoutSpacer;                                                        //@synthesize _slalomIndicatorBottomLayoutSpacer=__slalomIndicatorBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _stillDuringVideoButtonBottomLayoutSpacer;                                                 //@synthesize _stillDuringVideoButtonBottomLayoutSpacer=__stillDuringVideoButtonBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _elapsedTimeViewCenteringLayoutSpacer;                                                     //@synthesize _elapsedTimeViewCenteringLayoutSpacer=__elapsedTimeViewCenteringLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _hdrButtonCenteringLayoutSpacer;                                                           //@synthesize _hdrButtonCenteringLayoutSpacer=__hdrButtonCenteringLayoutSpacer - In the implementation block
+(char)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CMKBottomBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CMKBottomBarDelegate>)delegate;
-(void)setOrientation:(int)arg1 ;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 ;
-(int)orientation;
-(UIView *)backgroundView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)updateConstraints;
-(void)setBackgroundStyle:(int)arg1 animated:(char)arg2 ;
-(void)_updateBackgroundStyleAnimated:(char)arg1 ;
-(void)_commonCMKBottomBarInitialization;
-(void)_removeAllConstraints;
-(void)_updateImageWellInsetsForOrientation;
-(UIView *)_shutterButtomBottomLayoutSpacer;
-(UIView *)_imageWellBottomLayoutSpacer;
-(UIView *)_filterButtonBottomLayoutSpacer;
-(CMKSlalomIndicatorView *)slalomIndicatorView;
-(UIView *)_slalomIndicatorBottomLayoutSpacer;
-(UIView *)_stillDuringVideoButtonBottomLayoutSpacer;
-(void)_setupHorizontalBackgroundViewConstraints;
-(void)_setupHorizontalModeDialConstraints;
-(void)_setupHorizontalShutterButtonConstraints;
-(void)_setupHorizontalImageWellConstraints;
-(void)_setupHorizontalFilterButtonConstraints;
-(void)_setupHorizontalSlalomIndicatorConstraints;
-(void)_setupHorizontalStillDuringVideoButtonConstraints;
-(void)_setupHorizontalCancelButtonConstraints;
-(UIView *)_elapsedTimeViewCenteringLayoutSpacer;
-(void)_setupVerticalBackgroundViewConstraints;
-(void)_setupVerticalFlipButtonConstraints;
-(void)_setupVerticalElapsedTimeViewConstraints;
-(void)_setupVerticalShutterButtonConstraints;
-(void)_setupVerticalModeDialConstraints;
-(void)_setupVerticalImageWellConstraints;
-(void)_setupVerticalSlalomIndicatorConstraints;
-(void)_setupVerticalCancelButtonConstraints;
-(void)_setupHorizontalConstraints;
-(void)_setupVerticalConstraints;
-(void)_layoutForHorizontalOrientation;
-(void)_layoutForVerticalOrientation;
-(void)_updateHiddenViewsForButtonExpansionAnimated:(char)arg1 ;
-(char)_shouldHideElapsedTimeView;
-(char)_shouldHideHDRButton;
-(char)_shouldHideFlipButton;
-(char)_shouldHideTimerButton;
-(char)_isTimerButtonExpanded;
-(char)_isHDRButtonExpanded;
-(void)_setTimerButtonExpanded:(char)arg1 ;
-(void)_setHDRButtonExpanded:(char)arg1 ;
-(id)initWithOrientation:(int)arg1 ;
-(void)setSlalomIndicatorView:(CMKSlalomIndicatorView *)arg1 ;
-(UIView *)_hdrButtonCenteringLayoutSpacer;
-(CMKImageWell *)imageWell;
-(CMKShutterButton *)stillDuringVideoButton;
-(CMKModeDial *)modeDial;
-(CMKFilterButton *)filterButton;
-(CMKElapsedTimeView *)elapsedTimeView;
-(CMKFlipButton *)flipButton;
-(id)_currentMenuButtons;
-(CMKExpandableMenuButton *)_expandedMenuButton;
-(void)_layoutMenuButtons:(id)arg1 apply:(char)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(CGRect)expandedFrameForMenuButton:(id)arg1 ;
-(CMKHDRButton *)HDRButton;
-(CMKTimerButton *)timerButton;
-(CGRect)collapsedFrameForMenuButton:(id)arg1 ;
-(void)_setExpandedMenuButton:(id)arg1 ;
-(void)collapseMenuButton:(id)arg1 animated:(char)arg2 ;
-(void)expandMenuButton:(id)arg1 animated:(char)arg2 ;
-(void)setStillDuringVideoButton:(CMKShutterButton *)arg1 ;
-(void)setModeDial:(CMKModeDial *)arg1 ;
-(void)setImageWell:(CMKImageWell *)arg1 ;
-(void)setFilterButton:(CMKFilterButton *)arg1 ;
-(void)setFlipButton:(CMKFlipButton *)arg1 ;
-(void)setElapsedTimeView:(CMKElapsedTimeView *)arg1 ;
-(void)setHDRButton:(CMKHDRButton *)arg1 ;
-(void)setTimerButton:(CMKTimerButton *)arg1 ;
-(CMKShutterButton *)shutterButton;
-(void)setShutterButton:(CMKShutterButton *)arg1 ;
@end

