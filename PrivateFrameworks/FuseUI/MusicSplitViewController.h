/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>

@class UIViewController, UIView, SKUIProxyScrollView, NSString;

@interface MusicSplitViewController : UIViewController <SKUIProxyScrollViewDelegate> {

	UIViewController* _detailViewController;
	UIEdgeInsets _detailViewControllerContentInsetAdditions;
	UIView* _gutterView;
	char _isHorizontallyCompact;
	UIViewController* _preservedDetailViewController;
	UIEdgeInsets _primaryViewControllerContentInsetAdditions;
	SKUIProxyScrollView* _proxyScrollView;
	UIViewController* _primaryViewController;
	float _staticPrimaryColumnWidth;

}

@property (nonatomic,retain) UIViewController * primaryViewController;                //@synthesize primaryViewController=_primaryViewController - In the implementation block
@property (assign,nonatomic) float staticPrimaryColumnWidth;                          //@synthesize staticPrimaryColumnWidth=_staticPrimaryColumnWidth - In the implementation block
@property (nonatomic,readonly) UIViewController * _detailViewController;              //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,readonly) char _supportsDetailViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(void)_willChangeDetailViewController:(id)arg1 ;
-(void)_willChangePrimaryViewController:(id)arg1 ;
-(UIViewController *)primaryViewController;
-(UIViewController *)_detailViewController;
-(void)_requestInitialStateDetailViewController;
-(void)setPrimaryViewController:(UIViewController *)arg1 ;
-(void)clearDetailViewController;
-(void)setStaticPrimaryColumnWidth:(float)arg1 ;
-(void)_handleDetailViewController:(id)arg1 ;
-(void)_updateHorizontallyCompactState;
-(float)_preferredPrimaryWColumnWidthWhenWithDetailForWidth:(float)arg1 ;
-(void)_applyContentInsetsForChildViewControllers;
-(id)_primaryViewControllerOverrideTraitCollection;
-(void)_didChangePrimaryViewController;
-(char)_supportsDetailViewController;
-(void)_setDetailViewController:(id)arg1 shouldChangeParents:(char)arg2 ;
-(id)_detailViewControllerOverrideTraitCollection;
-(void)_didChangeDetailViewController;
-(float)staticPrimaryColumnWidth;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
@end

