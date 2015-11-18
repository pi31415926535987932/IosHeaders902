/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRefreshControlContentView.h>

@class UIView, _UIRefreshControlModernReplicatorView, UILabel;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {

	char _animationsAreValid;
	UIView* _replicatorContainer;
	_UIRefreshControlModernReplicatorView* _replicatorView;
	UIView* _seed;
	char _hasFinishedRevealing;
	UILabel* _textLabel;
	char _areAnimationsValid;
	float _currentPopStiffness;

}

@property (nonatomic,readonly) UILabel * textLabel;                  //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) float currentPopStiffness;              //@synthesize currentPopStiffness=_currentPopStiffness - In the implementation block
@property (assign,nonatomic) char areAnimationsValid;                //@synthesize areAnimationsValid=_areAnimationsValid - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setTintColor:(id)arg1 ;
-(UILabel *)textLabel;
-(id)_effectiveTintColor;
-(id)attributedTitle;
-(float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(float)maximumSnappingHeight;
-(void)setCurrentPopStiffness:(float)arg1 ;
-(void)willTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)didTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setAreAnimationsValid:(char)arg1 ;
-(void)_snappingMagic;
-(double)_currentTimeOffset;
-(char)areAnimationsValid;
-(void)_updateTimeOffsetOfRelevantLayers;
-(void)_resetToRevealingState;
-(void)_spin;
-(void)_tickDueToProgrammaticRefresh;
-(void)_goAway;
-(void)_cleanUpAfterRevealing;
-(void)_setSpunAppearance;
-(void)_tick;
-(id)_effectiveTintColorWithAlpha:(float)arg1 ;
-(void)_reveal;
-(float)currentPopStiffness;
-(float)_percentageShowing;
-(float)_effectiveScrollViewHeight;
@end

