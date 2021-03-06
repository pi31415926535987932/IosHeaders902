/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MREditingDelegate, MRRenderingDelegate, MRFeatureDelegate, MZMediaManagement;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MCMontage, MRLayerParallelizer, MRRendererInternal, NSDictionary, CADisplayLink, MRCameraCaptureSession, NSString, MRContext;

@interface MRRenderer : NSObject {

	MCMontage* mMontage;
	MRLayerParallelizer* mTopMRLayer;
	CGSize mSize;
	MRRendererInternal* mInternal;
	id<MREditingDelegate> mEditingDelegate;
	id<MRRenderingDelegate> mRenderingDelegate;
	id<MRFeatureDelegate> mFeatureDelegate;
	NSDictionary* mDescriptionsForRandomTransitionPresetIDs;
	char _interactivityIsEnabled;
	char _slideshowIsPaused;
	CADisplayLink* mDisplayLink;
	double mDisplayLinkTimestamp;
	float _slideFocusModeBackgroundColor[4];
	double _lastRenderedTime;
	char _needsToUpdateGeometry;
	char _isFrozen;
	int _currentOSThermalPressureLevel;
	int _thermalNotificationToken;
	char mIsEditing;
	char mPushRendering;
	char mRequestRenderingOnChanges;
	char mDisplaysFPS;
	char mDisplaysPlayingIDs;
	char mDisplaysIsPreloadingImages;
	char mDisplaysTouchVisualFeedback;
	char mDisplaysHitZonesVisualFeedback;
	char _ignoresBackgroundAudio;
	char mIsCleanedUp;
	char _asynchronousOperationsAreSuspended;
	char _allowsThumbnails;
	char _logRenderingTimes;
	int mMode;
	int mOrientation;
	id<MZMediaManagement> mAssetManagementDelegate;
	float mVolume;
	NSDictionary* mParameters;
	MRCameraCaptureSession* _cameraCaptureSession;
	NSString* _renderingLogFilePath;
	float _interactiveTransitionTrackingBoxRadius;
	float _interactiveTransitionProgressThreshold;
	float _interactiveTransitionVelocityThreshold;
	double mTimeQuantum;
	double _fadeInStartTime;
	double _fadeInDuration;
	double _fadeOutStartTime;
	double _fadeOutDuration;
	double _timestampOfLastRenderPass;

}

