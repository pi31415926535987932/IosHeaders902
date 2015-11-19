/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSceneLayerHostContainerViewDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSceneHostManagerDelegate;
@class FBSceneLayerManager, FBScene, NSString, UIColor, FBSceneLayerHostContainerView, FBSceneHostWrapperView, FBOrderedRequesters, NSMutableDictionary, NSHashTable;

@interface FBSceneHostManager : NSObject <FBSceneLayerHostContainerViewDelegate, BSDescriptionProviding> {

	FBSceneLayerManager* _layerManager;
	FBScene* _scene;
	NSString* _identifier;
	UIColor* _defaultBackgroundColorWhileHosting;
	UIColor* _defaultBackgroundColorWhileNotHosting;
	unsigned _defaultHostedLayerTypes;
	FBSceneLayerHostContainerView* _hostView;
	FBSceneHostWrapperView* _activeWrapperView;
	char _suspended;
	char _invalidated;
	FBOrderedRequesters* _hostRequesters;
	NSMutableDictionary* _hostWrapperViewsByRequester;
	NSHashTable* _observers;
	id<FBSceneHostManagerDelegate> _delegate;
	struct {
		unsigned delegateOverrideRequester : 1;
		unsigned DEPRECATED_delegateOverrideRequester : 1;
		unsigned delegateShouldEnableContextHostingForRequester : 1;
		unsigned DEPRECATED_delegateShouldEnableContextHostingForRequester : 1;
	}  _flags;

}

@property (assign,nonatomic) id<FBSceneHostManagerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) FBScene * scene;                                   //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) char invalidated;                    //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy) UIColor * defaultBackgroundColorWhileHosting; 
@property (nonatomic,copy) UIColor * defaultBackgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned defaultHostedLayerTypes;                           //@synthesize defaultHostedLayerTypes=_defaultHostedLayerTypes - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) char suspended;                        //@synthesize suspended=_suspended - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isSuspended;
-(void)setDelegate:(id<FBSceneHostManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBSceneHostManagerDelegate>)delegate;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDefaultHostedLayerTypes:(unsigned)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_wrapperViewForRequester:(id)arg1 ;
-(id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(char)arg2 ;
-(void)enableHostingForRequester:(id)arg1 priority:(int)arg2 ;
-(id)_overrideRequesterIfNecessary:(id)arg1 ;
-(void)_activateRequester:(id)arg1 ;
-(id)succinctDescription;
-(void)suspendLayerHosting;
-(void)disableHostingForRequester:(id)arg1 ;
-(id)visibleLayersForRequester:(id)arg1 ;
-(void)setLayer:(id)arg1 hidden:(char)arg2 forRequester:(id)arg3 ;
-(id)_hostViewForRequester:(id)arg1 ;
-(id)snapshotContextForRequester:(id)arg1 ;
-(id)_snapshotContextForFrame:(CGRect)arg1 excludedContextIDs:(id)arg2 opaque:(char)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(id)snapshotViewWithContext:(id)arg1 ;
-(id)_snapshotContextForFrame:(CGRect)arg1 excludedLayers:(id)arg2 opaque:(char)arg3 ;
-(void)enableHostingForRequester:(id)arg1 orderFront:(char)arg2 ;
-(id)visibleLayers;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)sceneLayerHostContainerViewHostedLayersDidChange:(id)arg1 ;
-(id)initWithLayerManager:(id)arg1 scene:(id)arg2 ;
-(void)setDefaultBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColorWhileHosting;
-(void)setDefaultBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColorWhileNotHosting;
-(id)hostViewForRequester:(id)arg1 ;
-(id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned)arg2 ;
-(id)hostViewForRequester:(id)arg1 enableAndOrderFront:(char)arg2 ;
-(id)hostViewForRequester:(id)arg1 enableAndOrderFront:(char)arg2 appearanceStyle:(unsigned)arg3 ;
-(void)resumeLayerHosting;
-(void)orderRequesterFront:(id)arg1 ;
-(void)setContextId:(unsigned)arg1 hidden:(char)arg2 forRequester:(id)arg3 ;
-(id)snapshotViewForSnapshot:(id)arg1 ;
-(id)snapshotViewWithFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(char)arg3 ;
-(id)snapshotUIImageForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(char)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(CGImageRef)snapshotCGImageRefForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(char)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(IOSurfaceRef)snapshotIOSurfaceForFrame:(CGRect)arg1 excludingContexts:(id)arg2 opaque:(char)arg3 outTransform:(CGAffineTransform*)arg4 ;
-(id)visibleContexts;
-(char)isInvalidated;
-(unsigned)defaultHostedLayerTypes;
-(FBScene *)scene;
@end

