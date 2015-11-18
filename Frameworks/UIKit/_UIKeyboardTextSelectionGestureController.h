/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UIPanOrFlickGestureRecognizerDelegate.h>

@protocol _UIKeyboardTextSelectionGestureControllerDelegate;
@class NSMutableArray, UIDelayedAction, _UIKeyboardTextSelectionController, NSString;

@interface _UIKeyboardTextSelectionGestureController : NSObject <UIGestureRecognizerDelegate, _UIPanOrFlickGestureRecognizerDelegate> {

	CGPoint _cursorLocationBase;
	char _wasScrollingEnabled;
	char _wasNestedPinchingDisabled;
	char _suppressTwoFingerPan;
	char _didSuppressSelectionGrabbers;
	char _isLongPressing;
	char _isPanning;
	char _didFloatCursor;
	id<_UIKeyboardTextSelectionGestureControllerDelegate> _delegate;
	int _previousRepeatedGranularity;
	int _panGestureState;
	NSMutableArray* _activeGestures;
	UIDelayedAction* _tapLogTimer;
	int _previousForcePressCount;
	CGPoint _lastPanTranslation;
	CGPoint _accumulatedAcceleration;
	CGPoint _accumulatedBounding;
	double _lastPressTimestamp;
	double _twoFingerTapTimestamp;

}

