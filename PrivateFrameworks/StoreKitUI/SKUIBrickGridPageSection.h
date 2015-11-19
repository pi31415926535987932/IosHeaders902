/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>

@class NSMapTable, SKUIMissingItemLoader, UIImage, SKUIGridComponent, NSString;

@interface SKUIBrickGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {

	NSMapTable* _artworkRequests;
	float _baseHeight;
	float _columnWidth;
	NSMapTable* _editorialLayouts;
	SKUIMissingItemLoader* _missingItemLoader;
	int _numberOfColumns;
	float _paddingHorizontal;
	float _paddingTop;
	UIImage* _placeholderImage;

}

@property (nonatomic,readonly) SKUIGridComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(int)arg3 ;
-(void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(UIEdgeInsets)_contentInsetsForColumnIndex:(int)arg1 rowWidth:(float)arg2 ;
-(id)_editorialLayoutForBrick:(id)arg1 ;
-(void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(int)arg3 ;
-(void)_enumerateVisibleBricksUsingBlock:(/*^block*/id)arg1 ;
@end

