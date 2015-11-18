/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@class UIView, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, TIKeyboardCandidateResultSet, NSString;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	UIView* _clippingView;
	UIView* _topBorder;
	unsigned _selectedSortIndex;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	UIKeyboardCandidateSortControl* _scrollViewSortControl;
	SCD_Struct_UI35 _visualStyling;

}

@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidateResultSet; 
@property (assign,nonatomic) unsigned selectedSortIndex;                                                              //@synthesize selectedSortIndex=_selectedSortIndex - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateSortControl * scrollViewSortControl;                                  //@synthesize scrollViewSortControl=_scrollViewSortControl - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI35 visualStyling;                                                           //@synthesize visualStyling=_visualStyling - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showNextCandidate;
-(char)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(char)arg5 ;
-(id)statisticsIdentifier;
-(char)isExtendedList;
-(char)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(char)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(unsigned)selectedSortIndex;
-(void)setVisualStyling:(SCD_Struct_UI35)arg1 ;
-(SCD_Struct_UI35)visualStyling;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)displayLayer:(id)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)candidateList;
-(unsigned)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(id)headerViewForCandidateSet:(id)arg1 ;
-(unsigned)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(char)isTenKey;
-(void)updateCollectionViewController;
-(void)clearCollectionViewController;
-(UIKeyboardCandidateSortControl *)scrollViewSortControl;
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(void)updateCollectionViewController:(char)arg1 ;
-(void)setCollectionViewController:(UIKeyboardCandidateGridCollectionViewController *)arg1 ;
-(void)setSelectedSortIndex:(unsigned)arg1 ;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setScrollViewSortControl:(UIKeyboardCandidateSortControl *)arg1 ;
-(id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned)arg2 ;
@end

