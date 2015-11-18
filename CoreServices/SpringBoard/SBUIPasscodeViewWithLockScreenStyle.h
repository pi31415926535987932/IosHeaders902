/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBUIPasscodeLockView;
@class UIView, _UIBackdropView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView {

	UIView*<SBUIPasscodeLockView> _passcodeView;
	_UIBackdropView* _blurView;
	float _blurRadius;
	char _blurEnabled;

}

@property (nonatomic,retain,readonly) UIView*<SBUIPasscodeLockView> passcodeView;              //@synthesize passcodeView=_passcodeView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 includeBlur:(char)arg2 passcodeViewGenerator:(/*^block*/id)arg3 ;
-(void)setBlurEnabled:(char)arg1 ;
-(UIView*<SBUIPasscodeLockView>)passcodeView;
-(void)dealloc;
-(void)layoutSubviews;
@end

