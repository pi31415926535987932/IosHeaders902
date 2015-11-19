/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTraits.h>
#import <libobjc.A.dylib/PSPINEntryViewDelegate.h>

@protocol PINEntryView;
@class UITransitionView, UIView, UIKeyboard, NSString;

@interface DevicePINPane : PSEditingPane <UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate> {

	UITransitionView* _transitionView;
	char _transitioning;
	UIView*<PINEntryView> _pinView;
	UIKeyboard* _keypad;
	char _keypadActive;
	int _autocapitalizationType;
	int _autocorrectionType;
	int _keyboardType;
	int _keyboardAppearance;
	char _playSound;
	char _isBlocked;
	char _simplePIN;
	char _numericKeyboard;
	unsigned _PINLength;
	/*^block*/id _passcodeOptionsHandler;

}

@property (assign,nonatomic) unsigned PINLength;                                         //@synthesize PINLength=_PINLength - In the implementation block
@property (nonatomic,copy) id passcodeOptionsHandler;                                    //@synthesize passcodeOptionsHandler=_passcodeOptionsHandler - In the implementation block
@property (nonatomic,retain) UIView*<PINEntryView> pinView;                              //@synthesize pinView=_pinView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType;                                 //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) int autocorrectionType;                                     //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType;                                           //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) int keyboardAppearance;                                     //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(id)password;
-(void)setPINLength:(unsigned)arg1 ;
-(unsigned)PINLength;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(void)transitionViewDidComplete:(id)arg1 ;
-(int)keyboardAppearance;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)isSecureTextEntry;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(char)requiresKeyboard;
-(id)specifierLabel;
-(void)deactivateKeypadView;
-(void)dismissKeypad;
-(void)showFailedAttempts:(long)arg1 ;
-(void)showError:(id)arg1 error:(id)arg2 isBlocked:(char)arg3 animate:(char)arg4 ;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(char)arg2 ;
-(char)simplePIN;
-(void)okButtonPressed;
-(void)slideToNewPasscodeField:(char)arg1 requiresKeyboard:(char)arg2 numericOnly:(char)arg3 transition:(int)arg4 showsOptionsButton:(char)arg5 ;
-(void)setPasscodeOptionsHandler:(id)arg1 ;
-(void)setSimplePIN:(char)arg1 requiresKeyboard:(char)arg2 numericOnly:(char)arg3 showsOptions:(char)arg4 ;
-(void)pinView:(id)arg1 pinValueChanged:(id)arg2 ;
-(void)pinView:(id)arg1 pinEntered:(id)arg2 ;
-(id)passcodeOptionsHandler;
-(void)_setPlaysKeyboardClicks:(char)arg1 ;
-(UIView*<PINEntryView>)pinView;
-(void)setPinView:(UIView*<PINEntryView>)arg1 ;
-(void)setKeyboardIsNumeric:(char)arg1 ;
-(void)_setKeypadState:(char)arg1 animated:(char)arg2 ;
-(void)setSimplePIN:(char)arg1 requiresKeyboard:(char)arg2 numericOnly:(char)arg3 ;
-(void)transitionToSimplePIN:(char)arg1 requiresKeyboard:(char)arg2 numericOnly:(char)arg3 showsOptions:(char)arg4 ;
-(void)activateKeypadView;
-(void)setKeyboardUserInteractionEnabled:(char)arg1 ;
-(void)slideToNewPasscodeField:(char)arg1 requiresKeyboard:(char)arg2 numericOnly:(char)arg3 ;
-(void)delayForTextEntryAnimationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSimplePIN:(char)arg1 requiresKeyboard:(char)arg2 ;
-(void)slideToNewPasscodeField:(char)arg1 withKeyboard:(char)arg2 ;
-(void)clearPassword;
@end

