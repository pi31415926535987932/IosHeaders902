/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol UIPreviewItemDelegate;
@class MLULookupItem, UIPreviewInteractionController, UIView, UIImageView, CADisplayLink, NSDictionary, UIViewController, NSArray, UIGestureRecognizer, NSString;

@interface UIPreviewItemController : NSObject <UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver> {

	MLULookupItem* _lookupItem;
	UIPreviewInteractionController* _previewInteractionController;
	UIView* _previewIndicatorView;
	UIImageView* _previewIndicatorImageView;
	UIView* _previewIndicatorSnapshotView;
	CADisplayLink* _previewIndicatorDisplayLink;
	double _lastPreviewIndicatorAnimationTimestamp;
	float _previewIndicatorAnimationTargetAlpha;
	CGRect _previewIndicatorBoundingRect;
	char _previewIndicatorUsesStandardAnimation;
	char _contentManagedByClient;
	UIPreviewItemController* _strongSelf;
	char _interactionInProgress;
	id<UIPreviewItemDelegate> _delegate;
	int _type;
	NSDictionary* _previewData;
	UIViewController* _presentedViewController;
	UIViewController* _presentingViewController;
	UIView* _view;

}

@property (assign,nonatomic) id<UIPreviewItemDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int type;                                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * previewData;                                                //@synthesize previewData=_previewData - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationSecondaryGestureRecognizer; 
@property (nonatomic,readonly) UIViewController * presentedViewController;                                //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;                               //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) char interactionInProgress;                                                //@synthesize interactionInProgress=_interactionInProgress - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                      //@synthesize view=_view - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<UIPreviewItemDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<UIPreviewItemDelegate>)delegate;
-(UIView *)view;
-(UIViewController *)presentingViewController;
-(int)type;
-(NSArray *)gestureRecognizers;
-(UIViewController *)presentedViewController;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(char)arg2 ;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(char)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3 ;
-(char)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)previewInteractionController:(id)arg1 performCommitToViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(char)arg3 ;
-(char)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5 ;
-(id)initWithView:(id)arg1 ;
-(UIGestureRecognizer *)presentationSecondaryGestureRecognizer;
-(char)interactionInProgress;
-(NSDictionary *)previewData;
-(char)_shouldCancelPreviewWithNegativeFeedback;
-(id)previewViewControllerForPosition:(CGPoint)arg1 inSourceView:(id)arg2 documentProperties:(id)arg3 ;
-(void)stopInteraction;
-(void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(char)arg2 ;
-(void)updatePreviewIndicatorAnimation:(id)arg1 ;
-(void)startInteraction;
-(void)setupPreviewIndicatorInSourceView:(id)arg1 ;
-(void)clearPreviewIndicator;
@end

