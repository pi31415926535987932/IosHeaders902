/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIItemArtworkContext, SKUIProductPageHeaderViewController, UIImage, SKUIProductPageItem, SSVLoadURLOperation, SKUIIncompatibleAppView, NSOperationQueue, NSString, UIScrollView;

@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController> {

	SKUIItemArtworkContext* _artworkContext;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	SKUIProductPageHeaderViewController* _headerViewController;
	UIImage* _iconImage;
	SKUIProductPageItem* _incompatibleItem;
	SSVLoadURLOperation* _loadIconOperation;
	SKUIIncompatibleAppView* _incompatibleView;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIProductPageItem * incompatibleItem;                                    //@synthesize incompatibleItem=_incompatibleItem - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)_artworkContext;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(void)_setArtworkWithImage:(id)arg1 error:(id)arg2 ;
-(id)initWithIncompatibleItem:(id)arg1 ;
-(void)_learnMoreAboutIPad:(id)arg1 ;
-(void)_learnMoreAboutApp:(id)arg1 ;
-(SKUIProductPageItem *)incompatibleItem;
@end

