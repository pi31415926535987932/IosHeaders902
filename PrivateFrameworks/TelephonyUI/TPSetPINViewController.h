/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TPSimpleNumberPadDelegate.h>

@protocol TPSetPINViewControllerDelegate;
@class NSString, UIView, UILabel, TPPasscodeView, TPSimpleNumberPad;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate> {

	char _confirmPIN;
	id<TPSetPINViewControllerDelegate> _delegate;
	NSString* _promptTextForOldPIN;
	NSString* _promptTextForNewPIN;
	NSString* _promptTextForConfirmingNewPIN;
	NSString* _promptTextForSavingPIN;
	UIView* _customBackgroundView;
	int _initialState;
	int _state;
	unsigned _minPINLength;
	unsigned _maxPINLength;
	UILabel* _statusLabel;
	TPPasscodeView* _passcodeView;
	TPSimpleNumberPad* _numberPad;
	NSString* _oldPIN;
	NSString* _unconfirmedPIN;

}

@property (assign) id<TPSetPINViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * promptTextForOldPIN;                        //@synthesize promptTextForOldPIN=_promptTextForOldPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForNewPIN;                        //@synthesize promptTextForNewPIN=_promptTextForNewPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForConfirmingNewPIN;              //@synthesize promptTextForConfirmingNewPIN=_promptTextForConfirmingNewPIN - In the implementation block
@property (nonatomic,retain) NSString * promptTextForSavingPIN;                     //@synthesize promptTextForSavingPIN=_promptTextForSavingPIN - In the implementation block
@property (retain) UIView * customBackgroundView;                                   //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
@property (assign) int initialState;                                                //@synthesize initialState=_initialState - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign) unsigned minPINLength;                                           //@synthesize minPINLength=_minPINLength - In the implementation block
@property (assign) unsigned maxPINLength;                                           //@synthesize maxPINLength=_maxPINLength - In the implementation block
@property (assign) char confirmPIN;                                                 //@synthesize confirmPIN=_confirmPIN - In the implementation block
@property (retain) UILabel * statusLabel;                                           //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) TPPasscodeView * passcodeView;                                   //@synthesize passcodeView=_passcodeView - In the implementation block
@property (retain) TPSimpleNumberPad * numberPad;                                   //@synthesize numberPad=_numberPad - In the implementation block
@property (retain) NSString * oldPIN;                                               //@synthesize oldPIN=_oldPIN - In the implementation block
@property (retain) NSString * unconfirmedPIN;                                       //@synthesize unconfirmedPIN=_unconfirmedPIN - In the implementation block
-(TPPasscodeView *)passcodeView;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(UIView *)customBackgroundView;
-(void)setDelegate:(id<TPSetPINViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TPSetPINViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)loadView;
-(char)wantsFullScreenLayout;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)_cancelButtonTapped;
-(void)setMinPINLength:(unsigned)arg1 ;
-(void)setMaxPINLength:(unsigned)arg1 ;
-(void)setConfirmPIN:(char)arg1 ;
-(id)_initForMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(char)arg3 ;
-(void)setInitialState:(int)arg1 ;
-(void)setNumberPad:(TPSimpleNumberPad *)arg1 ;
-(void)setPasscodeView:(TPPasscodeView *)arg1 ;
-(int)initialState;
-(void)_updateUIForStateChange;
-(void)resetWithErrorPrompt:(id)arg1 title:(id)arg2 ;
-(NSString *)promptTextForOldPIN;
-(void)_updateStatusLabel;
-(NSString *)promptTextForNewPIN;
-(NSString *)promptTextForConfirmingNewPIN;
-(NSString *)promptTextForSavingPIN;
-(void)setOldPIN:(NSString *)arg1 ;
-(char)confirmPIN;
-(void)setUnconfirmedPIN:(NSString *)arg1 ;
-(NSString *)oldPIN;
-(NSString *)unconfirmedPIN;
-(unsigned)maxPINLength;
-(void)_updateDeleteAllowed;
-(void)_updateNavBarButtons;
-(TPSimpleNumberPad *)numberPad;
-(unsigned)minPINLength;
-(void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2 ;
-(void)simpleNumberPadDeletePressed:(id)arg1 ;
-(id)initForNewPINWithMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(char)arg3 ;
-(id)initForChangePINWithMinLength:(unsigned)arg1 maxLength:(unsigned)arg2 confirmPIN:(char)arg3 ;
-(void)resetWithErrorPrompt:(id)arg1 ;
-(void)setPromptTextForOldPIN:(NSString *)arg1 ;
-(void)setPromptTextForNewPIN:(NSString *)arg1 ;
-(void)setPromptTextForConfirmingNewPIN:(NSString *)arg1 ;
-(void)setPromptTextForSavingPIN:(NSString *)arg1 ;
-(void)_doneButtonTapped;
@end

