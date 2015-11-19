/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/PUPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperDelegate.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperAssetDisplayDelegate.h>
#import <libobjc.A.dylib/PLCameraPreviewWellImageChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol CAMCameraRollControllerSessionDelegate, CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerPresentationDelegate, OS_dispatch_source;
@class UIGestureRecognizer, PUOneUpPresentationHelper, CAMTransientDataSource, CAMTransientImageManager, PUPhotoKitDataSourceManager, NSMutableSet, PUPhotosDataSource, PUAudioSessionCategoryToken, NSObject, NSString;

@interface CAMCameraRollController : NSObject <PUPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIInteractionProgressObserver> {

	struct {
		char respondsToSourceAssetRect;
		char respondsToShouldHideSourceAsset;
		char respondsToPreviewGestureDidBecomeAvailable;
		char respondsToPreviewSourceRect;
		char respondsToImageForReveal;
		char respondsToRevealWillBegin;
		char respondsToRevealDidEnd;
	}  _presentationDelegateFlags;
	char _shouldPauseAudioSessionUpdatesForCapture;
	char __allowUpdating;
	char __updateIsScheduled;
	char __transientAssetsAreValid;
	char __oneUpVisible;
	char __oneUpFullyPresented;
	char __didSetupMechanismsForStoppingCaptureSession;
	char __didStopCaptureSession;
	char __shouldPauseAudioSessionUpdatesForCameraRollDismissal;
	unsigned short _sessionIdentifier;
	id<CAMCameraRollControllerSessionDelegate> _sessionDelegate;
	id<CAMCameraRollControllerImageWellDelegate> _imageWellDelegate;
	id<CAMCameraRollControllerPresentationDelegate> _presentationDelegate;
	UIGestureRecognizer* _previewGestureRecognizer;
	PUOneUpPresentationHelper* __oneUpPresentationHelper;
	CAMTransientDataSource* __transientDataSource;
	CAMTransientImageManager* __transientImageManager;
	PUPhotoKitDataSourceManager* __photoKitDataSourceManager;
	NSMutableSet* __sessionAssetUUIDs;
	PUPhotosDataSource* __photosDataSource;
	PUPhotosDataSource* __stagedDataSource;
	PUAudioSessionCategoryToken* __audioSessionCategoryToken;
	NSObject*<OS_dispatch_source> __memoryWarningSource;

}

