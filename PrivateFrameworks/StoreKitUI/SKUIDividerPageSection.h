/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIViewElementLayoutContext, SKUIDividerPageComponent, NSString;

@interface SKUIDividerPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _layoutContext;

}

@property (nonatomic,readonly) SKUIDividerPageComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)sectionContentInset;
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(char)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(char)arg3 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_enumerateVisibleCellsUsingBlock:(/*^block*/id)arg1 ;
-(void)_requestCellLayout;
@end

