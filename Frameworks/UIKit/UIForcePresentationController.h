/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIGestureRecognizer, UIView;


@protocol UIForcePresentationController <NSObject>
@property (nonatomic,copy) id presentationPhaseCompletionBlock; 
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer; 
@property (assign,nonatomic) char _sourceViewSnapshotAndScaleTransformSuppressed; 
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; 
@optional
-(void)_willCommitPresentation;

@required
-(char)_canDismissPresentation;
-(char)_canCommitPresentation;
-(id)presentationPhaseCompletionBlock;
-(void)setPresentationPhaseCompletionBlock:(/*^block*/id)arg1;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(id)arg1;
-(char)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(char)arg1;
-(UIView *)_revealContainerView;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setForcePresentationControllerDelegate:(id)arg1;

@end

