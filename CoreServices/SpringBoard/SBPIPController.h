/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/PGPictureInPictureControllerDelegate.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <SpringBoard/SBControlCenterObserver.h>
#import <SpringBoard/SBAlertManagerObserver.h>
#import <SpringBoard/SBAlertItemsControllerObserver.h>
#import <SpringBoard/SBAssistantObserver.h>

@class PGPictureInPictureController, SBWindow, NSMutableSet, NSString;

@interface SBPIPController : NSObject <PGPictureInPictureControllerDelegate, SBUIActiveOrientationObserver, SBControlCenterObserver, SBAlertManagerObserver, SBAlertItemsControllerObserver, SBAssistantObserver> {

	PGPictureInPictureController* _pictureInPictureController;
	SBWindow* _pictureInPictureWindow;
	UIEdgeInsets _pictureInPictureWindowMargin;
	NSMutableSet* _pictureInPictureWindowHiddenReasons;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isAutoPictureInPictureSupported;
+(char)isPictureInPictureSupported;
+(id)sharedInstance;
-(void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(id)_pipWindow;
-(void)setPictureInPictureWindowHidden:(char)arg1 withReason:(id)arg2 ;
-(char)isPictureInPictureWindowVisible;
-(void)assistant:(id)arg1 viewWillAppear:(int)arg2 ;
-(void)assistant:(id)arg1 viewDidDisappear:(int)arg2 ;
-(char)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 ;
-(void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)_pointInside:(CGPoint)arg1 ;
-(void)setPictureInPictureWindowMargin:(UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned)arg3 ;
-(void)_appSwitcherWillQuitApp:(id)arg1 ;
-(void)_nowPlayingStateChangedForPartialMedusaDevice;
-(void)_managePictureInPictureWindowVisibilityAnimated:(char)arg1 ;
-(id)_pictureInPictureApplicationForProcessIdentifier:(int)arg1 ;
-(void)_managePictureInPictureWindowLevel;
-(void)_createWindowAndRootViewControllerIfNeeded;
-(void)_destroyWindowAndRootViewControllerIfPossible;
-(void)dealloc;
-(id)init;
-(void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3 ;
-(void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionEnded;
-(void)_lockStateDidChange:(id)arg1 ;
@end

