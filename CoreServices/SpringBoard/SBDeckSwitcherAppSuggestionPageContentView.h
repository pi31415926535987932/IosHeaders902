/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>

@class UIView, UIImageView, UILabel, SBAppView, SBDisplayItem, SBZoomableCrossfadeView, SBOrientationTransformWrapperView;

@interface SBDeckSwitcherAppSuggestionPageContentView : SBSwitcherWallpaperPageContentView {

	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _topLabel;
	UILabel* _bottomLabel;
	SBAppView* _zoomUpAppView;
	SBDisplayItem* _displayItem;
	SBZoomableCrossfadeView* _zoomUpCrossfadeView;
	SBOrientationTransformWrapperView* _appViewLayoutWrapper;

}
-(void)viewPresenting:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(void)viewDismissing:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(id)_firstWakeGreetingString;
-(id)_meCardShortName;
-(void)_configureImageAndLabelsForSuggestion:(id)arg1 ;
-(id)_imageForSuggestion:(id)arg1 ;
-(id)_topStringForSuggestion:(id)arg1 ;
-(id)_bottomStringForSuggestion:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displayItem:(id)arg2 suggestedApp:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)invalidate;
@end

