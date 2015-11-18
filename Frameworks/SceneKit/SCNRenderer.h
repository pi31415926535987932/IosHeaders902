/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@protocol OS_dispatch_queue, SCNRenderContext, SCNSceneRenderer;
@class SCNScene, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode, NSLock, NSObject, SCNRendererTransitionContext, EAGLContext, UIColor, SCNTechnique, __SKSCNRenderer, NSString;

@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport> {

	SCNScene* _scene;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> __renderingQueue;
	unsigned __antialiasingMode;
	SCD_Struct_SC60* _framebufferInfo;
	id _mtlTexture;
	unsigned _shouldDeleteFramebuffer : 1;
	unsigned _pointOfViewWasSet : 1;
	unsigned _isPrivateRenderer : 1;
	unsigned _isViewPrivateRenderer : 1;
	unsigned _doingSnapshot : 1;
	double _currentSceneTime;
	double _currentSystemTime;
	double _deltaTime;
	double _forceSystemTime;
	double _lastSystemTime;
	double __nextFrameTime;
	SCNRendererTransitionContext* _transitionContext;
	char _playing;
	char _isAnimating;
	char _loops;
	id _delegate;
	C3DEngineContextRef _engineContext;
	unsigned _renderingAPI;
	SCNVector4 __viewport;
	EAGLContext* _glContext;
	id<SCNRenderContext> _renderContext;
	unsigned _jitteringEnabled : 1;
	unsigned _frozen : 1;
	unsigned _delegateSupportsWillRender : 1;
	unsigned _delegateSupportsDidRender : 1;
	unsigned _delegateSupportsDidApplyAnimations : 1;
	unsigned _delegateSupportsUpdate : 1;
	unsigned _delegateSupportsDidSimulatePhysics : 1;
	UIColor* _backgroundColor;
	C3DColor4 _c3dBackgroundColor;
	SCNNode* _pointOfView;
	SCNRenderer* _preloadRenderer;
	id<SCNSceneRenderer> _privateRendererOwner;
	SCNTechnique* _technique;
	__SKSCNRenderer* _overlayRenderer;
	id _overlayScene;
	char _disableOverlays;
	char _showStatistics;
	double _statisticsTimeStamp;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (nonatomic,readonly) double nextFrameTime; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) char playing; 
