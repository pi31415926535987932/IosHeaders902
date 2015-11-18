/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBFocusGuideDelegate.h>
#import <UIKit/UIKeyboardImplGeometryDelegate.h>

@class UIView, UITextInputTraits, NSMutableDictionary, NSString;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {

	UIView* m_snapshot;
	UITextInputTraits* m_defaultTraits;
	char m_typingDisabled;
	char m_minimized;
	char m_respondingToImplGeometryChange;
	int m_orientation;
	int m_idiom;
	char m_hasExplicitOrientation;
	NSMutableDictionary* m_focusGuides;
	char _hasImpendingCursorLocation;
	unsigned _impendingCursorLocation;

}

@property (assign,nonatomic) char caretBlinks; 
@property (assign,nonatomic) char caretVisible; 
@property (assign,nonatomic) int keyboardIdiom; 
@property (assign,nonatomic) char typingEnabled; 
@property (assign,getter=isMinimized,nonatomic) char minimized; 
@property (assign,nonatomic) char showsCandidatesInline; 
@property (assign,nonatomic) char hasImpendingCursorLocation;                //@synthesize hasImpendingCursorLocation=_hasImpendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned impendingCursorLocation;               //@synthesize impendingCursorLocation=_impendingCursorLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(id)activeKeyboard;
+(CGSize)sizeForInterfaceOrientation:(int)arg1 ;
+(CGSize)defaultSizeForInterfaceOrientation:(int)arg1 ;
+(CGSize)keyboardSizeForInterfaceOrientation:(int)arg1 ;
+(char)isInHardwareKeyboardMode;
+(void)removeAllDynamicDictionaries;
+(id)activeKeyboardForScreen:(id)arg1 ;
+(void)clearActiveForScreen:(id)arg1 ;
+(void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2 ;
+(void)_clearActiveKeyboard;
+(void)initImplementationNow;
+(CGRect)defaultFrameForInterfaceOrientation:(int)arg1 ;
+(char)isOnScreen;
+(char)respondsToProxGesture;
+(char)shouldMinimizeForHardwareKeyboard;
+(char)splitKeyboardEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(char)isActive;
-(int)interfaceOrientation;
-(char)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(int)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_deactivateForBackgrounding;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(CGSize)_sensitivitySize;
-(int)_focusedSound;
-(id)targetWindow;
-(char)_mayRemainFocused;
-(char)_touchesInsideShouldHideCalloutBar;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(char)canBecomeFocused;
-(char)shouldChangeFocusedItem:(id)arg1 heading:(unsigned)arg2 ;
-(void)focusedViewDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)deactivate;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)updateLayout;
-(void)setCaretBlinks:(char)arg1 ;
-(void)activate;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)displayLayer:(id)arg1 ;
-(char)isMinimized;
-(void)acceptAutocorrection;
-(char)shouldSaveMinimizationState;
-(void)prepareForGeometryChange;
-(void)geometryChangeDone:(char)arg1 ;
-(void)setCaretVisible:(char)arg1 ;
-(void)setReturnKeyEnabled:(char)arg1 ;
-(void)removeAutocorrectPrompt;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)minimize;
-(void)setMinimized:(char)arg1 ;
-(void)maximize;
-(char)isAutomatic;
-(char)canDismiss;
-(char)canHandleEvent:(id)arg1 ;
-(char)caretBlinks;
-(void)setCorrectionLearningAllowed:(char)arg1 ;
-(void)setDefaultTextInputTraits:(id)arg1 ;
-(void)responseContextDidChange;
-(char)returnKeyEnabled;
-(char)caretVisible;
-(id)_getCurrentKeyplaneName;
-(id)_getCurrentKeyboardName;
-(id)_getLocalizedInputMode;
-(void)_setAutocorrects:(char)arg1 ;
-(id)_getAutocorrection;
-(char)_hasCandidates;
-(int)_positionInCandidateList:(id)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 lazily:(char)arg2 ;
-(void)clearActivePerScreenIfNeeded;
-(char)isActivePerScreen;
-(void)setupKeyFocusGuides;
-(void)autoAdjustOrientation;
-(void)clearSnapshot;
-(void)takeSnapshot;
-(void)setHasImpendingCursorLocation:(char)arg1 ;
-(char)hasImpendingCursorLocation;
-(unsigned)impendingCursorLocation;
-(void)setCursorLocation:(unsigned)arg1 ;
-(void)updateKeyFocusGuides;
-(unsigned)cursorLocation;
-(char)allowExternalChangeForFocusHeading:(unsigned)arg1 cursorLocation:(unsigned)arg2 ;
-(void)setImpendingCursorLocation:(unsigned)arg1 ;
-(char)disableInteraction;
-(void)setDisableInteraction:(char)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForMinimize:(char)arg1 ;
-(void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)arg1 ;
-(void)didFocusGuideWithHeading:(unsigned)arg1 ;
-(void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(char)arg2 ;
-(void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(char)arg2 ;
-(id)initWithDefaultSize;
-(id)initLazily;
-(char)hasAutocorrectPrompt;
-(id)defaultTextInputTraits;
-(char)typingEnabled;
-(void)setTypingEnabled:(char)arg1 ;
-(void)_setPreferredHeight:(float)arg1 ;
-(char)showPredictionBar;
-(void)setShowPredictionBar:(char)arg1 ;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(void)_setPasscodeOutlineAlpha:(float)arg1 ;
-(void)_setDisableTouchInput:(char)arg1 ;
-(char)showsCandidatesInline;
-(void)setShowsCandidatesInline:(char)arg1 ;
-(int)keyboardIdiom;
-(void)setKeyboardIdiom:(int)arg1 ;
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
-(void)manualKeyboardWasOrderedOut;
-(id)_baseKeyForRepresentedString:(id)arg1 ;
-(id)_keyplaneForKey:(id)arg1 ;
-(id)_keyplaneNamed:(id)arg1 ;
-(void)_changeToKeyplane:(id)arg1 ;
-(void)_setUndocked:(char)arg1 ;
-(void)_setSplit:(char)arg1 ;
-(id)_touchPoint:(CGPoint)arg1 ;
-(id)_typeCharacter:(id)arg1 withError:(CGPoint)arg2 shouldTypeVariants:(char)arg3 baseKeyForVariants:(char)arg4 ;
-(void)_setInputMode:(id)arg1 ;
-(void)_acceptCurrentCandidate;
-(char)_isAutomaticKeyboard;
@end

