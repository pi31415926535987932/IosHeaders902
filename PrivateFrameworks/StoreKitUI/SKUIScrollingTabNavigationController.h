/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUINavigationController.h>
#import <libobjc.A.dylib/SKUIScrollingTabBarBottomInsetAwareContent.h>
#import <libobjc.A.dylib/SKUIObservableNavigationStack.h>

@protocol SKUINavigationStackObserver;
@class NSString;

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack> {

	id<SKUINavigationStackObserver> _navigationStackObserver;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUINavigationStackObserver> navigationStackObserver;                                 //@synthesize navigationStackObserver=_navigationStackObserver - In the implementation block
@property (assign,getter=isShowingNavigationStackRootContent,nonatomic) char showingNavigationStackRootContent; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)didShowViewController:(id)arg1 animated:(char)arg2 ;
-(float)_scrollViewBottomContentInsetForViewController:(id)arg1 ;
-(void)scrollingTabBarBottomInsetAdjustmentDidChange;
-(void)popToNavigationStackRootContentAnimated:(char)arg1 withBehavior:(int)arg2 ;
-(id<SKUINavigationStackObserver>)navigationStackObserver;
-(void)setNavigationStackObserver:(id<SKUINavigationStackObserver>)arg1 ;
-(char)isShowingNavigationStackRootContent;
-(void)_observedNavigationStackDidChange;
@end