@property (assign,nonatomic) char loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) char autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) char jitteringEnabled; 
@property (assign,nonatomic) char showsStatistics; 
@property (assign,nonatomic) unsigned debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned colorPixelFormat; 
@property (nonatomic,readonly) unsigned depthPixelFormat; 
@property (nonatomic,readonly) unsigned stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(id)rendererWithContext:(id)arg1 options:(id)arg2 ;
+(id)rendererWithDevice:(id)arg1 options:(id)arg2 ;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(void)_render;
-(char)isPlaying;
-(void*)__CFObject;
-(void)_jitterAtStep:(unsigned)arg1 updateMainFramebuffer:(char)arg2 redisplay:(char)arg3 jitterer:(id)arg4 ;
-(id)_authoringEnvironment;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(id)currentRenderPassDescriptor;
-(C3DEngineContextRef)_engineContext;
-(char)_showsAuthoringEnvironment;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(unsigned)renderingAPI;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(void)_updateEngineCallbacks;
-(void)_attachTexture:(id)arg1 ;
-(void)_detachTexture:(id)arg1 ;
-(unsigned)_sampleCount;
-(id)_initWithOptions:(id)arg1 isPrivateRenderer:(char)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(char)arg4 context:(void*)arg5 renderingAPI:(unsigned)arg6 ;
-(SCNNode *)pointOfView;
-(C3DColor4*)_backgroundColorComponents;
-(void)_invalidateFramebuffer;
-(float)_contentsScaleFactor;
-(id)metalLayer;
-(void)_deleteFramebuffer;
-(void)_createFramebufferIfNeeded;
-(unsigned)_antialiasingMode;
-(SCNVector3)_projectPoint:(SCNVector3)arg1 viewport:(CGSize)arg2 ;
-(SCNVector3)_unprojectPoint:(SCNVector3)arg1 viewport:(CGSize)arg2 ;
-(void)_prepareForTransition:(id)arg1 outgoingScene:(id)arg2 outgoingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_defaultPOVForScene:(id)arg1 ;
-(id)metalDevice;
-(id)_setupSKRendererIfNeeded;
-(char)_installContext;
-(void)_bindFramebuffer:(char)arg1 ;
-(char)_preloadResource:(id)arg1 abortHandler:(/*^block*/id)arg2 ;
-(char)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)_setSceneTime:(double)arg1 ;
-(void)_renderAtTime:(double)arg1 viewport:(CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 commandBuffer:(id)arg6 ;
-(void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1 ;
-(double)_systemTime;
-(void)set_systemTime:(double)arg1 ;
-(void)_update:(C3DSceneRef)arg1 rendererContext:(_C3DRendererContext*)arg2 ;
-(void)_draw;
-(void)_renderScene:(C3DEngineContextRef)arg1 sceneTime:(double)arg2 ;
-(void)updateAndDrawStatisticsIfNeeded;
-(char)_drawSceneWithNewRenderer:(C3DSceneRef)arg1 ;
-(char)_drawSceneWithLegacyRenderer:(C3DSceneRef)arg1 ;
-(void)set_nextFrameTime:(double)arg1 ;
-(void)_clearBuffers;
-(void)_installViewport;
-(void)_acquireCurrentViewport;
-(id)_prepareSKRenderer;
-(SCNVector4)_viewport;
-(void)set_viewport:(SCNVector4)arg1 ;
-(void)renderAtTime:(double)arg1 ;
-(void)_drawScene:(C3DSceneRef)arg1 ;
-(void)_renderAtTime:(double)arg1 ;
-(void)_updatePointOfView;
-(void)set_deltaTime:(double)arg1 ;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(id)_hitTest:(CGPoint)arg1 viewport:(CGSize)arg2 options:(id)arg3 ;
-(char)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(CGSize)arg3 ;
-(id)_nodesInsideFrustumWithPointOfView:(id)arg1 viewport:(CGSize)arg2 ;
-(void)_pause;
-(void)_unbindFramebuffer;
-(void)_resolveAndDiscard;
-(void)set_showsAuthoringEnvironment:(char)arg1 ;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)showsStatistics;
-(void)setShowsStatistics:(char)arg1 ;
-(unsigned)debugOptions;
-(void)setDebugOptions:(unsigned)arg1 ;
-(unsigned)colorPixelFormat;
-(unsigned)depthPixelFormat;
-(unsigned)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)setupForDeprecatedOffscreenRenderer;
-(void)_setBackingSize:(CGSize)arg1 ;
-(void)set_antialiasingMode:(unsigned)arg1 ;
-(_C3DRendererContext*)_rendererContext;
-(void)_projectPoints:(SCNVector3*)arg1 count:(unsigned)arg2 viewport:(CGSize)arg3 ;
-(void)_didRenderScene:(id)arg1 ;
-(void)_willRenderScene:(id)arg1 ;
-(void)setAutoAdjustCamera:(char)arg1 ;
-(char)autoAdjustCamera;
-(void)setScene:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)disableOverlays;
-(void)setDisableOverlays:(char)arg1 ;
-(id)programWithNode:(id)arg1 withMaterial:(id)arg2 ;
-(double)_nextFrameTime;
-(double)nextFrameTime;
-(void)renderAtTime:(double)arg1 viewport:(CGRect)arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4 ;
-(void)renderAtTime:(double)arg1 viewport:(CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 ;
-(char)_needsRepetitiveRedraw;
-(void)_updateWithSystemTime:(double)arg1 ;
-(void)_drawWithJitteringPresentationMode;
-(void)_drawOverlaySceneAtTime:(double)arg1 ;
-(id)_snapshotWithImageSize:(CGSize)arg1 backingSize:(CGSize)arg2 ;
-(char)jitteringEnabled;
-(char)frozen;
-(void)_displayLinkStatsTick;
-(void)_displayLinkStatsTack;
-(void)_presentFramebuffer;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<SCNSceneRendererDelegate>)delegate;
-(void*)context;
-(void)lock;
-(void)unlock;
-(void)setFrozen:(char)arg1 ;
-(void)setContext:(void*)arg1 ;
-(void)_stop;
-(id<MTLDevice>)device;
-(SCNTechnique *)technique;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(id)_renderingQueue;
-(SCNScene *)scene;
-(void)setScene:(SCNScene *)arg1 ;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(char)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(char)loops;
-(void)setLoops:(char)arg1 ;
-(char)isJitteringEnabled;
-(void)setJitteringEnabled:(char)arg1 ;
-(char)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(char)arg1 ;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(void)_play;
-(void)render;
-(void)setPlaying:(char)arg1 ;
@end
