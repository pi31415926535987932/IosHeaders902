/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenBatteryChargingView.h>

@class UIView, _UIBackdropView, SBLockScreenBatteryFillView, _UILegibilityLabel, NSArray, NSLayoutConstraint;

@interface _SBLockScreenSingleBatteryChargingView : SBLockScreenBatteryChargingView {

	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	SBLockScreenBatteryFillView* _batteryFillView;
	_UILegibilityLabel* _chargePercentLabel;
	NSArray* _batteryConstraints;
	NSLayoutConstraint* _batteryTopOffset;

}
-(void)setPrimaryChargePercentage:(int)arg1 isCharging:(char)arg2 detailed:(char)arg3 ;
-(char)batteryVisible;
-(void)setBatteryVisible:(char)arg1 ;
-(double)desiredVisibilityDuration;
-(id)_chargePercentFont;
-(float)_chargingTextBaselineOffset;
-(float)_batteryBaseline;
-(float)_batteryNoseOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_prepareConstraints;
@end
