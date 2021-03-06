/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollViewIntersectionDelegate.h>
#import <UIKit/UIKeyboardKeyplaneTransitionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPeripheralHostView, UIKeyboardAutomatic, UIPanGestureRecognizer, CADisplayLink, NSMutableArray, UIInputViewSet, UIResponder, NSMutableSet, UIInputViewPostPinningReloadState, UIKeyboardRotationState, UIInputViewTransition, UIScrollView, NSMutableDictionary, UITextEffectsWindow, UIView, UIKeyboard, UIPeripheralHostState, NSString;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate> {

	UIPeripheralHostView* _hostView;
	UIKeyboardAutomatic* _automaticKeyboard;
	char _automaticAppearanceEnabled;
	char _automaticAppearanceEnabledInternal;
	char _automaticKeyboardAnimatingIn;
	char _automaticKeyboardAnimatingOut;
	int _automaticKeyboardState;
	int _ignoringReloadInputViews;
	char _suppresingNotifications;
	char _useHideNotificationsWhenNotVisible;
	char _reloadInputViewsForcedIsAllowed;
	int _nextAutomaticOrderInDirection;
	int _targetRotatedOrientation;
	char _isTranslating;
	char _isSplitting;
	char _isUndocked;
	char _splitLockState;
	UIPanGestureRecognizer* _translateRecognizer;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	CGAffineTransform _targetTransform;
	CGAffineTransform _initialTransform;
	CGPoint _velocity;
	NSMutableArray* _dropShadowViews;
	double __transitionStartTime;
	int _shadowStyle;
	char _wasBackgroundSplit;
	CGRect _previousShadowFrameLeft;
	CGRect _previousShadowFrameRight;
	/*^block*/id _bounceCompletionBlock;
	float m_keyboardAttachedViewHeight;
	CGRect _lastKnownIVFrame;
	CGRect _lastKnownIAVFrame;
	NSMutableArray* _animationStyleStack;
	char _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	double _lastAutomaticKeyboardDuration;
	int _disableAnimationsCount;
	NSMutableArray* _targetStateStack;
	UIInputViewSet* _inputViewSet;
	UIResponder* _responder;
	char _ignoreInputModeChanges;
	NSMutableSet* _pinningResponders;
	char _ignoresPinning;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	char _animationFencingEnabled;
	char _interfaceAutorotationDisabled;
	UIKeyboardRotationState* _rotationState;
	UIInputViewTransition* _currentTransition;
	UIScrollView* _scrollViewForTransition;
	char _scrollViewShowsHorizontalScrollIndicator;
	UIInputViewTransition* _scrollViewTransition;
	char _scrollViewTransitionFinishing;
	CGPoint _scrollViewTransitionPreviousPoint;
	CGPoint _scrollViewTransitionVelocity;
	UIResponder* _selfHostingTrigger;
	NSMutableDictionary* _preservedViewSets;
	NSMutableDictionary* _persistentInputAccessoryResponders;
	NSMutableArray* _persistentInputAccessoryResponderOrder;
	char _didFadeInputViews;
	char _blockedReloadInputViewsForDictation;
	char _allowNilResponderReload;
	char _animateCornerRefresh;
	char _showCorners;
	NSMutableArray* _extraViews;
	int _clippingKeyboardMode;
	CGRect _clippingKeyboardAdjustmentStart;
	CGRect _clippingKeyboardAdjustmentEnd;
	float _ambiguousControlCenterActivationMargin;
	UIResponder* _responderWithoutAutomaticAppearanceEnabled;
	UITextEffectsWindow* _containerWindow;
	char _springBoardLockStateIsLocked;
	int _hostedAnimationToggleCount;
	int _deactivationCount;
	char _dontNeedAssistantBar;
	UIInputViewSet* _transientInputViewSet;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) NSMutableArray * dropShadowViews; 
