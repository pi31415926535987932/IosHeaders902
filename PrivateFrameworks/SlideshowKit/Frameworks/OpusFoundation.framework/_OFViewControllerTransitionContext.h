/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <libobjc.A.dylib/OFViewControllerTransitioningContext.h>

@protocol OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;
@class OFUIViewController, OFUIView, NSString;

@interface _OFViewControllerTransitionContext : NSObject <OFViewControllerTransitioningContext> {

	OFUIViewController* _fromViewController;
	OFUIViewController* _toViewController;
	OFUIView* _containerView;
	float _progress;
	float _progressVelocity;
	double _lastUpdateTimestamp;
	int _state;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned isCurrentlyInteractive;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
	}  _flags;
	char _isRubberBanding;
	char _doEaseIn;
	char _doEaseOut;
	id<OFViewControllerAnimatedTransitioning> _animator;
	id<OFViewControllerInteractiveTransitioning> _interactor;
	/*^block*/id _interactiveUpdateHandler;
	/*^block*/id _willCompleteHandler;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) char isInFlight; 
@property (assign,nonatomic) char doEaseIn;                                                //@synthesize doEaseIn=_doEaseIn - In the implementation block
@property (assign,nonatomic) char doEaseOut;                                               //@synthesize doEaseOut=_doEaseOut - In the implementation block
@property (assign,nonatomic) char isRubberBanding;                                         //@synthesize isRubberBanding=_isRubberBanding - In the implementation block
@property (nonatomic,copy) id interactiveUpdateHandler;                                    //@synthesize interactiveUpdateHandler=_interactiveUpdateHandler - In the implementation block
@property (readonly) id<OFViewControllerAnimatedTransitioning> animator;                   //@synthesize animator=_animator - In the implementation block
@property (readonly) id<OFViewControllerInteractiveTransitioning> interactor;              //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,copy) id willCompleteHandler;                                         //@synthesize willCompleteHandler=_willCompleteHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float progressVelocity; 
-(void)finishInteractiveTransitionWithVelocity:(float)arg1 ;
-(void)dealloc;
-(id)containerView;
-(char)isInteractive;
-(void)completeTransition:(char)arg1 ;
-(void)startInteractiveTransition;
-(void)updateInteractiveTransition:(float)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)fromViewController;
-(id)toViewController;
-(char)initiallyInteractive;
-(float)progress;
-(id<OFViewControllerAnimatedTransitioning>)animator;
-(char)isCompleting;
-(char)isInFlight;
-(void)setIsInFlight:(char)arg1 ;
-(void)setIsRubberBanding:(char)arg1 ;
-(id<OFViewControllerInteractiveTransitioning>)interactor;
-(void)cancelInteractiveTransitionWithVelocity:(float)arg1 ;
-(void)setDoEaseIn:(char)arg1 ;
-(void)setDoEaseOut:(char)arg1 ;
-(void)setInteractiveUpdateHandler:(id)arg1 ;
-(void)setProgressVelocity:(float)arg1 ;
-(id)initWithContainerView:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animator:(id)arg4 interactor:(id)arg5 ;
-(void)updateNonInteractiveTransitionWithProgress:(float)arg1 ;
-(void)setIsCompleting:(char)arg1 ;
-(id)interactiveUpdateHandler;
-(id)willCompleteHandler;
-(void)setWillCompleteHandler:(id)arg1 ;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(float)arg2 ;
-(char)isRubberBanding;
-(float)progressVelocity;
-(char)wasCancelled;
-(char)doEaseIn;
-(char)doEaseOut;
@end
