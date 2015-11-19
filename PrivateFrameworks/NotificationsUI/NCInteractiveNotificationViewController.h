/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCInteractiveNotificationServiceInterface.h>

@class NSDictionary;

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface> {

	char _modal;
	NSDictionary* _context;
	float _maximumHeight;

}

@property (nonatomic,copy) NSDictionary * context;                   //@synthesize context=_context - In the implementation block
@property (assign,getter=isModal,nonatomic) char modal;              //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) float maximumHeight;                    //@synthesize maximumHeight=_maximumHeight - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)setModal:(char)arg1 ;
-(char)isModal;
-(void)setMaximumHeight:(float)arg1 ;
-(float)maximumHeight;
-(void)dealloc;
-(NSDictionary *)context;
-(void)viewDidLoad;
-(char)showsKeyboard;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)_setContext:(id)arg1 ;
-(void)handleActionAtIndex:(unsigned)arg1 ;
-(void)proximityStateDidChange:(char)arg1 ;
-(id)actionContext;
-(float)preferredContentHeight;
-(float)bottomOverhangHeight;
-(id)inlayViewService;
-(id)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(void)didChangeRevealPercent:(float)arg1 ;
-(id)actionTitles;
-(void)handleActionIdentifier:(id)arg1 ;
-(void)willPresentFromActionIdentifier:(id)arg1 ;
-(void)_getInitialStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_setMaximumHeight:(float)arg1 ;
-(void)_setModal:(char)arg1 ;
-(void)_interactiveNotificationDidAppear;
-(void)_proximityStateDidChange:(char)arg1 ;
-(void)_didChangeRevealPercent:(float)arg1 ;
-(void)_willPresentFromActionIdentifier:(id)arg1 ;
-(void)_getActionContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_getActionTitlesWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleActionAtIndex:(unsigned)arg1 ;
-(void)_handleActionIdentifier:(id)arg1 ;
-(void)dismissWithContext:(id)arg1 ;
-(void)requestDismissalEnabled:(char)arg1 ;
-(void)requestPreferredContentHeight:(float)arg1 ;
-(void)setActionEnabled:(char)arg1 atIndex:(unsigned)arg2 ;
-(void)requestProximityMonitoringEnabled:(char)arg1 ;
@end

