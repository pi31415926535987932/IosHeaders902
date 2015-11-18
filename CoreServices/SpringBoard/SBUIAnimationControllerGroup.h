/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class NSMutableArray, NSArray, NSString;

@interface SBUIAnimationControllerGroup : SBUIAnimationController <SBUIAnimationControllerObserver> {

	char _finished;
	NSMutableArray* _animations;

}

@property (nonatomic,retain,readonly) NSArray * animations;              //@synthesize animations=_animations - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(char)_willAnimate;
-(char)waitingToStart;
-(void)_forEachAnimation:(/*^block*/id)arg1 ;
-(id)initWithAnimations:(id)arg1 ;
-(void)_startAnimation;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSArray *)animations;
-(void)addAnimation:(id)arg1 ;
@end