@property (readonly) char slideshowIsPlaying; 
@property (readonly) double currentSlideshowTime; 
@property (nonatomic,copy) NSString * transitionLayerPlugObjectID; 
@property (readonly) MRContext * context; 
@property (assign,nonatomic) CGPoint contextOffset; 
@property (assign) double masterClock; 
@property (readonly) char isFlipped; 
@property (retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate; 
@property (retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate; 
@property (assign) char screenBurnTest; 
@property (assign) char hideTextWhileEditing; 
@property (nonatomic,retain) MCMontage * montage; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) double timeQuantum; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int mode; 
@property (readonly) char isOffscreen; 
@property (assign,nonatomic) char displaysFPS; 
@property (assign,nonatomic) char displaysPlayingIDs; 
@property (assign,nonatomic) char displaysIsPreloadingImages; 
@property (assign,nonatomic) char displaysTouchVisualFeedback; 
@property (assign,nonatomic) char displaysHitZonesVisualFeedback; 
@property (assign,nonatomic) char isEditing; 
@property (readonly) char isPlaying; 
@property (assign,nonatomic) char pushRendering; 
@property (assign,nonatomic) char requestRenderingOnChanges; 
@property (assign,nonatomic) char allowsThumbnails;                                                     //@synthesize allowsThumbnails=_allowsThumbnails - In the implementation block
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) char ignoresBackgroundAudio;                                               //@synthesize ignoresBackgroundAudio=_ignoresBackgroundAudio - In the implementation block
@property (readonly) NSDictionary * parameters; 
@property (nonatomic,retain) id<MZMediaManagement> assetManagementDelegate; 
@property (retain) id<MRFeatureDelegate> featureDelegate; 
@property (retain) id<MRRenderingDelegate> renderingDelegate; 
@property (retain) id<MREditingDelegate> editingDelegate; 
@property (assign,nonatomic) char interactivityIsEnabled;                                               //@synthesize interactivityIsEnabled=_interactivityIsEnabled - In the implementation block
@property (nonatomic,retain) MRCameraCaptureSession * cameraCaptureSession;                             //@synthesize cameraCaptureSession=_cameraCaptureSession - In the implementation block
@property (readonly) NSString * currentFocusedSlideAsset; 
@property (assign,nonatomic) double fadeInStartTime;                                                    //@synthesize fadeInStartTime=_fadeInStartTime - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                                                     //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutStartTime;                                                   //@synthesize fadeOutStartTime=_fadeOutStartTime - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                                                    //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) float interactiveTransitionTrackingBoxRadius;                              //@synthesize interactiveTransitionTrackingBoxRadius=_interactiveTransitionTrackingBoxRadius - In the implementation block
@property (assign,nonatomic) float interactiveTransitionProgressThreshold;                              //@synthesize interactiveTransitionProgressThreshold=_interactiveTransitionProgressThreshold - In the implementation block
@property (assign,nonatomic) float interactiveTransitionVelocityThreshold;                              //@synthesize interactiveTransitionVelocityThreshold=_interactiveTransitionVelocityThreshold - In the implementation block
@property (assign) char slaveFrameMode; 
@property (assign,nonatomic) double timestampOfLastRenderPass;                                          //@synthesize timestampOfLastRenderPass=_timestampOfLastRenderPass - In the implementation block
@property (assign,nonatomic) char logRenderingTimes;                                                    //@synthesize logRenderingTimes=_logRenderingTimes - In the implementation block
@property (readonly) NSString * renderingLogFilePath;                                                   //@synthesize renderingLogFilePath=_renderingLogFilePath - In the implementation block
@property (readonly) char isCleanedUp; 
@property (readonly) NSObject*<OS_dispatch_queue> renderDispatchQueue; 
@property (setter=suspendAsynchronousOperations:) char asynchronousOperationsAreSuspended;              //@synthesize asynchronousOperationsAreSuspended=_asynchronousOperationsAreSuspended - In the implementation block
+(float)textScaleForResolution:(CGSize)arg1 ;
+(char)isDiskImageCacheEnabled;
+(void)enableDiskImageCache;
-(void)touchesEnded:(id)arg1 ;
-(double)_unalteredTime;
-(double)slideZoomEnd:(id)arg1 ;
-(void)swapMontage:(id)arg1 ;
-(void)setDisplaysFPS:(char)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesMoved:(id)arg1 ;
-(char)displaysFPS;
-(void)stall;
-(void)warmupVideo:(char)arg1 ;
-(void)_r_pause;
-(void)_r_resume;
-(void)endTextEditing:(char)arg1 ;
-(double)slideZoomStart:(id)arg1 ;
-(void)_r_endMorphing;
-(void)_r_render;
-(void)_r_doSnapshot;
-(char)canGoForth;
-(void)deselectLayer:(id)arg1 ;
-(void)removeAudioObject:(id)arg1 ;
-(void)addAudioObject:(id)arg1 ;
-(void)setFeatureDelegate:(id<MRFeatureDelegate>)arg1 ;
-(void)setLiveSlideshowDelegate:(id<MRLiveSlideshowDelegate>)arg1 ;
-(void)setRequestRenderingOnChanges:(char)arg1 ;
-(void)setTransitionLayerPlugObjectID:(NSString *)arg1 ;
-(void)setSlideshowTime:(double)arg1 ;
-(char)asynchronousOperationsAreSuspended;
-(void)suspendAsynchronousOperations:(char)arg1 ;
-(char)hideTextWhileEditing;
-(void)gotoNextFocusedSlide:(char)arg1 ;
-(void)gotoNextInterestingTime:(char)arg1 ;
-(void)gotoPreviousFocusedSlide:(char)arg1 ;
-(void)gotoPreviousInterestingTime:(char)arg1 ;
-(void)setInteractivityIsEnabled:(char)arg1 ;
-(void)setRenderingDelegate:(id<MRRenderingDelegate>)arg1 ;
-(void)setAsynchronousOperationsDelegate:(id<MRAsynchronousOperationsDelegate>)arg1 ;
-(id)currentStateForMontageSwap;
-(void)beginMorphingToAspectRatio:(float)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(void)applyStateForMontageSwap:(id)arg1 ;
-(CGImageRef)currentFrameAsCGImage;
-(char)requestRenderingWithin:(double)arg1 ;
-(char)beginTextEditingOfElement:(id)arg1 inPlug:(id)arg2 callDelegate:(char)arg3 ;
-(void)imagePreloadingBegan;
-(void)imagePreloadingEnded;
-(int)_maxLinesForCurrentEditingTextElement;
-(CGSize)_maxSizeForCurrentEditingTextElement;
-(char)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint*)arg1 ;
-(void)setDisplaysTouchVisualFeedback:(char)arg1 ;
-(void)setDisplaysPlayingIDs:(char)arg1 ;
-(void)jumpToNextMarker;
-(void)jumpToPreviousMarker;
-(void)setSlideFocusModeBackgroundColor:(CGColorRef)arg1 ;
-(char)interactivityIsEnabled;
-(NSString *)currentFocusedSlideAsset;
-(char)canGoToMoreSlides:(char)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(NSString *)transitionLayerPlugObjectID;
-(void)moveNavigatorFromBackToForthHistory:(id)arg1 ;
-(void)removeNavigatorFromForthHistory:(id)arg1 ;
-(void)addNavigatorToBackHistory:(id)arg1 ;
-(void)moveNavigatorFromForthToBackHistory:(id)arg1 ;
-(id)chooseTransitionIDForRandomTransitionPresetID:(id)arg1 ;
-(void)addIDToDisplay:(id)arg1 :(id)arg2 ;
-(void)_adaptToPressureLevel:(int)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)nearingEndForSerializer:(id)arg1 ;
-(void)effect:(id)arg1 requestedNumberOfSlides:(unsigned)arg2 firstSlideIndexStillNeeded:(unsigned)arg3 ;
-(void)_r_beginMorphingToAspectRatio:(float)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(void)_r_snapshotForRotation;
-(id)slideInfosForCurrentElements;
-(char)slideshowIsPlaying;
-(void)_updateSelectionLayer;
-(void)_undimAllLayersInLayer:(id)arg1 ;
-(void)_dimLayersExceptForPathTo:(id)arg1 ;
-(void)_createSlideFocusLayer;
-(void)processAudioObjects;
-(void)_displayFPS:(double)arg1 actuallyDisplay:(char)arg2 ;
-(void)_playbackIsOverWithTime:(double)arg1 sendNotification:(char)arg2 ;
-(void)_r_renderRotation;
-(void)_r_renderForScreenBurnTestAtTime:(double)arg1 ;
-(void)_displayTouchVisualFeedback;
-(void)_displayHitZonesVisualFeedback;
-(void)_displayPlayingIDs;
-(void)_displayIsPreloadingImages;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 ;
-(void)_r_syncTimeToOuter;
-(char)beginTextEditingOfElement:(id)arg1 inLayer:(id)arg2 callDelegate:(char)arg3 ;
-(void)_renderThreadMain;
-(void)_startMonitoringThermalPressureLevelChanges;
-(void)_stopMonitoringThermalPressureLevelChanges;
-(void)setScreenBurnTest:(char)arg1 ;
-(void)_r_setTime:(double)arg1 isResyncing:(char)arg2 ;
-(void)_r_syncIsPlayingToOuter;
-(void)_r_stopRenderTimer;
-(char)_r_prerenderWithPassParameters:(id)arg1 ;
-(void)_r_startRenderTimer;
-(void)_r_renderWithPassParameters:(id)arg1 ;
-(void)_r_updateTimeWithDisplayLinkTimestamp:(double)arg1 ;
-(void)_renderOnDisplayLink:(id)arg1 ;
-(void)_startDisplayLinkOnRunloop;
-(char)_doActions;
-(double)slideshowTransitionEnd:(id)arg1 ;
-(double)slideshowTransitionCancel:(id)arg1 ;
-(void)_cleanupGestureRecognizers;
-(char)displaysTouchVisualFeedback;
-(id)layerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(char)arg2 localPoint:(CGPoint*)arg3 ;
-(id)defaultActionsWithHitLayer:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)_computeMatrixChainForLayer:(id)arg1 ;
-(void)_findAndHandleBestRecognizerInRecognizers:(id)arg1 ;
-(double)exitSlideFocusMode;
-(double)animateCurrentFocuserToSlideFocusModeWithDuration:(double)arg1 ;
-(double)exitSlideZoomMode:(char)arg1 ;
-(void)didGoToPreviousOrNextFocusedSlide:(char)arg1 withAction:(id)arg2 ;
-(MRCameraCaptureSession *)cameraCaptureSession;
-(double)slideZoomUpdate:(id)arg1 ;
-(double)slideZoomCancel:(id)arg1 ;
-(double)enterSlideZoomMode;
-(double)focusedTransitionStart:(id)arg1 ;
-(double)focusedTransitionUpdate:(id)arg1 ;
-(double)focusedTransitionEnd:(id)arg1 ;
-(double)focusedTransitionCancel:(id)arg1 ;
-(double)enterSlideFocusModeWithState:(id)arg1 animate:(char)arg2 ;
-(double)defaultPauseResumeOnTap:(char)arg1 ;
-(double)slideshowTransitionStart:(id)arg1 ;
-(double)slideshowTransitionUpdate:(id)arg1 ;
-(id)_layerForPlugObjectID:(id)arg1 ;
-(double)currentSlideshowTime;
-(void)willGoToPreviousOrNextFocusedSlide:(char)arg1 withAction:(id)arg2 animate:(char)arg3 ;
-(char)prerenderWithPassParameters:(id)arg1 ;
-(id<MRRenderingDelegate>)renderingDelegate;
-(void)setMontage:(MCMontage *)arg1 ;
-(MCMontage *)montage;
-(void)setAllowsThumbnails:(char)arg1 ;
-(void)disableFadeInAndOut;
-(void)setTimeQuantum:(double)arg1 ;
-(char)requestRenderingOnChanges;
-(void)requestRendering:(char)arg1 ;
-(void)setEAGLContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)renderDispatchQueue;
-(void)resetFadeInAndOut;
-(double)fadeOutStartTime;
-(void)setFadeOutStartTime:(double)arg1 ;
-(void)gotoState:(id)arg1 ;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 mode:(int)arg3 ;
-(char)ignoresBackgroundAudio;
-(char)isOffscreen;
-(id)actionByEvaluatingConditionalAction:(id)arg1 withStates:(id)arg2 ;
-(double)timeQuantum;
-(void)endMorphing;
-(void)setIsEditing:(char)arg1 ;
-(void)setPushRendering:(char)arg1 ;
-(void)setContextOffset:(CGPoint)arg1 ;
-(id)currentlyShowingAssetPaths;
-(char)displaysIsPreloadingImages;
-(id<MRLiveSlideshowDelegate>)liveSlideshowDelegate;
-(void)setSlaveFrameMode:(char)arg1 ;
-(id)layerAtPath:(id)arg1 fromLayer:(id)arg2 ;
-(void)undimAllLayers;
-(void)setUseCGLFlushDrawableWorkaround:(char)arg1 ;
-(void)warmupAudio:(char)arg1 ;
-(void)setTemporarySize:(CGSize)arg1 ;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 toTarget:(id)arg3 ;
-(char)slaveFrameMode;
-(void)setDisplaysIsPreloadingImages:(char)arg1 ;
-(char)displaysHitZonesVisualFeedback;
-(id<MRFeatureDelegate>)featureDelegate;
-(void)setHideTextWhileEditing:(char)arg1 ;
-(CGPoint)_fixProjectedPointForOrientation:(CGPoint)arg1 ;
-(char)allowsThumbnails;
-(void)setFadeInStartTime:(double)arg1 ;
-(char)logRenderingTimes;
-(void)_doLayerTrackingAtLocation:(CGPoint)arg1 ;
-(void)transitionToPreviousPlugInContainerOfPlug:(id)arg1 ;
-(void)dumpActiveHierarchy;
-(void)setTimestampOfLastRenderPass:(double)arg1 ;
-(void)setUsesExternalDisplayLink:(char)arg1 ;
-(void)setLogRenderingTimes:(char)arg1 ;
-(NSString *)renderingLogFilePath;
-(double)timestampOfLastRenderPass;
-(void)addNavigatorToForthHistory:(id)arg1 ;
-(void)transitionToNextPlugInContainerOfPlug:(id)arg1 ;
-(char)pushRendering;
-(id)selectedLayers;
-(id)plugForCurrentSublayerInNavigatorForPlug:(id)arg1 ;
-(id)snapshotOfStates:(id)arg1 atSize:(CGSize)arg2 ;
-(void)setFreezeSizeOfImageRequests:(char)arg1 ;
-(void)updateTimeWithDisplayLinkTimestamp:(double)arg1 ;
-(void)unfreeze;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 loop:(char)arg3 ;
-(char)screenBurnTest;
-(void)selectLayer:(id)arg1 ;
-(void)removeNavigatorFromBackHistory:(id)arg1 ;
-(id<MRAsynchronousOperationsDelegate>)asynchronousOperationsDelegate;
-(void)dimLayersExceptForPathTo:(id)arg1 ;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 andSize:(CGSize)arg2 ;
-(void)stepForward;
-(void)setCameraCaptureSession:(MRCameraCaptureSession *)arg1 ;
-(char)displaysPlayingIDs;
-(CGPoint)_fixPointForUnprojectionForOrientation:(CGPoint)arg1 ;
-(double)fadeInStartTime;
-(id)slideInfoForCurrentElement:(id)arg1 ;
-(void)deselectAllLayers;
-(void)setDisplaysHitZonesVisualFeedback:(char)arg1 ;
-(void)setIgnoresBackgroundAudio:(char)arg1 ;
-(char)isCleanedUp;
-(void)stepBackward;
-(CGPoint)contextOffset;
-(void)pauseWhenStill;
-(void)doAction:(id)arg1 ;
-(void)goForth;
-(double)_doAction:(id)arg1 ;
-(double)masterClock;
-(void)setMasterClock:(double)arg1 ;
-(void)freeze;
-(void)setInteractiveTransitionTrackingBoxRadius:(float)arg1 ;
-(void)setInteractiveTransitionProgressThreshold:(float)arg1 ;
-(void)setInteractiveTransitionVelocityThreshold:(float)arg1 ;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)currentState;
-(void)setSize:(CGSize)arg1 ;
-(MRContext *)context;
-(char)isEditing;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setEditingDelegate:(id<MREditingDelegate>)arg1 ;
-(void)resume;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<MREditingDelegate>)editingDelegate;
-(char)canGoBack;
-(void)goBack;
-(NSDictionary *)parameters;
-(void)cleanup;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)pause;
-(id)initWithParameters:(id)arg1 ;
-(double)_time;
-(void)sendNotification:(id)arg1 ;
-(id<MZMediaManagement>)assetManagementDelegate;
-(void)setAssetManagementDelegate:(id<MZMediaManagement>)arg1 ;
-(char)isFlipped;
-(float)volume;
-(void)pauseSlideshow;
-(void)resumeSlideshow;
-(float)interactiveTransitionTrackingBoxRadius;
-(float)interactiveTransitionProgressThreshold;
-(float)interactiveTransitionVelocityThreshold;
-(void)render;
@end

