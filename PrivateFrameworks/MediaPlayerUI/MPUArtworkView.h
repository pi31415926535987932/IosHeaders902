/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIImageView.h>

@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView {

	NSLayoutConstraint* _aspectConstraint;
	UIImage* _externalImage;
	UIView* _highlightView;
	char _isDeallocating;
	char _automaticallyApplyAspectConstraints;
	char _dimsWhenHighlighted;
	char _forcesAnimatedUnhighlighting;
	char _displayingPlaceholder;
	UIImage* _placeholderImage;

}

@property (assign,nonatomic) char automaticallyApplyAspectConstraints;                                                                                //@synthesize automaticallyApplyAspectConstraints=_automaticallyApplyAspectConstraints - In the implementation block
@property (assign,nonatomic) char dimsWhenHighlighted;                                                                                                //@synthesize dimsWhenHighlighted=_dimsWhenHighlighted - In the implementation block
@property (assign,nonatomic) char forcesAnimatedUnhighlighting;                                                                                       //@synthesize forcesAnimatedUnhighlighting=_forcesAnimatedUnhighlighting - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,getter=isDisplayingPlaceholder,nonatomic) char displayingPlaceholder;                                                               //@synthesize displayingPlaceholder=_displayingPlaceholder - In the implementation block
@property (nonatomic,readonly) char shouldDisplayPlaceholder; 
@property (nonatomic,readonly) UIImage * _externalImage;                                                                                              //@synthesize externalImage=_externalImage - In the implementation block
@property (assign,setter=_setAspectConstraintMultiplier:,getter=_aspectConstraintMultiplier,nonatomic) float aspectConstraintMultiplier; 
-(char)isDisplayingPlaceholder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)updateConstraints;
-(void)setHighlightedImage:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setHighlightedAnimationImages:(id)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setAutomaticallyApplyAspectConstraints:(char)arg1 ;
-(void)setDimsWhenHighlighted:(char)arg1 ;
-(void)setForcesAnimatedUnhighlighting:(char)arg1 ;
-(char)automaticallyApplyAspectConstraints;
-(void)_setAspectConstraintMultiplier:(float)arg1 ;
-(void)_updateHighlightViewAnimated:(char)arg1 ;
-(void)_setPlaceholderHidden:(char)arg1 ;
-(char)shouldDisplayPlaceholder;
-(void)_imageDidChange;
-(UIImage *)_externalImage;
-(void)setDisplayingPlaceholder:(char)arg1 ;
-(char)_shouldShowHighlightView;
-(char)forcesAnimatedUnhighlighting;
-(float)_aspectConstraintMultiplier;
-(char)dimsWhenHighlighted;
@end