@property (assign,nonatomic,__weak) id<CAMCameraRollControllerSessionDelegate> sessionDelegate;                                                                        //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (assign,nonatomic) unsigned short sessionIdentifier;                                                                                                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerImageWellDelegate> imageWellDelegate;                                                                    //@synthesize imageWellDelegate=_imageWellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerPresentationDelegate> presentationDelegate;                                                              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,readonly) char canPresentCameraRollViewController; 
@property (nonatomic,retain) UIGestureRecognizer * previewGestureRecognizer;                                                                                           //@synthesize previewGestureRecognizer=_previewGestureRecognizer - In the implementation block
@property (assign,nonatomic) char shouldPauseAudioSessionUpdatesForCapture;                                                                                            //@synthesize shouldPauseAudioSessionUpdatesForCapture=_shouldPauseAudioSessionUpdatesForCapture - In the implementation block
@property (nonatomic,readonly) PUOneUpPresentationHelper * _oneUpPresentationHelper;                                                                                   //@synthesize _oneUpPresentationHelper=__oneUpPresentationHelper - In the implementation block
@property (nonatomic,readonly) CAMTransientDataSource * _transientDataSource;                                                                                          //@synthesize _transientDataSource=__transientDataSource - In the implementation block
@property (nonatomic,readonly) CAMTransientImageManager * _transientImageManager;                                                                                      //@synthesize _transientImageManager=__transientImageManager - In the implementation block
@property (nonatomic,readonly) PUPhotoKitDataSourceManager * _photoKitDataSourceManager;                                                                               //@synthesize _photoKitDataSourceManager=__photoKitDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _sessionAssetUUIDs;                                                                                                      //@synthesize _sessionAssetUUIDs=__sessionAssetUUIDs - In the implementation block
@property (setter=_setPhotosDataSource:,nonatomic,retain) PUPhotosDataSource * _photosDataSource;                                                                      //@synthesize _photosDataSource=__photosDataSource - In the implementation block
@property (setter=_setStagedDataSource:,nonatomic,retain) PUPhotosDataSource * _stagedDataSource;                                                                      //@synthesize _stagedDataSource=__stagedDataSource - In the implementation block
@property (assign,setter=_setAllowUpdating:,nonatomic) char _allowUpdating;                                                                                            //@synthesize _allowUpdating=__allowUpdating - In the implementation block
@property (assign,setter=_setUpdateIsScheduled:,nonatomic) char _updateIsScheduled;                                                                                    //@synthesize _updateIsScheduled=__updateIsScheduled - In the implementation block
@property (assign,setter=_setTransientAssetsAreValid:,nonatomic) char _transientAssetsAreValid;                                                                        //@synthesize _transientAssetsAreValid=__transientAssetsAreValid - In the implementation block
@property (setter=_setAudioSessionCategoryToken:,nonatomic,retain) PUAudioSessionCategoryToken * _audioSessionCategoryToken;                                           //@synthesize _audioSessionCategoryToken=__audioSessionCategoryToken - In the implementation block
@property (assign,setter=_setOneUpVisible:,getter=_isOneUpVisible,nonatomic) char _oneUpVisible;                                                                       //@synthesize _oneUpVisible=__oneUpVisible - In the implementation block
@property (assign,setter=_setOneUpFullyPresented:,getter=_isOneUpFullyPresented,nonatomic) char _oneUpFullyPresented;                                                  //@synthesize _oneUpFullyPresented=__oneUpFullyPresented - In the implementation block
@property (assign,setter=_setDidSetupMechanismsForStoppingCaptureSession:,nonatomic) char _didSetupMechanismsForStoppingCaptureSession;                                //@synthesize _didSetupMechanismsForStoppingCaptureSession=__didSetupMechanismsForStoppingCaptureSession - In the implementation block
@property (assign,setter=_setDidStopCaptureSession:,nonatomic) char _didStopCaptureSession;                                                                            //@synthesize _didStopCaptureSession=__didStopCaptureSession - In the implementation block
@property (assign,setter=_setShouldPauseAudioSessionUpdatesForCameraRollDismissal:,nonatomic) char _shouldPauseAudioSessionUpdatesForCameraRollDismissal;              //@synthesize _shouldPauseAudioSessionUpdatesForCameraRollDismissal=__shouldPauseAudioSessionUpdatesForCameraRollDismissal - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _memoryWarningSource;                                                                                     //@synthesize _memoryWarningSource=__memoryWarningSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)presentingViewControllerViewWillAppear:(char)arg1 ;
-(void)presentingViewControllerViewDidAppear:(char)arg1 ;
-(void)presentingViewControllerViewWillDisappear:(char)arg1 ;
-(void)presentingViewControllerViewDidDisappear:(char)arg1 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(id)oneUpPresentationHelperViewController:(id)arg1 ;
-(int)oneUpPresentationHelperPreferredBarStyle:(id)arg1 ;
-(char)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2 ;
-(PUOneUpPresentationHelper *)_oneUpPresentationHelper;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2 ;
-(CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 ;
-(void)handlePresentingPanGestureRecognizer:(id)arg1 ;
-(CAMTransientImageManager *)_transientImageManager;
-(void)_setAudioSessionCategoryToken:(id)arg1 ;
-(PUAudioSessionCategoryToken *)_audioSessionCategoryToken;
-(CAMTransientDataSource *)_transientDataSource;
-(void)dealloc;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned short)sessionIdentifier;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(char)arg2 ;
-(void)_update;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(char)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(UIGestureRecognizer *)previewGestureRecognizer;
-(void)ppt_preload;
-(void)setImageWellDelegate:(id<CAMCameraRollControllerImageWellDelegate>)arg1 ;
-(void)setSessionDelegate:(id<CAMCameraRollControllerSessionDelegate>)arg1 ;
-(void)setPresentationDelegate:(id<CAMCameraRollControllerPresentationDelegate>)arg1 ;
-(void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(char)arg2 ;
-(void)processTransientPairedVideoUpdate:(id)arg1 ;
-(char)isCaptureSessionCurrent:(unsigned short)arg1 ;
-(void)preload;
-(void)processPendingBursts;
-(char)canPresentCameraRollViewController;
-(void)resetNavigation;
-(void)presentCameraRollViewControllerAnimated:(char)arg1 interactive:(char)arg2 ;
-(void)didPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2 ;
-(void)setShouldPauseAudioSessionUpdatesForCapture:(char)arg1 ;
-(id)persistedThumbnailImage;
-(char)dismissCameraRollViewControllerForced:(char)arg1 animated:(char)arg2 ;
-(void)applicationResumed:(id)arg1 ;
-(void)_teardownMechanismsForStoppingCaptureSession;
-(NSMutableSet *)_sessionAssetUUIDs;
-(void)_scheduleUpdateIfOneUpIsActive;
-(char)_updateIsScheduled;
-(void)_setUpdateIsScheduled:(char)arg1 ;
-(void)_performPreload;
-(void)_ensureCameraRollViewController;
-(id<CAMCameraRollControllerImageWellDelegate>)imageWellDelegate;
-(void)_startNewSession;
-(PUPhotosDataSource *)_photosDataSource;
-(PUPhotosDataSource *)_stagedDataSource;
-(void)_invalidateTransientAssets;
-(void)_updateTransientDataSourceIfNeeded;
-(char)_didStopCaptureSession;
-(void)_setDidStopCaptureSession:(char)arg1 ;
-(char)_isOneUpVisible;
-(void)_setShouldPauseAudioSessionUpdatesForCameraRollDismissal:(char)arg1 ;
-(void)_updateAudioSessionPausing;
-(id<CAMCameraRollControllerPresentationDelegate>)presentationDelegate;
-(char)_isOneUpFullyPresented;
-(void)_setOneUpFullyPresented:(char)arg1 ;
-(void)_setOneUpVisible:(char)arg1 ;
-(void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
-(char)_shouldPauseAudioSessionUpdatesForCameraRollDismissal;
-(void)_updateAudioSessionPausingForceUpdateIfUnpausing:(char)arg1 ;
-(char)_didSetupMechanismsForStoppingCaptureSession;
-(void)_setDidSetupMechanismsForStoppingCaptureSession:(char)arg1 ;
-(void)_stopCaptureSessionIfNecessary;
-(void)_scheduleStopCaptureSessionAfterDelay:(double)arg1 ;
-(void)_setupMemoryWarningNotificationsIfNecessary;
-(void)_registerBrowsingViewModelChangeObserver;
-(void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
-(void)_unregisterBrowsingViewModelChangeObserver;
-(void)_cancelDelayedStopCaptureSession;
-(void)_tearDownMemoryWarningNotifications;
-(void)_stopCaptureSessionIfNecessaryFromTimeout;
-(NSObject*<OS_dispatch_source>)_memoryWarningSource;
-(char)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg1 ;
-(char)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg1 ;
-(void)_setSessionIdentifier:(unsigned short)arg1 ;
-(void)_setAllowUpdating:(char)arg1 ;
-(id<CAMCameraRollControllerSessionDelegate>)sessionDelegate;
-(char)_allowUpdating;
-(void)_setStagedDataSource:(id)arg1 ;
-(void)_setPhotosDataSource:(id)arg1 ;
-(PUPhotoKitDataSourceManager *)_photoKitDataSourceManager;
-(void)_setTransientAssetsAreValid:(char)arg1 ;
-(char)_transientAssetsAreValid;
-(void)_setPreviewGestureRecognizer:(id)arg1 ;
-(void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg1 didChange:(id)arg2 ;
-(char)shouldPauseAudioSessionUpdatesForCapture;
-(void)cameraPreviewWellImageDidChange:(id)arg1 ;
@end

