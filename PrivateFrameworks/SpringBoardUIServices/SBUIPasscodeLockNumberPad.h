/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBNumberPadDelegate.h>

@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeNumberPadButton;
@class SBNumberPadWithDelegate, UIView, SBUIButton, UIControl, UIColor, NSArray, NSString;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate> {

	SBNumberPadWithDelegate* _numberPad;
	id<SBUIPasscodeLockNumberPadDelegate> _delegate;
	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _bottomPaddingView;
	SBUIButton* _emergencyCallButton;
	SBUIButton* _backspaceButton;
	SBUIButton* _cancelButton;
	UIControl*<SBUIPasscodeNumberPadButton> _downButton;
	char _showsBackspaceButton;
	char _showsEmergencyCallButton;
	char _showsCancelButton;
	UIColor* _customBackgroundColor;
	char _useLightStyle;

}

@property (assign,nonatomic) id<SBUIPasscodeLockNumberPadDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsBackspaceButton;                                       //@synthesize showsBackspaceButton=_showsBackspaceButton - In the implementation block
@property (assign,nonatomic) char showsEmergencyCallButton;                                   //@synthesize showsEmergencyCallButton=_showsEmergencyCallButton - In the implementation block
@property (assign,nonatomic) char showsCancelButton;                                          //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,retain) UIControl*<SBUIPasscodeNumberPadButton> downButton;              //@synthesize downButton=_downButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buttonForCharacter:(unsigned)arg1 withLightStyle:(char)arg2 ;
+(CGSize)_inputButtonCircleSize;
+(UIEdgeInsets)_inputButtonCircleSpacing;
-(void)setDelegate:(id<SBUIPasscodeLockNumberPadDelegate>)arg1 ;
-(void)dealloc;
-(id<SBUIPasscodeLockNumberPadDelegate>)delegate;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)setBackgroundAlpha:(float)arg1 ;
-(NSArray *)buttons;
-(void)setShowsEmergencyCallButton:(char)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)_setLuminosityBoost:(float)arg1 ;
-(char)showsEmergencyCallButton;
-(id)initWithDefaultSizeAndLightStyle:(char)arg1 ;
-(id)_fontForAncillaryButton;
-(void)_cancelButtonHit;
-(void)_backspaceButtonHit;
-(void)_emergencyCallButtonHit;
-(void)_configureAdditionalButtons;
-(void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2 ;
-(void)setDownButton:(UIControl*<SBUIPasscodeNumberPadButton>)arg1 ;
-(void)setShowsBackspaceButton:(char)arg1 ;
-(float)_distanceToTopOfFirstButton;
-(char)showsBackspaceButton;
-(UIControl*<SBUIPasscodeNumberPadButton>)downButton;
@end

