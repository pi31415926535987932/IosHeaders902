/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDColumnViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSArray, UIView, NSLayoutConstraint, _UIBackdropView, UIVisualEffectView, UICollectionViewFlowLayout, UICollectionView, UIPageControl, UIKeyCommandDiscoverabilityHUDVisualStyle, NSString;

@interface UIKeyCommandDiscoverabilityHUDView : UIView <UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	NSArray* _keyCommands;
	char _shouldUseWordsNotSymbols;
	UIView* _HUDOutlineView;
	NSLayoutConstraint* _HUDOutlineViewWidthConstraint;
	NSLayoutConstraint* _HUDOutlineViewHeightConstraint;
	_UIBackdropView* _backdropView;
	UIVisualEffectView* _vibrancyView;
	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _collectionView;
	NSLayoutConstraint* _collectionViewTopConstraint;
	NSLayoutConstraint* _collectionViewBottomConstraint;
	NSLayoutConstraint* _collectionViewLeadingConstraint;
	NSLayoutConstraint* _collectionViewTrailingConstraint;
	UIPageControl* _pageControl;
	NSLayoutConstraint* _pageControlYAnchor;
	float _fontScaleFactor;
	unsigned _pageCount;
	unsigned _cellsPerColumn;
	CGSize _columnSize;
	char _twoColumnsPerPage;
	UIKeyCommandDiscoverabilityHUDVisualStyle* _visualStyle;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDVisualStyle * visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)updateConstraints;
-(void)_pageControlValueChanged:(id)arg1 ;
-(id)_discoverabilityTitleForKeyCommand:(id)arg1 ;
-(id)_stringForModifierFlags:(int)arg1 ;
-(id)_stringForInput:(id)arg1 withModifierFlags:(int)arg2 ;
-(id)_displayInputAndModifierFlagsForInput:(id)arg1 modifierFlags:(int)arg2 ;
-(id)_keyCommandsForColumnIndex:(unsigned)arg1 withCellsPerColumn:(unsigned)arg2 ;
-(CGSize)_bestColumnSizeWithCellsPerColumn:(unsigned)arg1 maxColumnSize:(CGSize)arg2 columnCount:(unsigned)arg3 usingColumnView:(id)arg4 getFontScaleFactor:(float*)arg5 ;
-(UIKeyCommandDiscoverabilityHUDVisualStyle *)visualStyle;
-(id)_columnViewForColumnIndex:(unsigned)arg1 ;
-(id)discoverabilityHUDColumnView:(id)arg1 descriptionStringForKeyCommand:(id)arg2 ;
-(id)discoverabilityHUDColumnView:(id)arg1 modifiersStringForKeyCommand:(id)arg2 ;
-(id)discoverabilityHUDColumnView:(id)arg1 inputStringForKeyCommand:(id)arg2 ;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(void)setVisualStyle:(UIKeyCommandDiscoverabilityHUDVisualStyle *)arg1 ;
@end
