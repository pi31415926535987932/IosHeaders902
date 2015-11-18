/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/_UIDocumentPickerContainedViewController.h>

@protocol _UIDocumentPickerServiceViewController;
@class NSArray, UIScrollView, _UIDocumentPickerContainerModel, _UIDocumentPickerSortOrderView, UIView, UIActivityIndicatorView, NSString;

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, _UIDocumentPickerContainedViewController> {

	char _editing;
	char _monitoring;
	char _shouldHideSortBar;
	char _updatesMayAnimate;
	id<_UIDocumentPickerServiceViewController> _serviceViewController;
	_UIDocumentPickerContainerModel* _model;
	_UIDocumentPickerSortOrderView* _sortView;
	UIView* _pinnedHeaderView;
	NSArray* _modelObjects;
	UIActivityIndicatorView* _initialActivityView;

}

@property (assign,nonatomic,__weak) id<_UIDocumentPickerServiceViewController> serviceViewController;              //@synthesize serviceViewController=_serviceViewController - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerModel * model;                                              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char monitoring;                                                                      //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,nonatomic) char shouldHideSortBar;                                                               //@synthesize shouldHideSortBar=_shouldHideSortBar - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSortOrderView * sortView;                                            //@synthesize sortView=_sortView - In the implementation block
@property (nonatomic,retain) UIView * pinnedHeaderView;                                                            //@synthesize pinnedHeaderView=_pinnedHeaderView - In the implementation block
@property (nonatomic,copy) NSArray * modelObjects;                                                                 //@synthesize modelObjects=_modelObjects - In the implementation block
@property (assign,nonatomic) char updatesMayAnimate;                                                               //@synthesize updatesMayAnimate=_updatesMayAnimate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * initialActivityView;                                        //@synthesize initialActivityView=_initialActivityView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIScrollView *)scrollView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(NSArray *)indexPathsForSelectedItems;
-(_UIDocumentPickerContainerModel *)model;
-(NSArray *)modelObjects;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setModelObjects:(NSArray *)arg1 ;
-(id<_UIDocumentPickerServiceViewController>)serviceViewController;
-(void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(int)displayMode;
-(void)setIndexPathsForSelectedItems:(NSArray *)arg1 ;
-(void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2 ;
-(void)setModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(_UIDocumentPickerSortOrderView *)sortView;
-(void)setSortView:(_UIDocumentPickerSortOrderView *)arg1 ;
-(void)setPinnedHeaderView:(id)arg1 animated:(char)arg2 ;
-(void)scrollSortViewToVisible;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)setContentSizeAdjustment:(float)arg1 ;
-(void)setInitialActivityView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)initialActivityView;
-(void)_dynamicTypeSizeChanged:(id)arg1 ;
-(void)_unlockAnimations;
-(void)setUpdatesMayAnimate:(char)arg1 ;
-(void)setMonitoring:(char)arg1 ;
-(void)modelChanged:(id)arg1 ;
-(void)_updateIconSpacing;
-(void)updateContentInset;
-(void)setShouldHideSortBar:(char)arg1 ;
-(void)ensureSortViewInvisible;
-(void)updatePinnedHeader;
-(char)shouldHideSortBar;
-(char)monitoring;
-(UIView *)pinnedHeaderView;
-(void)setPinnedHeaderView:(UIView *)arg1 ;
-(char)updatesMayAnimate;
@end