@property (assign,nonatomic) double _transitionStartTime; 
@property (assign,nonatomic) char automaticAppearanceInternalEnabled; 
@property (getter=_isIgnoringReloadInputViews,nonatomic,readonly) char ignoringReloadInputViews; 
@property (assign,nonatomic) float ambiguousControlCenterActivationMargin; 
@property (nonatomic,retain,readonly) UIResponder * responder; 
@property (assign,nonatomic) char ignoresPinning; 
@property (assign,nonatomic) char animationFencingEnabled; 
@property (nonatomic,readonly) UIKeyboard * automaticKeyboard; 
@property (nonatomic,retain) UIInputViewSet * inputViews; 
@property (nonatomic,readonly) UIInputViewSet * loadAwareInputViews; 
@property (nonatomic,readonly) char keyClicksEnabled; 
@property (assign,nonatomic) char automaticAppearanceEnabled;                                                 //@synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled - In the implementation block
@property (assign,nonatomic) int currentState;                                                                //@synthesize automaticKeyboardState=_automaticKeyboardState - In the implementation block
@property (nonatomic,retain) UIKeyboardRotationState * rotationState;                                         //@synthesize rotationState=_rotationState - In the implementation block
@property (nonatomic,retain) UIPeripheralHostState * targetState; 
@property (nonatomic,retain) UIResponder * responder;                                                         //@synthesize responder=_responder - In the implementation block
@property (nonatomic,retain) UIInputViewPostPinningReloadState * postPinningReloadState;                      //@synthesize postPinningReloadState=_postPinningReloadState - In the implementation block
@property (nonatomic,retain) UIInputViewTransition * currentTransition;                                       //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,readonly) char automaticAppearanceReallyEnabled; 
@property (assign,nonatomic) char animationFencingEnabled;                                                    //@synthesize animationFencingEnabled=_animationFencingEnabled - In the implementation block
@property (nonatomic,readonly) char animationsEnabled; 
@property (nonatomic,readonly) UIKeyboardAutomatic * automaticKeyboard; 
@property (nonatomic,retain) UIInputViewSet * _inputViews;                                                    //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSet * _transientInputViews;                                           //@synthesize transientInputViewSet=_transientInputViewSet - In the implementation block
@property (nonatomic,retain) UIResponder * selfHostingTrigger;                                                //@synthesize selfHostingTrigger=_selfHostingTrigger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(CGRect)visiblePeripheralFrame;
+(float)gridViewRubberBandValueForValue:(float)arg1 target:(float)arg2 timeInterval:(float)arg3 velocity:(float*)arg4 ;
+(id)passthroughViews;
+(void)_releaseSharedInstance;
+(CGRect)screenBoundsInAppOrientation;
+(id)endPlacementForInputViewSet:(id)arg1 ;
+(Class)hostViewClass;
-(void)dealloc;
-(id)init;
-(id)retain;
-(UIView *)view;
-(char)_isTransitioning;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutIfNeeded;
-(char)_isCoordinatingWithSystemGestures;
-(void)setResponder:(UIResponder *)arg1 ;
-(int)currentState;
-(char)isRotating;
-(id)contentView;
-(void)setAutomaticAppearanceInternalEnabled:(char)arg1 ;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(void)scrollView:(id)arg1 didPanWithGesture:(id)arg2 ;
-(void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2 ;
-(float)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2 ;
-(void)resetNextAutomaticOrderInDirectionAndDuration;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(void)transitionDidFinish:(char)arg1 ;
-(void)prepareForAlongsideTransitionWithContext:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1 ;
-(void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(char)arg2 ;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg1 ;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2 ;
-(void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2 ;
-(void)setkeyboardAttachedViewHeight:(float)arg1 ;
-(double)getLastAutomaticDuration;
-(UIResponder *)responder;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(char)arg2 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg1 ;
-(char)_restoreInputViewsWithId:(id)arg1 animated:(char)arg2 ;
-(id)topAnimationStyle;
-(void)_setIgnoresPinning:(char)arg1 allowImmediateReload:(char)arg2 ;
-(void)_beginDisablingAnimations;
-(void)_endDisablingAnimations;
-(void)_preserveInputViewsWithId:(id)arg1 ;
-(void)_beginIgnoringReloadInputViews;
-(void)_endIgnoringReloadInputViews;
-(char)_isTrackingResponder:(id)arg1 ;
-(char)_isPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(char)ignoresPinning;
-(void)_setReloadInputViewsForcedIsAllowed:(char)arg1 ;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(char)arg2 ;
-(id)viewForTransitionScreenSnapshot;
-(CGRect)transitioningFrame;
-(void)setInputViewsHidden:(char)arg1 ;
-(id)transformedContainerView;
-(char)shouldApplySettingsForBackdropView:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(int)_clipCornersOfView:(id)arg1 ;
-(UIKeyboardRotationState *)rotationState;
-(void)translateDetected:(id)arg1 ;
-(char)isUndocked;
-(void)invalidateDisplayLink;
-(void)_updateBounceAnimation:(id)arg1 ;
-(void)undock;
-(void)dock;
-(void)bounceAnimationDidFinish;
-(char)isTranslating;
-(void)prepareForTransition;
-(void)updateProgress:(float)arg1 startHeight:(float)arg2 endHeight:(float)arg3 ;
-(void)finishTransitionWithCompletion:(/*^block*/id)arg1 ;
-(char)isSplitting;
-(void)hideScrollViewHorizontalScrollIndicator:(char)arg1 ;
-(void)finishScrollViewTransition;
-(void)updateScrollViewContentInsetBottom:(float)arg1 ;
-(CGRect)_inputViewRectToAvoid;
-(UIInputViewSet *)loadAwareInputViews;
-(void)moveToPersistentOffset;
-(UIInputViewSet *)inputViews;
-(char)_hasPostPinningReloadState;
-(char)minimize;
-(char)maximize;
-(char)animationFencingEnabled;
-(void)setAnimationFencingEnabled:(char)arg1 ;
-(void)setIgnoresPinning:(char)arg1 ;
-(id)containerWindow;
-(void)postWillShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(void)postDidShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(char)automaticAppearanceEnabled;
-(char)isOnScreen;
-(void)setUndockedWithOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)setAutomaticAppearanceEnabled:(char)arg1 ;
-(void)orderInAutomatic;
-(void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderOutAutomatic;
-(void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderInAutomaticSkippingAnimation;
-(void)orderOutAutomaticSkippingAnimation;
-(char)isOffScreen;
-(void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(int)arg2 ;
-(void)rotateKeyboard:(id)arg1 toOrientation:(int)arg2 ;
-(void)finishRotationOfKeyboard:(id)arg1 ;
-(void)prepareForRotationToOrientation:(int)arg1 ;
-(void)rotateToOrientation:(int)arg1 ;
-(void)finishRotation;
-(void)forceOrderInAutomatic;
-(void)forceOrderOutAutomatic;
-(void)forceOrderInAutomaticAnimated:(char)arg1 ;
-(void)forceOrderOutAutomaticAnimated:(char)arg1 ;
-(void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)manualKeyboardWillBeOrderedIn:(id)arg1 ;
-(void)manualKeyboardWasOrderedIn:(id)arg1 ;
-(void)manualKeyboardWillBeOrderedOut:(id)arg1 ;
-(void)manualKeyboardWasOrderedOut:(id)arg1 ;
-(char)keyClicksEnabled;
-(char)_shouldDelayRotationForWindow:(id)arg1 ;
-(void)setKeyboardOnScreenNotifyKey:(char)arg1 ;
-(void)_setHosted:(char)arg1 ;
-(void)showDropShadows:(char)arg1 ;
-(float)ambiguousControlCenterActivationMargin;
-(void)resetCurrentOrderOutAnimationDuration:(double)arg1 ;
-(id)containerTextEffectsWindowAboveStatusBar;
-(id)containerTextEffectsWindow;
-(CGPoint)offHostPointForPoint:(CGPoint)arg1 ;
-(void)set_inputViews:(UIInputViewSet *)arg1 ;
-(void)peripheralHostWillResume:(id)arg1 ;
-(void)peripheralHostDidEnterBackground:(id)arg1 ;
-(void)textEffectsWindowDidRotate:(id)arg1 ;
-(void)inputModeChangedForRenderConfig:(id)arg1 ;
-(void)springBoardLockStateChanged:(id)arg1 ;
-(void)setListeningToSpringBoardKeyboardNotifications:(char)arg1 ;
-(void)setCurrentTransition:(UIInputViewTransition *)arg1 ;
-(void)setRotationState:(UIKeyboardRotationState *)arg1 ;
-(void)setSelfHostingTrigger:(UIResponder *)arg1 ;
-(void)setPostPinningReloadState:(UIInputViewPostPinningReloadState *)arg1 ;
-(UIInputViewTransition *)currentTransition;
-(void)executeTransition:(id)arg1 ;
-(void)completeCurrentTransitionIfNeeded;
-(id)_renderConfigForResponder:(id)arg1 ;
-(void)_inputModeChangedWhileContextTracked;
-(id)containerRootController;
-(id)_renderConfigForCurrentResponder;
-(void)updateRenderConfigForCurrentResponder;
-(void)updateRenderConfigForResponder:(id)arg1 ;
-(CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(int)arg2 ;
-(CGPoint)adjustedPersistentOffset;
-(void)showCorners:(char)arg1 withDuration:(float)arg2 ;
-(void)updateDropShadow;
-(void)updateBackdrop;
-(void)initializeTranslateGestureRecognizer;
-(void)setCurrentState:(int)arg1 ;
-(UIPeripheralHostState *)targetState;
-(void)setTargetState:(UIPeripheralHostState *)arg1 ;
-(void)postDidHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(int)arg1 outDirection:(int)arg2 forTransition:(int)arg3 ;
-(void)postDidShowNotification;
-(void)postWillHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(void)postDidHideNotification;
-(id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2 ;
-(id)_screenForFirstResponder:(id)arg1 ;
-(void)_performRefreshCorners;
-(void)postDockingNotification;
-(void)refreshCorners;
-(void)postUndockingNotification;
-(void)fadeInInputViews:(char)arg1 ;
-(void)disableInterfaceAutorotation:(char)arg1 ;
-(void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2 ;
-(float)minimumOffsetForBuffer:(float)arg1 ;
-(char)hasDictationKeyboard;
-(NSMutableArray *)dropShadowViews;
-(char)automaticAppearanceReallyEnabled;
-(void)createAutomaticKeyboardIfNeeded;
-(void)createHostViewIfNeeded;
-(void)setPeripheralToolbarFrameForHostWidth:(float)arg1 ;
-(void)setPeripheralFrameForHostBounds:(CGRect)arg1 ;
-(CGSize)totalPeripheralSizeForOrientation:(int)arg1 ;
-(void)layoutInputViewsForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)layoutInputViews;
-(id)nextAnimationStyle;
-(void)orderInWithAnimationStyle:(id)arg1 ;
-(void)orderOutWithAnimationStyle:(id)arg1 ;
-(id)nextAnimationStyle:(char)arg1 ;
-(char)animationsEnabled;
-(id)_inputViewsForResponder:(id)arg1 ;
-(void)setInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(void)setAccessoryViewVisible:(char)arg1 delay:(float)arg2 ;
-(void)fadeInputViewsIfNeeded;
-(void)showInputViewsIfNeeded;
-(char)_somePartOfKeyboardIsOnScreen:(id)arg1 ;
-(CGRect)_centerStretchRectForWidth:(float)arg1 ;
-(UIKeyboard *)automaticKeyboard;
-(void)orderOutWithAnimation:(char)arg1 toDirection:(int)arg2 duration:(double)arg3 ;
-(UIInputViewSet *)_inputViews;
-(UIInputViewSet *)_transientInputViews;
-(void)set_transientInputViews:(UIInputViewSet *)arg1 ;
-(UIResponder *)selfHostingTrigger;
-(UIInputViewPostPinningReloadState *)postPinningReloadState;
-(char)hasCustomInputView;
-(float)keyboardAttachedViewHeight;
-(CGRect)screenRectFromBounds:(CGRect)arg1 atCenter:(CGPoint)arg2 applyingSourceHeightDelta:(float)arg3 ;
-(id)userInfoFromGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(char)arg3 forShow:(char)arg4 ;
-(char)userInfoContainsActualGeometryChange:(id)arg1 ;
-(char)isHostingActiveImpl;
-(void)logGeometryDescriptionFromUserInfo:(id)arg1 ;
-(void)syncToExistingAnimations;
-(void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2 ;
-(void)set_transitionStartTime:(double)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(char)arg2 ;
-(void)_trackInputModeIfNecessary:(id)arg1 ;
-(char)pinningPreventsInputViews:(id)arg1 ;
-(char)_isIgnoringReloadInputViews;
-(void)setInputViews:(UIInputViewSet *)arg1 ;
-(void)performMultipleOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(void)_dismissOverlayedUI;
-(char)_isSuppressedByManualKeyboard;
-(CGRect)calculateSnapshotRectForTransition:(id)arg1 forStart:(char)arg2 ;
-(CGRect)calculateRectForTransition:(id)arg1 forStart:(char)arg2 ;
-(id)containerForClippingMode:(int)arg1 onTransition:(id)arg2 ;
-(char)shouldUseHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(char)maximizeWithAnimation:(char)arg1 ;
-(id)computeTransitionFromInputViews:(id)arg1 toInputViews:(id)arg2 animationStyle:(id)arg3 ;
-(void)adjustHostViewForTransitionEndFrame:(id)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 forStart:(char)arg2 ;
-(float)accessoryViewFadeDuration:(id)arg1 ;
-(void)adjustAccessoryViewForSubsumedTransition:(id)arg1 ;
-(void)adjustHostViewForTransitionStartFrame:(id)arg1 ;
-(void)enableKeyboardTyping;
-(void)endClippingForTransition:(id)arg1 ;
-(void)adjustHostViewForTransitionCompletion:(id)arg1 ;
-(CGRect)displayRectForViewSet:(id)arg1 orientation:(int)arg2 position:(int)arg3 fromRotation:(char)arg4 ;
-(CGRect)localDisplayRectForViewSet:(id)arg1 ;
-(CGRect)localDisplayRectForViewSet:(id)arg1 position:(int)arg2 ;
-(void)setInputViews:(id)arg1 animated:(char)arg2 ;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(char)arg2 reset:(char)arg3 ;
-(void)performWithAllowingNilResponderReload:(/*^block*/id)arg1 ;
-(char)_isSelfHosting;
-(void)extendKeyboardBackdropHeight:(float)arg1 withDuration:(float)arg2 ;
-(void)prepareForPinning;
-(void)_updateContainerWindowLevel;
-(void)forceReloadInputViews;
-(void)setDeactivatedKeyboard:(char)arg1 ;
-(void)_clearPinningResponders;
-(double)_transitionStartTime;
-(char)automaticAppearanceInternalEnabled;
-(CGRect)visiblePeripheralFrame:(char)arg1 ;
-(void)setAmbiguousControlCenterActivationMargin:(float)arg1 ;
-(void)prepareToAnimateClippedKeyboardWithOffsets:(CGRect)arg1 orderingIn:(char)arg2 onSnapshot:(char)arg3 ;
-(void)peripheralViewMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)implBoundsHeightChangeDoneForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(id)computeTransitionForInputViews:(id)arg1 fromOrientation:(int)arg2 toOrientation:(int)arg3 ;
-(char)skipTransitionForInputViews:(id)arg1 ;
-(id)_currentInputView;
-(char)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2 ;
-(void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1 ;
-(void)candidateBarWillChangeHeight:(float)arg1 withDuration:(float)arg2 ;
-(void)updateInputAccessoryViewVisibility:(char)arg1 withDuration:(float)arg2 ;
-(char)_isAccessoryViewChangedOnly;
-(void)animateKeyboardOutWithDuration:(double)arg1 delta:(float)arg2 ;
@end

