/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputView.h>

@protocol UIKeyboardCandidateList;
@class UIKeyboardCandidateBar, UIKeyboardCandidateSortControl, UIKeyboardCandidateGrid, UIView, UIImageView, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIKeyboardCandidateSplitKeyboardToggleButton;

@interface UIKeyboardCandidateView : UIInputView {

	UIKeyboardCandidateBar* _bar;
	UIKeyboardCandidateSortControl* _sortControl;
	UIKeyboardCandidateGrid* _extendedView;
	UIView*<UIKeyboardCandidateList> _inlineView;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	UIKeyboardCandidateUnsplitKeyboardToggleButton* _leftButton;
	UIKeyboardCandidateSplitKeyboardToggleButton* _rightButton;
	struct {
		unsigned isExtended;
		unsigned didMinimizeKeyboard;
		unsigned isSplit;
	}  _candidateBarFlags;

}

@property (nonatomic,retain) UIView*<UIKeyboardCandidateList> inlineView;              //@synthesize inlineView=_inlineView - In the implementation block
+(id)sharedInstance;
+(id)activeCandidateView;
+(id)sharedInstanceForInlineView:(char)arg1 ;
+(id)activeCandidateList;
+(void)setActiveCandidateView:(id)arg1 ;
+(float)defaultExtendedControlHeight;
+(id)sharedInstanceForInlineView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)isSplit;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)candidatesDidChange;
-(UIView*<UIKeyboardCandidateList>)inlineView;
-(char)isExtended;
-(void)setCandidateViewExtended:(char)arg1 ;
-(id)activeCandidateList;
-(void)_toggleExtendedCandidateView:(id)arg1 ;
-(void)updatePageControlStatus;
-(void)setCandidateBarCanExtend:(char)arg1 ;
-(unsigned)_numberOfColumns:(char)arg1 ;
-(void)setCandidatesToExtendedViewFromCollapsedView:(id)arg1 ;
-(float)extendedViewAnimationDuration;
-(void)setInlineView:(UIView*<UIKeyboardCandidateList>)arg1 ;
@end

