/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneHost.h>

@protocol FBSceneDelegate, FBSceneClient, FBSceneClientProvider;
@class NSString, FBSDisplay, FBSceneLayerManager, FBSceneHostManager, FBProcess, FBSMutableSceneSettings, FBSSceneSettings, FBSSceneClientSettings, NSHashTable, FBWindowContextManager, FBWindowContextHostManager;

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost> {

	FBSceneLayerManager* _layerManager;
	FBSceneHostManager* _hostManager;
	char _valid;
	id<FBSceneDelegate> _delegate;
	id<FBSceneClient> _client;
	id<FBSceneClientProvider> _clientProvider;
	FBProcess* _clientProcess;
	NSString* _identifier;
	FBSDisplay* _display;
	FBSMutableSceneSettings* _mutableSettings;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	NSHashTable* _geometryObservers;
	unsigned _transactionID;
	char _lockedForMutation;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplay * display;                                         //@synthesize display=_display - In the implementation block
@property (nonatomic,retain,readonly) FBSceneLayerManager * layerManager;                           //@synthesize layerManager=_layerManager - In the implementation block
@property (nonatomic,retain,readonly) FBSceneHostManager * hostManager;                             //@synthesize hostManager=_hostManager - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * settings;                                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneClientSettings * clientSettings;                      //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain,readonly) FBProcess * clientProcess;                                    //@synthesize clientProcess=_clientProcess - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid;                                           //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain,readonly) FBWindowContextManager * contextManager; 
@property (nonatomic,retain,readonly) FBWindowContextHostManager * contextHostManager; 
@property (nonatomic,retain,readonly) id<FBSceneClient> client;                                     //@synthesize client=_client - In the implementation block
@property (nonatomic,retain,readonly) id<FBSceneClientProvider> clientProvider;                     //@synthesize clientProvider=_clientProvider - In the implementation block
@property (assign,nonatomic) id<FBSceneDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) FBSMutableSceneSettings * mutableSettings;                    //@synthesize mutableSettings=_mutableSettings - In the implementation block
@property (nonatomic,readonly) unsigned _transactionID;                                             //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,setter=_setLockedForMutation:,nonatomic) char _lockedForMutation;                 //@synthesize lockedForMutation=_lockedForMutation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)accessibilitySceneFrame;
-(char)accessibilitySceneOwnerIsAUIApplication;
-(char)accessibilityIsSceneOnMainScreen;
-(id)accessibilitySceneProcess;
-(char)accessibilitySceneBelongsToTheSystemApp;
-(char)accessibilitySceneIsDeactivatedBySidebar;
-(char)accessibilitySceneIsDeactivatedBySwitcher;
-(char)accessibilityIsShowingSheet;
-(char)accessibilitySceneIsForegroundVisible;
-(id)accessibilitySceneIdentifier;
-(id)accessibilityScenePID;
-(float)accessibilitySceneLevel;
-(char)accessibilityIsSceneOccluded;
-(char)accessibilitySceneIsRunningInForeground;
-(id)accessibilitySceneDescription;
-(FBWindowContextManager *)contextManager;
-(void)setDelegate:(id<FBSceneDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<FBSceneDelegate>)delegate;
-(FBSSceneSettings *)settings;
-(NSString *)identifier;
-(id)uiSettings;
-(id)uiClientSettings;
-(void)sendActions:(id)arg1 ;
-(FBSDisplay *)display;
-(char)isValid;
-(id)snapshotContext;
-(FBSSceneClientSettings *)clientSettings;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)createSnapshotWithContext:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_addSceneGeometryObserver:(id)arg1 ;
-(void)_removeSceneGeometryObserver:(id)arg1 ;
-(FBSceneLayerManager *)layerManager;
-(FBSceneHostManager *)hostManager;
-(unsigned)_transactionID;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 attachLayer:(id)arg2 ;
-(void)client:(id)arg1 updateLayer:(id)arg2 ;
-(void)client:(id)arg1 detachLayer:(id)arg2 ;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)client:(id)arg1 didReceiveActions:(id)arg2 ;
-(FBProcess *)clientProcess;
-(void)updateUISettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)updateUISettingsWithBlock:(/*^block*/id)arg1 ;
-(int)currentInterfaceOrientation;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 display:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 ;
-(id<FBSceneClientProvider>)clientProvider;
-(FBSMutableSceneSettings *)mutableSettings;
-(char)_lockedForMutation;
-(void)_setLockedForMutation:(char)arg1 ;
-(unsigned)_incrementTransactionID;
-(void)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidateWithTransitionContext:(id)arg1 ;
-(void)_handleSceneClientMessage:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(FBWindowContextHostManager *)contextHostManager;
-(id<FBSceneClient>)client;
-(id)createSnapshot;
@end

