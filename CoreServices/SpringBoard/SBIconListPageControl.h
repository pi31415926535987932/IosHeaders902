/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIPageControl.h>

@protocol SBIconListPageControlDelegate;
@class SBIconPageIndicatorImageSetResult, SBIconPageIndicatorImageSetCache;

@interface SBIconListPageControl : UIPageControl {

	id<SBIconListPageControlDelegate> _delegate;
	char _hasSetLegibility;
	char _shouldShowSearchIndicator;
	float _cachedDefaultHeight;
	SBIconPageIndicatorImageSetResult* _pageIndicatorImageSets;
	SBIconPageIndicatorImageSetResult* _searchIndicatorImageSets;
	char _legibilityEnabled;
	SBIconPageIndicatorImageSetCache* _imageSetCache;

}

@property (assign,nonatomic) char shouldShowSearchIndicator;                                //@synthesize shouldShowSearchIndicator=_shouldShowSearchIndicator - In the implementation block
@property (assign,nonatomic) char legibilityEnabled;                                        //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
@property (assign,nonatomic) id<SBIconListPageControlDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBIconPageIndicatorImageSetCache * imageSetCache;              //@synthesize imageSetCache=_imageSetCache - In the implementation block
-(id)_searchIndicatorImage:(char)arg1 ;
-(id)_iconListIndicatorImage:(char)arg1 ;
-(void)_setIndicatorImage:(id)arg1 toEnabled:(char)arg2 index:(int)arg3 ;
-(SBIconPageIndicatorImageSetCache *)imageSetCache;
-(void)setImageSetCache:(SBIconPageIndicatorImageSetCache *)arg1 ;
-(char)shouldShowSearchIndicator;
-(void)setShouldShowSearchIndicator:(char)arg1 ;
-(char)legibilityEnabled;
-(void)setLegibilityEnabled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBIconListPageControlDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id<SBIconListPageControlDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(float)defaultHeight;
-(void)_invalidateIndicators;
-(id)_indicatorViewEnabled:(char)arg1 index:(int)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(char)arg2 index:(int)arg3 ;
-(void)setLegibilitySettings:(id)arg1 ;
@end

