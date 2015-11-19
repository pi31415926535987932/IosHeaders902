/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol SKUISlideshowItemViewControllerDelegate;
@class SKUIClientContext, UIView, SKUISlideshowImageScrollView, UIImage, NSString;

@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {

	SKUIClientContext* _clientContext;
	UIView* _loadingView;
	char _zoomingGestureThresholdBroken;
	CGPoint _lastContentOffset;
	float _lastZoomScale;
	id<SKUISlideshowItemViewControllerDelegate> _delegate;
	SKUISlideshowImageScrollView* _imageScrollView;
	int _indexInCollection;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUISlideshowImageScrollView * imageScrollView;                         //@synthesize imageScrollView=_imageScrollView - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (assign,nonatomic) int indexInCollection;                                                    //@synthesize indexInCollection=_indexInCollection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)itemImage;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SKUISlideshowItemViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id<SKUISlideshowItemViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(char)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)_newLoadingView;
-(void)_pinchGestureAction:(id)arg1 ;
-(SKUISlideshowImageScrollView *)imageScrollView;
-(int)indexInCollection;
-(void)setIndexInCollection:(int)arg1 ;
@end

