/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, UIResponder, UIInputViewController, UIKeyboard;

@interface UIInputViewSet : NSObject {

	UIView* _inputView;
	UIView* _inputAccessoryView;
	UIView* _inputAssistantView;
	char _isSplit;
	float _splitHeightDelta;
	UIResponder* _restorableResponder;
	UIResponder* _accessoryViewNextResponder;
	char _restoreUsingBecomeFirstResponder;
	char _isNullInputView;
	char _isCustomInputView;
	char _isRemoteKeyboard;
	UIInputViewController* _inputViewController;
	UIInputViewController* _assistantViewController;
	UIInputViewController* _accessoryViewController;
	CGRect _inputAssistantViewBounds;

}

@property (nonatomic,readonly) UIKeyboard * keyboard; 
@property (nonatomic,retain) UIView * inputView;                                           //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                  //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * inputAssistantView;                                  //@synthesize inputAssistantView=_inputAssistantView - In the implementation block
@property (nonatomic,retain) UIInputViewController * inputViewController;                  //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * assistantViewController;              //@synthesize assistantViewController=_assistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,readonly) CGRect inputAccessoryViewBounds; 
@property (nonatomic,readonly) CGRect inputAssistantViewBounds;                            //@synthesize inputAssistantViewBounds=_inputAssistantViewBounds - In the implementation block
@property (nonatomic,readonly) CGRect inputViewBounds; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (nonatomic,readonly) char supportsSplit; 
@property (nonatomic,readonly) char isSplit;                                               //@synthesize isSplit=_isSplit - In the implementation block
@property (nonatomic,readonly) char inputViewKeyboardCanSplit; 
@property (assign,nonatomic,__weak) UIResponder * restorableResponder;                     //@synthesize restorableResponder=_restorableResponder - In the implementation block
@property (assign,nonatomic) UIResponder * accessoryViewNextResponder;                     //@synthesize accessoryViewNextResponder=_accessoryViewNextResponder - In the implementation block
@property (nonatomic,readonly) char isInputViewPlaceholder; 
@property (nonatomic,readonly) char isInputAssistantViewPlaceholder; 
@property (nonatomic,readonly) char isInputAccessoryViewPlaceholder; 
@property (nonatomic,readonly) char _inputViewIsSplit; 
@property (assign,nonatomic) float splitHeightDelta;                                       //@synthesize splitHeightDelta=_splitHeightDelta - In the implementation block
@property (nonatomic,readonly) UIView * splitExemptSubview; 
@property (assign,nonatomic) char restoreUsingBecomeFirstResponder; 
@property (assign,nonatomic) char isCustomInputView;                                       //@synthesize isCustomInputView=_isCustomInputView - In the implementation block
@property (assign,nonatomic) char isRemoteKeyboard;                                        //@synthesize isRemoteKeyboard=_isRemoteKeyboard - In the implementation block
@property (nonatomic,readonly) char isNullInputView;                                       //@synthesize isNullInputView=_isNullInputView - In the implementation block
@property (nonatomic,readonly) UIView * layeringView; 
+(id)emptyInputSet;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
+(id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isSplit;
-(char)isEmpty;
-(char)visible;
-(char)containsView:(id)arg1 ;
-(UIInputViewController *)accessoryViewController;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(UIInputViewController *)inputViewController;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)setInputView:(UIView *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(UIKeyboard *)keyboard;
-(char)_inputViewIsSplit;
-(float)splitHeightDelta;
-(UIView *)inputAssistantView;
-(char)isCustomInputView;
-(CGRect)inputViewBounds;
-(CGRect)inputAssistantViewBounds;
-(CGRect)inputAccessoryViewBounds;
-(char)supportsSplit;
-(void)refreshPresentation;
-(char)_isFullscreen;
-(id)_themableInputAccessoryView;
-(int)keyboardOrientation:(id)arg1 ;
-(char)inputViewKeyboardCanSplit;
-(char)_accessorySuppressesShadow;
-(UIView *)layeringView;
-(CGRect)_leftInputViewSetFrame;
-(CGRect)_rightInputViewSetFrame;
-(void)setSplitHeightDelta:(float)arg1 ;
-(char)setAccessoryViewVisible:(char)arg1 delay:(float)arg2 ;
-(void)_beginSplitTransitionIfNeeded;
-(void)_setSplitProgress:(float)arg1 ;
-(void)_endSplitTransitionIfNeeded;
-(char)isStrictSupersetOfViewSet:(id)arg1 ;
-(char)isInputViewPlaceholder;
-(char)containsResponder:(id)arg1 ;
-(id)_splittableInputAccessoryView;
-(id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1 ;
-(id)normalisePlaceholders;
-(char)canAnimateToInputViewSet:(id)arg1 ;
-(char)isInputAssistantViewPlaceholder;
-(char)isNullInputView;
-(char)isRemoteKeyboard;
-(void)setIsCustomInputView:(char)arg1 ;
-(void)setIsRemoteKeyboard:(char)arg1 ;
-(void)setInputViewController:(UIInputViewController *)arg1 ;
-(void)setAssistantViewController:(UIInputViewController *)arg1 ;
-(void)setAccessoryViewController:(UIInputViewController *)arg1 ;
-(char)usesKeyClicks;
-(void)setRestorableResponder:(UIResponder *)arg1 ;
-(void)setRestoreUsingBecomeFirstResponder:(char)arg1 ;
-(UIResponder *)restorableResponder;
-(void)setAccessoryViewNextResponder:(UIResponder *)arg1 ;
-(UIResponder *)accessoryViewNextResponder;
-(char)restoreUsingBecomeFirstResponder;
-(char)_inputViewSetSupportsSplit;
-(id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(char)arg4 ;
-(void)setInputAssistantView:(UIView *)arg1 ;
-(UIInputViewController *)assistantViewController;
-(char)_inputViewIsVisible;
-(char)_isKeyboard;
-(char)_inputAccessoryViewSupportsSplit;
-(char)_inputViewSupportsSplit;
-(char)_actLikeInputAccessoryViewSupportsSplit;
-(char)__isCKAccessoryView;
-(void)setAssistantBarVisible:(char)arg1 delay:(float)arg2 animated:(char)arg3 ;
-(void)setKeyboardAssistantBar:(id)arg1 ;
-(id)inputSetWithInputAccessoryViewOnly;
-(UIView *)splitExemptSubview;
-(char)inSyncWithOrientation:(int)arg1 forKeyboard:(id)arg2 ;
-(char)isInputAccessoryViewPlaceholder;
@end
