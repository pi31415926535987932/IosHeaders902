/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIInteractionProgress.h>
#import <UIKit/_UIForceLevelClassifierDelegate.h>

@class _UITouchForceObservable, _UIForceLevelClassifier, NSObservation, NSString;

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate> {

	_UITouchForceObservable* _observable;
	int _targetState;
	int _minimumState;
	char _updateMinimumStateWithTargetState;
	_UIForceLevelClassifier* _classifier;
	NSObservation* _classifierObservation;
	char _enteredMinimumState;
	char _didEnd;
	NSObservation* _progressObservation;
	NSObservation* _targetStateUpdateObservation;
	NSObservation* _gestureBeganObservation;
	char _completesAtTargetState;

}

@property (assign,nonatomic) char completesAtTargetState;                                                                                                          //@synthesize completesAtTargetState=_completesAtTargetState - In the implementation block
@property (assign,setter=_setClassifierShouldRespectSystemGestureTouchFiltering:,nonatomic) char _classifierShouldRespectSystemGestureTouchFiltering; 
@property (assign,setter=_setTargetState:,nonatomic) int _targetState;                                                                                             //@synthesize targetState=_targetState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithView:(id)arg1 targetState:(int)arg2 ;
-(void)_forceLevelClassifierDidReset:(id)arg1 ;
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(int)arg2 ;
-(void)setCompletesAtTargetState:(char)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(char)didEnd;
-(id)initWithView:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3 ;
-(id)_initWithObservable:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3 ;
-(id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(int)arg2 ;
-(void)_setTargetState:(int)arg1 ;
-(void)_gestureRecognizerBegan:(char)arg1 ;
-(id)_initWithObservable:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3 useLinearClassifier:(char)arg4 ;
-(void)_installProgressObserver;
-(id)_initWithView:(id)arg1 targetState:(int)arg2 minimumRequiredState:(int)arg3 useLinearClassifier:(char)arg4 ;
-(void)_setClassifierShouldRespectSystemGestureTouchFiltering:(char)arg1 ;
-(char)_classifierShouldRespectSystemGestureTouchFiltering;
-(int)_targetState;
-(char)completesAtTargetState;
@end
