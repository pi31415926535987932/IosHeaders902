/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface _SBNotificationCenterTransitionContext : NSObject {

	char _presenting;
	char _interactive;
	char _fromCurrentState;
	/*^block*/id _stepper;
	/*^block*/id _setupPrelude;
	/*^block*/id _setupPostlude;
	/*^block*/id _animationPrelude;
	/*^block*/id _presentationBegunHandler;
	/*^block*/id _animationPostlude;
	/*^block*/id _pendingTransition;
	/*^block*/id _completion;
	CGPoint _initialTouchLocation;

}

@property (assign,getter=isPresenting,nonatomic) char presenting;                          //@synthesize presenting=_presenting - In the implementation block
@property (assign,getter=isInteractive,nonatomic) char interactive;                        //@synthesize interactive=_interactive - In the implementation block
@property (assign,getter=isFromCurrentState,nonatomic) char fromCurrentState;              //@synthesize fromCurrentState=_fromCurrentState - In the implementation block
@property (nonatomic,copy) id stepper;                                                     //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,copy) id setupPrelude;                                                //@synthesize setupPrelude=_setupPrelude - In the implementation block
@property (nonatomic,copy) id setupPostlude;                                               //@synthesize setupPostlude=_setupPostlude - In the implementation block
@property (nonatomic,copy) id animationPrelude;                                            //@synthesize animationPrelude=_animationPrelude - In the implementation block
@property (nonatomic,copy) id presentationBegunHandler;                                    //@synthesize presentationBegunHandler=_presentationBegunHandler - In the implementation block
@property (nonatomic,copy) id animationPostlude;                                           //@synthesize animationPostlude=_animationPostlude - In the implementation block
@property (nonatomic,copy) id pendingTransition;                                           //@synthesize pendingTransition=_pendingTransition - In the implementation block
@property (nonatomic,copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                                 //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
-(void)setSetupPrelude:(id)arg1 ;
-(void)setSetupPostlude:(id)arg1 ;
-(void)setAnimationPrelude:(id)arg1 ;
-(void)setAnimationPostlude:(id)arg1 ;
-(void)setFromCurrentState:(char)arg1 ;
-(void)setPendingTransition:(id)arg1 ;
-(id)setupPrelude;
-(id)setupPostlude;
-(id)animationPrelude;
-(id)animationPostlude;
-(char)isFromCurrentState;
-(id)pendingTransition;
-(id)presentationBegunHandler;
-(void)setPresentationBegunHandler:(id)arg1 ;
-(void)dealloc;
-(char)isInteractive;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setPresenting:(char)arg1 ;
-(void)setInteractive:(char)arg1 ;
-(id)stepper;
-(void)setStepper:(id)arg1 ;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(CGPoint)initialTouchLocation;
-(char)isPresenting;
@end

