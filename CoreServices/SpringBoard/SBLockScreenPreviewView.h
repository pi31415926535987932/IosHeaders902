/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIView, SBFLockScreenDateView, SBLegibilityView, UILabel, _UILegibilityLabel, SBFakeStatusBarView, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView {

	UIView* _wallpaperView;
	SBFLockScreenDateView* _dateView;
	SBLegibilityView* _cameraView;
	UILabel* _slideToUnlockView;
	_UILegibilityLabel* _slideToUnlockLegibilityLabel;
	SBFakeStatusBarView* _statusBar;
	_UILegibilitySettings* _legibilitySettings;

}
+(id)preview;
-(id)_legibilityPrototypeSettings;
-(void)_layoutSlideToUnlockView;
-(id)initWithFrame:(CGRect)arg1 legibilitySettings:(id)arg2 ;
-(void)_setupWallpaperView;
-(void)_setupDateView;
-(void)_setupSlideToUnlockView;
-(void)_setupCameraView;
-(void)_setupStatusBar;
-(void)_layoutStatusBar;
-(void)_layoutCameraView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_layoutDateView;
-(void)_layoutWallpaperView;
@end

