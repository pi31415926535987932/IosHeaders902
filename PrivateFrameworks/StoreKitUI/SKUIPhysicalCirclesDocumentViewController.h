/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIOnboardingAffiliationCirclesDelegate.h>
#import <libobjc.A.dylib/SKUIPhysicalCirclesTemplateDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIOnboardingAffiliationCirclesViewController, SKUIOnboardingFooterView, NSMapTable, UIGestureRecognizer, SKUIOnboardingProgressView, SKUIResourceLoader, SKUIPhysicalCirclesTemplateViewElement, NSString;

@interface SKUIPhysicalCirclesDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIOnboardingAffiliationCirclesDelegate, SKUIPhysicalCirclesTemplateDelegate, UIGestureRecognizerDelegate, SKUIDocumentViewController> {

	SKUIOnboardingAffiliationCirclesViewController* _circlesViewController;
	SKUIOnboardingFooterView* _footerView;
	NSMapTable* _imageRequests;
	UIGestureRecognizer* _interactivePopGestureRecognizer;
	SKUIOnboardingProgressView* _progressView;
	SKUIResourceLoader* _resourceLoader;
	SKUIPhysicalCirclesTemplateViewElement* _templateElement;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)_affiliationItemsWithCircleItemElements:(id)arg1 ;
-(void)_footerLeftButtonAction:(id)arg1 ;
-(void)_footerRightButtonAction:(id)arg1 ;
-(void)_reloadFooterViewAnimated:(char)arg1 ;
-(void)_reloadInstructionsView;
-(void)_loadImagesWithReason:(int)arg1 ;
-(id)_profileImageElement;
-(id)_leftFooterButtonElement;
-(id)_rightFooterButtonElement;
-(void)_styleAttributedString:(id)arg1 withStyle:(id)arg2 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)onboardingCircles:(id)arg1 didRemoveAffiliationItem:(id)arg2 ;
-(void)onboardingCircles:(id)arg1 didSelectAffiliationItem:(id)arg2 atIndex:(int)arg3 ;
-(void)physicalCirclesDOMFeature:(id)arg1 didRequestAnimation:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithPhysicalCirclesTemplateViewElement:(id)arg1 ;
@end

