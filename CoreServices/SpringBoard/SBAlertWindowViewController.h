/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SBAlertWindowViewControllerDelegate;
@class UIScreen, UIView, SBAlert, UIViewController, NSMutableSet;

@interface SBAlertWindowViewController : UIViewController {

	UIScreen* _screen;
	id<SBAlertWindowViewControllerDelegate> _alertWindowViewControllerDelegate;
	UIView* _contentView;
	SBAlert* _activeAlert;
	UIViewController* _activeViewController;
	NSMutableSet* _childAlerts;

}

@property (assign,nonatomic) id<SBAlertWindowViewControllerDelegate> alertWindowViewControllerDelegate;              //@synthesize alertWindowViewControllerDelegate=_alertWindowViewControllerDelegate - In the implementation block
@property (nonatomic,retain) SBAlert * activeAlert;                                                                  //@synthesize activeAlert=_activeAlert - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;                                                //@synthesize activeViewController=_activeViewController - In the implementation block
-(SBAlert *)activeAlert;
-(void)setAlertWindowViewControllerDelegate:(id<SBAlertWindowViewControllerDelegate>)arg1 ;
-(int)stackedAlertCount;
-(id)stackedViewForAlert:(id)arg1 ;
-(char)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2 ;
-(void)addAlertController:(id)arg1 ;
-(void)noteAlertWindow:(id)arg1 didDisplayAlert:(id)arg2 ;
-(void)removeAlertController:(id)arg1 ;
-(void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2 ;
-(id)stackedAlertsIncludingActiveAlert:(char)arg1 ;
-(void)setActiveAlert:(SBAlert *)arg1 ;
-(void)performEndAppearanceToController:(id)arg1 withTransitionBlock:(/*^block*/id)arg2 ;
-(id<SBAlertWindowViewControllerDelegate>)alertWindowViewControllerDelegate;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithScreen:(id)arg1 ;
-(char)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)wantsFullScreenLayout;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3 ;
-(int)preferredInterfaceOrientationForPresentation;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(UIViewController *)activeViewController;
-(void)setActiveViewController:(UIViewController *)arg1 ;
@end
