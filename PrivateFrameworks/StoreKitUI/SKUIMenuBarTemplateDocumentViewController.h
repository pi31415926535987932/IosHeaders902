/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIHorizontalScrollingContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElementConfigurationDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingSegmentedControllerDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingTabAppearanceStatusObserver.h>
#import <libobjc.A.dylib/SKUIScrollingTabNestedPagedScrolling.h>
#import <libobjc.A.dylib/SKUINavigationBarControllerProviding.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@protocol SKUIMenuBarViewElement;
@class UIScrollView, SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, SKUIDynamicPageSectionIndexMapper, NSMutableDictionary, SKUIHorizontalScrollingContainerViewController, SKUILoadingDocumentViewController, SKUIMenuBarSectionsViewController, SKUIViewElement, SKUIMenuBarViewElementConfiguration, SKUIMenuItemViewElement, SKUIScrollingSegmentedController, SKUIMenuBarTemplateElement, UIView, NSString;

@interface SKUIMenuBarTemplateDocumentViewController : SKUIViewController <SKUIHorizontalScrollingContainerViewControllerDelegate, SKUIMenuBarViewElementConfigurationDelegate, SKUIScrollingSegmentedControllerDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUINavigationBarControllerProviding, SKUIDocumentViewController> {

	SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost* _embeddedPaletteHost;
	SKUIDynamicPageSectionIndexMapper* _dynamicPageSectionIndexMapper;
	NSMutableDictionary* _entityUniqueIdentifierToEntityIndex;
	SKUIHorizontalScrollingContainerViewController* _horizontalScrollingContainerViewController;
	SKUILoadingDocumentViewController* _loadingDocumentViewController;
	SKUIMenuBarSectionsViewController* _menuBarSectionsViewController;
	int _menuBarStyle;
	SKUIViewElement*<SKUIMenuBarViewElement> _menuBarViewElement;
	SKUIMenuBarViewElementConfiguration* _menuBarViewElementConfiguration;
	SKUIMenuItemViewElement* _pendingSelectedMenuItemViewElement;
	SKUIScrollingSegmentedController* _scrollingSegmentedController;
	SCD_Struct_SK8 _scrollingTabAppearanceStatus;
	SKUIMenuBarTemplateElement* _templateElement;

}

@property (nonatomic,readonly) UIView * titleView; 
@property (nonatomic,readonly) float titleViewHeight; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollingTabNestedPagingScrollView; 
-(void)dealloc;
-(UIView *)titleView;
-(void)setOperationQueue:(id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(id)_contentViewController;
-(void)_replaceViewControllerAtIndex:(unsigned)arg1 withViewController:(id)arg2 ;
-(void)setClientContext:(id)arg1 ;
-(id)_colorScheme;
-(void)documentDidUpdate:(id)arg1 ;
-(id)navigationPaletteView;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(id)_dynamicPageSectionIndexMapper;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id)arg2 ;
-(void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned)arg2 ;
-(void)menuBarViewElementConfiguration:(id)arg1 selectMenuItemViewElement:(id)arg2 animated:(char)arg3 ;
-(void)_reloadContentViewController;
-(void)_removeContentViewController:(id)arg1 ;
-(char)_isFirstViewControllerOnNavigationStack;
-(float)titleViewHeight;
-(void)_willDisplayViewControllerAtIndex:(unsigned)arg1 ;
-(void)_recordEntityUniqueIdentifier:(id)arg1 forEntityIndex:(unsigned)arg2 ;
-(id)_newChildViewControllerForEntityAtIndex:(unsigned)arg1 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(SCD_Struct_SK8)arg1 ;
-(UIScrollView *)scrollingTabNestedPagingScrollView;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned)arg1 ;
-(unsigned)_menuItemIndexForEntityIndex:(unsigned)arg1 entityValueProvider:(out id*)arg2 ;
-(id)_childViewControllersForMenuItems;
-(id)_zoomingShelfPageSplitsDescription;
-(void)_addContentViewController:(id)arg1 ;
-(void)horizontalScrollingContainerViewController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned)arg2 ;
-(void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned)arg2 ;
-(id)navigationBarControllerWithViewElement:(id)arg1 ;
@end

