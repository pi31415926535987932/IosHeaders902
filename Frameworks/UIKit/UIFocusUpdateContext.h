/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, UIFocusGuide;

@interface UIFocusUpdateContext : NSObject {

	char _isValidated;
	char _shouldUpdateNextFocusedView;
	char _valid;
	char _requiresNextFocusedView;
	char _requiresEnvironmentValidation;
	UIView* _nextFocusedView;
	UIView* _previouslyFocusedView;
	unsigned _focusHeading;
	UIFocusGuide* _focusedGuide;
	UIView* _initialNextFocusedView;
	CGVector _focusVelocity;

}

@property (assign,nonatomic,__weak) UIView * previouslyFocusedView;                                                                                           //@synthesize previouslyFocusedView=_previouslyFocusedView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * nextFocusedView;                                                                                               //@synthesize nextFocusedView=_nextFocusedView - In the implementation block
@property (assign,nonatomic) unsigned focusHeading;                                                                                                           //@synthesize focusHeading=_focusHeading - In the implementation block
@property (getter=_isFocusMoving,nonatomic,readonly) char focusMoving; 
@property (getter=_focusedGuide,nonatomic,__weak,readonly) UIFocusGuide * focusedGuide;                                                                       //@synthesize focusedGuide=_focusedGuide - In the implementation block
@property (getter=_focusVelocity,nonatomic,readonly) CGVector focusVelocity;                                                                                  //@synthesize focusVelocity=_focusVelocity - In the implementation block
@property (getter=_isValid,nonatomic,readonly) char valid;                                                                                                    //@synthesize valid=_valid - In the implementation block
@property (assign,setter=_setInitialNextFocusedView:,getter=_initialNextFocusedView,nonatomic,__weak) UIView * initialNextFocusedView;                        //@synthesize initialNextFocusedView=_initialNextFocusedView - In the implementation block
@property (getter=_focusVelocityBasedScaleFactor,nonatomic,readonly) float focusVelocityBasedScaleFactor; 
@property (assign,setter=_setRequiresNextFocusedView:,getter=_requiresNextFocusedView,nonatomic) char requiresNextFocusedView;                                //@synthesize requiresNextFocusedView=_requiresNextFocusedView - In the implementation block
@property (assign,setter=_setRequiresEnvironmentValidation:,getter=_requiresEnvironmentValidation,nonatomic) char requiresEnvironmentValidation;              //@synthesize requiresEnvironmentValidation=_requiresEnvironmentValidation - In the implementation block
+(id)_contextWithFocusedView:(id)arg1 proposedFocusedView:(id)arg2 ;
+(id)_contextWithFocusedView:(id)arg1 ;
+(id)contextWithPreviouslyFocusedView:(id)arg1 focusedRegion:(id)arg2 heading:(unsigned)arg3 ;
+(id)contextWithPreviouslyFocusedView:(id)arg1 focusedContainerGuide:(id)arg2 heading:(unsigned)arg3 ;
-(id)init;
-(void)_setFocusHeading:(unsigned)arg1 ;
-(UIView *)nextFocusedView;
-(char)_isValid;
-(void)_setFocusVelocity:(CGVector)arg1 ;
-(void)_setPreviouslyFocusedView:(id)arg1 ;
-(UIView *)previouslyFocusedView;
-(float)_focusVelocityBasedScaleFactor;
-(unsigned)focusHeading;
-(id)_initWithContext:(id)arg1 ;
-(void)_setInitialNextFocusedView:(id)arg1 ;
-(void)_setRequiresNextFocusedView:(char)arg1 ;
-(void)_setRequiresEnvironmentValidation:(char)arg1 ;
-(void)_didUpdateFocus;
-(void)_setFocusedGuide:(id)arg1 ;
-(id)_initWithFocusedView:(id)arg1 ;
-(char)_validate;
-(char)_shouldUpdateFocus;
-(char)_requiresNextFocusedView;
-(char)_requiresEnvironmentValidation;
-(id)_initialNextFocusedView;
-(CGVector)_focusVelocity;
-(id)_focusedGuide;
-(char)_isFocusMoving;
-(void)_setNeedsNextFocusedViewUpdate;
@end

