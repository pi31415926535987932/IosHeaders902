/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIGridViewElementPageSectionConfigurationDataSource.h>
#import <libobjc.A.dylib/SKUICollectionDOMFeatureTargetting.h>

@class IKColor, SKUIViewElementLayoutContext, SKUIGridViewElementPageSectionConfiguration, NSArray, SKUIGridComponent, NSString;

@interface SKUIGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting> {

	IKColor* _backgroundColor;
	SKUIViewElementLayoutContext* _cellLayoutContext;
	float _cellPaddingInteriorHorizontal;
	float _cellPaddingLeftEdgeHorizontal;
	float _cellPaddingRightEdgeHorizontal;
	SKUIGridViewElementPageSectionConfiguration* _configuration;
	char _editing;
	NSArray* _indexPathsForBackgroundItems;
	int _lastNeedsMoreCount;
	NSArray* _viewElements;

}

@property (nonatomic,readonly) SKUIGridComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEditing,nonatomic,readonly) char editing; 
-(UIEdgeInsets)sectionContentInset;
-(void)dealloc;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_setContext:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)_reloadViewElementProperties;
-(int)applyUpdateType:(int)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)deselectItemsAnimated:(char)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(void)collectionViewDidLongPressItemAtIndexPath:(id)arg1 ;
-(char)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(char)arg3 ;
-(void)reloadVisibleCellsWithReason:(int)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2 ;
-(id)backgroundColorForSection;
-(id)indexPathsForBackgroundItems;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2 ;
-(char)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(char)collectionViewShouldSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewWillScrollToOffset:(CGPoint)arg1 visibleRange:(SKUIIndexPathRange)arg2 ;
-(id)previewViewControllerForIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(int)arg2 ;
-(char)previewsSupportedForIndexPath:(id)arg1 ;
-(void)_resetLayoutProperties;
-(id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2 ;
-(void)_requestLayoutForCells;
-(char)_containsOnlyShelfElements;
-(void)_enumerateVisibleViewElementsUsingBlock:(/*^block*/id)arg1 ;
@end

