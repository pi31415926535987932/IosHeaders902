/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <VectorKit/VectorKit-Structs.h>
@class VKWorld, NSMutableArray, NSObject, NSArray;

@interface VKModelObject : NSObject {

	VKWorld* _world;
	VKModelObject* _supermodel;
	NSMutableArray* _submodels;
	char _active;
	unsigned _needsLayout;
	unsigned _needsDisplay;
	NSObject*<OS_dispatch_semaphore> _drawReady;
	map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > >* _commandBuffers;
	CommandBufferIdSet* _supportedPassIds;

}

@property (assign,nonatomic) VKWorld * world;                                            //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) NSArray * submodels;                                      //@synthesize submodels=_submodels - In the implementation block
@property (nonatomic,readonly) VKModelObject * supermodel;                               //@synthesize supermodel=_supermodel - In the implementation block
@property (nonatomic,readonly) shared_ptr<gss::StyleManager>* styleManager; 
@property (assign,getter=isActive,nonatomic) char active;                                //@synthesize active=_active - In the implementation block
-(void)runAnimation:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setNeedsLayout;
-(id)init;
-(char)isActive;
-(void)reset;
-(void)setActive:(char)arg1 ;
-(void)didReceiveMemoryWarning:(char)arg1 ;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)addSubmodel:(id)arg1 ;
-(void)lockCommandBuffers:(RenderQueue*)arg1 ;
-(const CommandBufferIdSet*)supportedRenderPasses;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)clearCommandBuffers;
-(void)setSupermodel:(VKModelObject *)arg1 ;
-(void)didMoveToSupermodel;
-(char)shouldLayoutWithoutStyleManager;
-(NSArray *)submodels;
-(VKWorld *)world;
-(VKModelObject *)supermodel;
-(void)willMoveToSupermodel:(id)arg1 ;
-(void)unLockCommandBuffers:(RenderQueue*)arg1 ;
-(void)removeSubmodel:(id)arg1 ;
-(void)didRemoveFromSuperModel;
-(void)_removeSubmodel:(id)arg1 ;
-(void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 dispatchQueue:(id)arg4 ;
-(void)setWorld:(VKWorld *)arg1 ;
-(void)removeFromSupermodel;
-(void)setSupportedPasses:(const CommandBufferIdSet*)arg1 ;
@end

