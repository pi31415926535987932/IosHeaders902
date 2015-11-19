/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUINetworkErrorDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageOverlayDelegate.h>
#import <libobjc.A.dylib/SKUIWishlistDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/SKUITabBarItemRootViewController.h>
#import <libobjc.A.dylib/SKUIClientContextConsuming.h>

@class SKUIClientContext, SKUINetworkErrorViewController, NSOperationQueue, SKUIProductPageOverlayController, SKUIIPadSearchController, UIBarButtonItem, SKUIPopoverObserver, SKUIWishlistViewController, NSString;

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, SKUIWishlistDelegate, UIPopoverControllerDelegate, SKUITabBarItemRootViewController, SKUIClientContextConsuming> {

	SKUIClientContext* _clientContext;
	SKUINetworkErrorViewController* _networkErrorViewController;
	NSOperationQueue* _operationQueue;
	SKUIProductPageOverlayController* _productPageOverlayController;
	SKUIIPadSearchController* _searchController;
	char _wishlistButtonHidden;
	UIBarButtonItem* _wishlistButtonItem;
	SKUIPopoverObserver* _wishlistPopoverObserver;
	SKUIWishlistViewController* _wishlistViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIIPadSearchController * IPadSearchController; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _wishlistButtonItem;                        //@synthesize wishlistButtonItem=_wishlistButtonItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(unsigned)supportedInterfaceOrientations;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)_setWishlistButtonHidden:(char)arg1 ;
-(void)showDefaultNavigationItems;
-(id)initWithTabBarItem:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)skui_viewWillAppear:(char)arg1 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(UIBarButtonItem *)_wishlistButtonItem;
-(SKUIIPadSearchController *)IPadSearchController;
-(void)_wishlistAction:(id)arg1 ;
-(void)_showDialogWithError:(id)arg1 ;
-(void)_reloadForOrientation:(int)arg1 ;
-(void)_wishlistPopoverDidDismiss;
-(void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)showError:(id)arg1 ;
-(char)showingError;
@end

