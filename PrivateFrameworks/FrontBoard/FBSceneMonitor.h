/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>

@protocol FBSceneMonitorDelegate;
@class FBScene, NSString, NSMutableSet, NSMutableDictionary, FBSSceneClientSettingsDiffInspector, FBSMutableSceneSettings, FBSSceneSettings;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneLayerManagerObserver, FBSceneMonitorDelegate> {

	FBScene* _scene;
	NSString* _sceneID;
	NSMutableSet* _externalSceneIDs;
	NSMutableSet* _pairedExternalSceneIDs;
	NSMutableDictionary* _monitorsBySceneID;
	NSMutableDictionary* _updateContextsByTransactionID;
	FBSSceneClientSettingsDiffInspector* _diffInspector;
	FBSMutableSceneSettings* _sceneSettings;
	FBSMutableSceneSettings* _effectiveSettings;
	FBSSceneSettings* _lastCommitSettings;
	char _monitorSettings;
	char _monitorEffectiveSettings;
	char _monitorPairing;
	char _monitorClientSettings;
	char _monitorSceneCommits;
	char _invalidated;
	char _isSynchronizing;
	char _updateSettingsAfterSync;
	char _updateExternalScenesAfterSync;
	id<FBSceneMonitorDelegate> _delegate;

}

@property (nonatomic,retain,readonly) FBScene * scene;                                        //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                                       //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) id<FBSceneMonitorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * sceneSettings;                       //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * effectiveSceneSettings;              //@synthesize effectiveSettings=_effectiveSettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScene:(id)arg1 ;
-(void)setDelegate:(id<FBSceneMonitorDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBSceneMonitorDelegate>)delegate;
-(void)invalidate;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned)arg3 toIndex:(unsigned)arg4 ;
-(NSString *)sceneID;
-(id)initWithSceneID:(id)arg1 ;
-(void)_updateScenePairingState:(char)arg1 ;
-(void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 ;
-(void)_updateAllSceneStateIgnoringDelegate;
-(void)_updateSceneSettings:(char)arg1 ;
-(void)_updateExternalScenes:(char)arg1 ;
-(void)_updateEffectiveSceneSettings:(char)arg1 ;
-(FBSSceneSettings *)effectiveSceneSettings;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3 ;
-(char)isPairedWithExternalSceneID:(id)arg1 ;
-(FBSSceneSettings *)sceneSettings;
-(FBScene *)scene;
@end

