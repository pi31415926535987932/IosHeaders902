/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIMoreListController, UINavigationController, UIViewController, NSArray;

@interface UIMoreNavigationController : UINavigationController {

	UIMoreListController* _moreListController;
	UINavigationController* _originalNavigationController;
	UIViewController* _originalRootViewController;

}

@property (nonatomic,readonly) UIViewController * moreListController;                 //@synthesize moreListController=_moreListController - In the implementation block
@property (nonatomic,retain) NSArray * moreViewControllers; 
@property (assign,nonatomic) char allowsCustomizing; 
@property (assign,nonatomic) UIViewController * displayedViewController; 
@property (assign,nonatomic) char moreViewControllersChanged; 
+(Class)_moreListControllerClass;
-(id)init;
-(void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(char)arg2 ;
-(UIViewController *)moreListController;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(void)_restoreOriginalNavigationController;
-(void)restoreOriginalNavigationController:(id)arg1 ;
-(UIViewController *)displayedViewController;
-(NSArray *)moreViewControllers;
-(void)setDisplayedViewController:(UIViewController *)arg1 ;
-(void)setAllowsCustomizing:(char)arg1 ;
-(void)setMoreViewControllersChanged:(char)arg1 ;
-(void)_redisplayMoreTableView;
-(id)_preparedViewController:(id)arg1 ;
-(void)_ensureChildrenHaveParentViewController;
-(char)allowsCustomizing;
-(char)moreViewControllersChanged;
-(id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned*)arg2 ;
@end

