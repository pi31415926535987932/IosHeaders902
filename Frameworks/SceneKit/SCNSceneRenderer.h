/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class SCNScene, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode;


@protocol SCNSceneRenderer <NSObject>
@property (nonatomic,retain) SCNScene * scene; 
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
@required
-(char)isPlaying;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(unsigned)renderingAPI;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1;
-(SCNNode *)pointOfView;
-(char)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(id)arg1;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(char)showsStatistics;
-(void)setShowsStatistics:(char)arg1;
-(unsigned)debugOptions;
-(void)setDebugOptions:(unsigned)arg1;
-(unsigned)colorPixelFormat;
-(unsigned)depthPixelFormat;
-(unsigned)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<SCNSceneRendererDelegate>)delegate;
-(void*)context;
-(id<MTLDevice>)device;
-(SCNScene *)scene;
-(void)setScene:(id)arg1;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(char)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(char)loops;
-(void)setLoops:(char)arg1;
-(char)isJitteringEnabled;
-(void)setJitteringEnabled:(char)arg1;
-(char)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(char)arg1;
-(void)setPointOfView:(id)arg1;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(void)setPlaying:(char)arg1;

@end

