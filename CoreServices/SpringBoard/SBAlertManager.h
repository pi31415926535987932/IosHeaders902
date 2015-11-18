/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertDelegate.h>
#import <SpringBoard/SBAlertWindowDelegate.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBAlertManagerDelegate;
@class UIScreen, FBScene, NSSet, FBSScene, SBAlertWindow, NSMutableArray, NSMapTable, NSMutableSet, NSString;

@interface SBAlertManager : NSObject <SBAlertDelegate, SBAlertWindowDelegate, FBSceneLayerManagerObserver, BSDescriptionProviding> {

	UIScreen* _screen;
	FBScene* _alertServerScene;
	NSSet* _alertClientSceneOcclusions;
	FBSScene* _alertClientScene;
	SBAlertWindow* _alertWindow;
	SBAlertWindow* _deferredAlertWindow;
	NSMutableArray* _alerts;
	NSMapTable* _observers;
	NSMutableSet* _removalPendingAlerts;
	char _deactivatingAllAlerts;
	id<SBAlertManagerDelegate> _delegate;
	struct {
		unsigned deactivateDismissed : 1;
		unsigned newWindow : 1;
		unsigned defaultShouldAutorotate : 1;
		unsigned defaultPresentationOrientation : 1;
		unsigned defaultSupportedOrientations : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic) id<SBAlertManagerDelegate> delegate; 
@property (nonatomic,retain,readonly) SBAlertWindow * alertWindow;              //@synthesize alertWindow=_alertWindow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activeAlert;
-(id)allAlerts;
-(char)hasStackedAlerts;
-(char)deactivate:(id)arg1 ;
-(char)containsAlert:(id)arg1 ;
-(id)initWithScreen:(id)arg1 delegate:(id)arg2 ;
-(void)deactivateAlertsAfterLaunch;
-(id)stackedAlertsIncludingActiveAlert:(char)arg1 ;
-(char)defaultShouldAutorotateForAlertWindow:(id)arg1 ;
-(int)defaultInterfaceOrientationForPresentationOfAlertWindow:(id)arg1 ;
-(unsigned)defaultSupportedInterfaceOrientationsForAlertWindow:(id)arg1 ;
-(char)defaultShouldAutorotateForAlert:(id)arg1 ;
-(int)defaultInterfaceOrientationForPresentationOfAlert:(id)arg1 ;
-(unsigned)defaultSupportedInterfaceOrientationsForAlert:(id)arg1 ;
-(void)alertWillDismiss:(id)arg1 ;
-(void)alertIsReadyToBeDeactivated:(id)arg1 ;
-(void)alert:(id)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(id)arg2 ;
-(void)alertDidChangeOrientationEventsEnabled:(id)arg1 ;
-(void)alertIsReadyToBeRemovedFromView:(id)arg1 ;
-(void)alertDidChangeOccluding:(id)arg1 ;
-(void)deactivateAll;
-(unsigned)_alertCount;
-(id)_alertAtIndex:(unsigned)arg1 ;
-(void)_noteWillDisplayAlert:(id)arg1 ;
-(void)_deactivate:(id)arg1 ;
-(void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)_canAutorotate;
-(void)_noteAlertWillDismiss:(id)arg1 ;
-(void)_activate:(id)arg1 ;
-(void)_makeAlertWindowOpaque:(char)arg1 ;
-(void)_resetAlertWindowOpacity;
-(void)_createAlertWindowIfNecessaryForAlert:(id)arg1 ;
-(void)_removeFromView:(id)arg1 oldAlertIndex:(unsigned)arg2 ;
-(void)alert:(id)arg1 didChangeStatusBarVisibility:(char)arg2 ;
-(void)alertWantsToForceWallpaperTunnelUpdate:(id)arg1 ;
-(void)setAlertsShouldDeactivateAfterLaunch;
-(void)applicationWillAnimateActivation;
-(void)applicationFinishedAnimatingBeneathAlert;
-(void)setDelegate:(id<SBAlertManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<SBAlertManagerDelegate>)delegate;
-(void)addObserver:(id)arg1 ;
-(id)screen;
-(SBAlertWindow *)alertWindow;
-(void)removeObserver:(id)arg1 ;
-(void)activate:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)sceneLayerManagerWillStartTrackingLayers:(id)arg1 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg1 ;
-(id)contextHostManager;
@end

