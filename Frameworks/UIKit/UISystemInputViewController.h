/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol UITextInput;
@class NSMutableDictionary, UIResponder, UIKeyboard, NSArray, UIInputViewController, UIKBSystemLayoutViewController, UIButton, UIViewController, NSLayoutConstraint, UIView;

@interface UISystemInputViewController : UIViewController {

	NSMutableDictionary* _accessoryViewControllers;
	NSMutableDictionary* _accessoryConstraints;
	char _needsSetupAgain;
	char _isVisible;
	char _supportsTouchInput;
	char _isAutomaticResponderTransition;
	char _willPresentFullscreen;
	UIResponder*<UITextInput> _persistentDelegate;
	UIKeyboard* _keyboard;
	NSArray* _keyboardConstraints;
	UIInputViewController* _keyboardVC;
	NSArray* _editorConstraints;
	UIKBSystemLayoutViewController* _editorVC;
	UIButton* _doneButton;
	UIViewController* _inputVC;
	NSLayoutConstraint* _verticalAlignment;
	NSLayoutConstraint* _horizontalAlignment;
	UIResponder*<UITextInput> _nextInputDelegate;
	UIView* _containingView;
	UIView* _contentLayoutView;

}

@property (nonatomic,retain) UIResponder*<UITextInput> persistentDelegate;              //@synthesize persistentDelegate=_persistentDelegate - In the implementation block
@property (assign,nonatomic) char supportsTouchInput;                                   //@synthesize supportsTouchInput=_supportsTouchInput - In the implementation block
@property (assign,nonatomic) char isAutomaticResponderTransition;                       //@synthesize isAutomaticResponderTransition=_isAutomaticResponderTransition - In the implementation block
@property (assign,nonatomic) char willPresentFullscreen;                                //@synthesize willPresentFullscreen=_willPresentFullscreen - In the implementation block
@property (nonatomic,retain) UIView * containingView;                                   //@synthesize containingView=_containingView - In the implementation block
@property (nonatomic,retain) UIView * contentLayoutView;                                //@synthesize contentLayoutView=_contentLayoutView - In the implementation block
@property (nonatomic,retain) UIKeyboard * keyboard;                                     //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,retain) NSArray * keyboardConstraints;                             //@synthesize keyboardConstraints=_keyboardConstraints - In the implementation block
@property (nonatomic,retain) UIInputViewController * keyboardVC;                        //@synthesize keyboardVC=_keyboardVC - In the implementation block
@property (nonatomic,retain) NSArray * editorConstraints;                               //@synthesize editorConstraints=_editorConstraints - In the implementation block
@property (nonatomic,retain) UIKBSystemLayoutViewController * editorVC;                 //@synthesize editorVC=_editorVC - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIViewController * inputVC;                                //@synthesize inputVC=_inputVC - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalAlignment;                    //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalAlignment;                  //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> nextInputDelegate;               //@synthesize nextInputDelegate=_nextInputDelegate - In the implementation block
+(id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 ;
+(char)canUseSystemInputViewControllerForResponder:(id)arg1 ;
+(id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 ;
-(void)dealloc;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedItem;
-(char)_disableAutomaticKeyboardBehavior;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)updateViewConstraints;
-(UIKeyboard *)keyboard;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(char)supportsTouchInput;
-(void)setPersistentDelegate:(UIResponder*<UITextInput>)arg1 ;
-(void)setWillPresentFullscreen:(char)arg1 ;
-(void)setIsAutomaticResponderTransition:(char)arg1 ;
-(void)setContainingView:(UIView *)arg1 ;
-(void)setEditorVC:(UIKBSystemLayoutViewController *)arg1 ;
-(void)setInputVC:(UIViewController *)arg1 ;
-(void)populateCoreHierarchy;
-(void)findNextInputDelegate;
-(id)doneButtonStringForCurrentInputDelegate;
-(void)_returnButtonPressed;
-(void)setAccessoryViewController:(id)arg1 forEdge:(int)arg2 ;
-(id)_accessoryViewControllerForEdge:(int)arg1 ;
-(void)_dismissSystemInputViewController;
-(void)setDoneButton:(UIButton *)arg1 ;
-(id)alignmentConstraintForAxis:(int)arg1 ;
-(UIView *)contentLayoutView;
-(UIInputViewController *)keyboardVC;
-(UIView *)containingView;
-(void)setContentLayoutView:(UIView *)arg1 ;
-(char)willPresentFullscreen;
-(void)setAlignmentConstraint:(id)arg1 forAxis:(int)arg2 ;
-(UIViewController *)inputVC;
-(void)_addAccessoryViewController:(id)arg1 ;
-(void)setKeyboard:(UIKeyboard *)arg1 ;
-(void)setKeyboardVC:(UIInputViewController *)arg1 ;
-(UIKBSystemLayoutViewController *)editorVC;
-(UIResponder*<UITextInput>)nextInputDelegate;
-(UIResponder*<UITextInput>)persistentDelegate;
-(void)setNextInputDelegate:(UIResponder*<UITextInput>)arg1 ;
-(void)inputModeDidChange:(id)arg1 ;
-(UIButton *)doneButton;
-(void)setupKeyboard;
-(NSArray *)keyboardConstraints;
-(id)constraintFromView:(id)arg1 attribute:(int)arg2 toView:(id)arg3 attribute:(int)arg4 ;
-(void)setKeyboardConstraints:(NSArray *)arg1 ;
-(NSArray *)editorConstraints;
-(void)setEditorConstraints:(NSArray *)arg1 ;
-(void)setConstraints:(id)arg1 forEdge:(int)arg2 ;
-(id)constraintsForEdge:(int)arg1 ;
-(void)_removeAccessoryViewController:(id)arg1 ;
-(unsigned)_verticalLayoutTypeForEdge:(int)arg1 ;
-(unsigned)_horizontalLayoutTypeForEdge:(int)arg1 ;
-(NSLayoutConstraint *)horizontalAlignment;
-(NSLayoutConstraint *)verticalAlignment;
-(void)setHorizontalAlignment:(NSLayoutConstraint *)arg1 ;
-(void)setVerticalAlignment:(NSLayoutConstraint *)arg1 ;
-(void)reloadInputViewsForPersistentDelegate;
-(id)accessoryViewControllerForEdge:(int)arg1 ;
-(void)setSupportsTouchInput:(char)arg1 ;
-(char)isAutomaticResponderTransition;
@end