@property (assign,nonatomic) id<_UIKeyboardTextSelectionGestureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * selectionController; 
@property (assign,nonatomic) CGPoint lastPanTranslation;                                                  //@synthesize lastPanTranslation=_lastPanTranslation - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedAcceleration;                                             //@synthesize accumulatedAcceleration=_accumulatedAcceleration - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedBounding;                                                 //@synthesize accumulatedBounding=_accumulatedBounding - In the implementation block
@property (assign,nonatomic) double lastPressTimestamp;                                                   //@synthesize lastPressTimestamp=_lastPressTimestamp - In the implementation block
@property (assign,nonatomic) double twoFingerTapTimestamp;                                                //@synthesize twoFingerTapTimestamp=_twoFingerTapTimestamp - In the implementation block
@property (assign,nonatomic) int previousRepeatedGranularity;                                             //@synthesize previousRepeatedGranularity=_previousRepeatedGranularity - In the implementation block
@property (assign,nonatomic) int panGestureState;                                                         //@synthesize panGestureState=_panGestureState - In the implementation block
@property (assign,nonatomic) char wasScrollingEnabled;                                                    //@synthesize wasScrollingEnabled=_wasScrollingEnabled - In the implementation block
@property (assign,nonatomic) char wasNestedPinchingDisabled;                                              //@synthesize wasNestedPinchingDisabled=_wasNestedPinchingDisabled - In the implementation block
@property (assign,nonatomic) char suppressTwoFingerPan;                                                   //@synthesize suppressTwoFingerPan=_suppressTwoFingerPan - In the implementation block
@property (assign,nonatomic) char didSuppressSelectionGrabbers;                                           //@synthesize didSuppressSelectionGrabbers=_didSuppressSelectionGrabbers - In the implementation block
@property (assign,nonatomic) char isLongPressing;                                                         //@synthesize isLongPressing=_isLongPressing - In the implementation block
@property (assign,nonatomic) char isPanning;                                                              //@synthesize isPanning=_isPanning - In the implementation block
@property (assign,nonatomic) NSMutableArray * activeGestures;                                             //@synthesize activeGestures=_activeGestures - In the implementation block
@property (assign,nonatomic) char didFloatCursor;                                                         //@synthesize didFloatCursor=_didFloatCursor - In the implementation block
@property (nonatomic,retain) UIDelayedAction * tapLogTimer;                                               //@synthesize tapLogTimer=_tapLogTimer - In the implementation block
@property (assign,nonatomic) int previousForcePressCount;                                                 //@synthesize previousForcePressCount=_previousForcePressCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setDelegate:(id<_UIKeyboardTextSelectionGestureControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_UIKeyboardTextSelectionGestureControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)willRemoveSelectionController;
-(void)didRemoveSelectionController;
-(id)addTwoFingerTextSelectionGesturesToView:(id)arg1 ;
-(id)addOneFingerTextSelectionGesturesToView:(id)arg1 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(void)redisableEnclosingScrollViewNestedPinching;
-(char)didSuppressSelectionGrabbers;
-(_UIKeyboardTextSelectionController *)selectionController;
-(void)setDidSuppressSelectionGrabbers:(char)arg1 ;
-(void)_cleanupDeadGesturesIfNecessary;
-(char)didFloatCursor;
-(void)setDidFloatCursor:(char)arg1 ;
-(void)beginCursorManipulationFromRect:(CGRect)arg1 ;
-(CGPoint)cursorLocationForTranslation:(CGPoint)arg1 ;
-(void)endTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)setWasNestedPinchingDisabled:(char)arg1 ;
-(char)wasNestedPinchingDisabled;
-(CGPoint)lastPanTranslation;
-(CGPoint)accumulatedAcceleration;
-(void)setAccumulatedAcceleration:(CGPoint)arg1 ;
-(CGPoint)accumulatedBounding;
-(void)setAccumulatedBounding:(CGPoint)arg1 ;
-(void)twoFingerPan:(id)arg1 ;
-(char)suppressTwoFingerPan;
-(void)setSuppressTwoFingerPan:(char)arg1 ;
-(char)isPanning;
-(void)setIsPanning:(char)arg1 ;
-(void)setIsLongPressing:(char)arg1 ;
-(void)setLastPanTranslation:(CGPoint)arg1 ;
-(void)clearKeyboardTouchesForGesture:(id)arg1 ;
-(void)_willBeginIndirectSelectionGesture:(id)arg1 ;
-(void)disableEnclosingScrollViewScrolling;
-(CGPoint)acceleratedTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CGPoint)boundedTranslation:(CGPoint)arg1 ;
-(char)isLongPressing;
-(void)twoFingerLongPressGestureWithState:(int)arg1 withTranslation:(CGPoint)arg2 ;
-(double)twoFingerTapTimestamp;
-(void)indirectPanGestureWithState:(int)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned)arg3 ;
-(void)indirectCursorPanGestureWithState:(int)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned)arg3 ;
-(void)_didEndIndirectSelectionGesture:(id)arg1 ;
-(void)beginTwoFingerLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateTwoFingerLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)cancelTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)beginTwoFingerCursorPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(int)layoutDirectionFromFlickDirection:(unsigned)arg1 ;
-(void)handleTwoFingerFlickInDirection:(int)arg1 executionContext:(id)arg2 ;
-(void)cancelTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)beginTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(int)previousRepeatedGranularity;
-(int)panGestureState;
-(void)beginIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endIndirectBlockPanWithExecutionContext:(id)arg1 ;
-(void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(char)arg3 ;
-(UIDelayedAction *)tapLogTimer;
-(void)_logTapCounts:(id)arg1 ;
-(void)setTapLogTimer:(UIDelayedAction *)arg1 ;
-(void)setPreviousRepeatedGranularity:(int)arg1 ;
-(void)finishTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)setPanGestureState:(int)arg1 ;
-(void)indirectBlockPanGestureWithState:(int)arg1 withTranslation:(CGPoint)arg2 ;
-(void)setPreviousForcePressCount:(int)arg1 ;
-(int)previousForcePressCount;
-(double)lastPressTimestamp;
-(void)setLastPressTimestamp:(double)arg1 ;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)configureTwoFingerPanGestureRecognizer:(id)arg1 ;
-(void)twoFingerTap:(id)arg1 ;
-(void)configureTwoFingerTapGestureRecognizer:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(double)oneFingerForcePressMinimumDuration;
-(float)oneFingerForcePressAllowableMovement;
-(void)configureOneFingerForcePressRecognizer:(id)arg1 ;
-(char)oneFingerForcePressShouldFailWithoutForce;
-(id)twoFingerPanRecognizer;
-(void)enableEnclosingScrollViewNestedPinching;
-(id)twoFingerTapRecognizer;
-(id)oneFingerForcePressRecognizer;
-(id)addOneFingerForcePressRecognizerToView:(id)arg1 ;
-(id)addTwoFingerPanRecognizerToView:(id)arg1 ;
-(id)addTwoFingerTapRecognizerToView:(id)arg1 ;
-(void)gestureRecognizerShouldBeginResponse:(id)arg1 ;
-(void)beginOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endOneFingerSelectWithExecutionContext:(id)arg1 ;
-(char)enclosingScrollViewIsScrolling;
-(char)allowOneFingerDeepPress;
-(char)wasScrollingEnabled;
-(void)setWasScrollingEnabled:(char)arg1 ;
-(NSMutableArray *)activeGestures;
-(void)setActiveGestures:(NSMutableArray *)arg1 ;
@end

