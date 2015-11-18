/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <SpringBoard/SBMainAppSwitcherPageContentView.h>

@protocol FBSceneHostView, SBAppViewBackgroundView;
@class SBApplication, FBSDisplay, FBSceneMonitor, UIApplicationSceneClientSettingsDiffInspector, NSString, UIView, SBSceneViewAppIconView, SBAppViewStatusBarDescriptor;

@interface SBAppView : UIView <FBSceneMonitorDelegate, SBAppViewHostRequester, SBMainAppSwitcherPageContentView> {

	SBApplication* _application;
	CGSize _referenceSize;
	int _orientation;
	FBSDisplay* _display;
	int _displayMode;
	int _effectiveDisplayMode;
	unsigned _options;
	FBSceneMonitor* _sceneMonitor;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsInspector;
	char _invalidated;
	int _contextHostingPriority;
	NSString* _contextHostingRequester;
	UIView* _clientPlaceholderView;
	UIView* _staticContentView;
	UIView* _sceneSnapshotView;
	UIView*<FBSceneHostView> _contextHostView;
	UIView* _crossfadeView;
	UIView*<SBAppViewBackgroundView> _backgroundView;
	SBSceneViewAppIconView* _cachedResizeIconView;
	SBAppViewStatusBarDescriptor* _statusBarDescriptor;

}

@property (nonatomic,retain,readonly) SBApplication * application;                            //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize;                                          //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) int orientation;                                                 //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplay * display;                                   //@synthesize display=_display - In the implementation block
@property (nonatomic,readonly) int displayMode;                                               //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) int effectiveDisplayMode;                                      //@synthesize effectiveDisplayMode=_effectiveDisplayMode - In the implementation block
@property (nonatomic,readonly) unsigned displayModeOptions;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) UIView * placeholderView; 
@property (nonatomic,retain) UIView*<SBAppViewBackgroundView> backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) int contextHostingPriority;                                    //@synthesize contextHostingPriority=_contextHostingPriority - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextHostingRequester;                       //@synthesize contextHostingRequester=_contextHostingRequester - In the implementation block
@property (nonatomic,retain) UIView * sceneSnapshotView;                                      //@synthesize sceneSnapshotView=_sceneSnapshotView - In the implementation block
@property (nonatomic,retain) SBSceneViewAppIconView * cachedResizeIconView;                   //@synthesize cachedResizeIconView=_cachedResizeIconView - In the implementation block
@property (nonatomic,retain) SBAppViewStatusBarDescriptor * statusBarDescriptor;              //@synthesize statusBarDescriptor=_statusBarDescriptor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDisplayModeAnimationFactory;
-(int)setDisplayMode:(int)arg1 options:(unsigned)arg2 withAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithApp:(id)arg1 referenceSize:(CGSize)arg2 orientation:(int)arg3 display:(id)arg4 hostRequester:(id)arg5 ;
-(id)_newDefaultBackgroundView;
-(int)appViewRequesterPriority:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(void)_enableContextHosting;
-(void)_updateStatusBarVisibilityForContextHostView;
-(void)_updateBackgroundViewTinting;
-(id)initWithApp:(id)arg1 referenceSize:(CGSize)arg2 orientation:(int)arg3 display:(id)arg4 ;
-(void)_disableContextHosting;
-(char)_forcesStatusBarHidden;
-(SBAppViewStatusBarDescriptor *)statusBarDescriptor;
-(void)_clearSnapshotViews;
-(void)setPlaceholderView:(id)arg1 withAnimationFactory:(id)arg2 ;
-(void)_crossfadeFromDisplayMode:(int)arg1 showingView:(id)arg2 toDisplayMode:(int)arg3 showingView:(id)arg4 options:(unsigned)arg5 withAnimationFactory:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_setEffectiveDisplayMode:(int)arg1 options:(unsigned)arg2 withAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_activationStateDidChange:(id)arg1 ;
-(void)_updateStatusBarVisibility;
-(void)_recheckLiveContentDependencies;
-(void)_configureViewForEffectiveDisplayMode:(int)arg1 ;
-(id)_viewForDisplayMode:(int)arg1 ;
-(int)_bestDisplayModeLessThanMode:(int)arg1 ;
-(void)_configureStaticContentView;
-(void)_configureSceneSnapshotView;
-(void)_configureContextHostView;
-(id)_snapshotOrDefaultImageView;
-(CGSize)_naturalSize;
-(char)_hasLiveContent;
-(id)_sceneContentSnapshotView;
-(void)_makeSceneContentSnapshotViewOnBackgroundQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSceneSnapshotView:(UIView *)arg1 ;
-(void)makeLiveSnapshotViewOnBackgroundQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateReferenceSize:(CGSize)arg1 andOrientation:(int)arg2 ;
-(int)effectiveDisplayMode;
-(void)_hotSwapStaticContentView;
-(void)_hotSwapLiveSnapshotView;
-(void)setDisplayMode:(int)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setForcesStatusBarHidden:(char)arg1 ;
-(void)setStatusBarDescriptor:(SBAppViewStatusBarDescriptor *)arg1 ;
-(id)liveSnapshotView;
-(void)updateSceneSnapshotViewOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)contextHostingRequester;
-(int)contextHostingPriority;
-(unsigned)displayModeOptions;
-(UIView *)sceneSnapshotView;
-(SBSceneViewAppIconView *)cachedResizeIconView;
-(void)setCachedResizeIconView:(SBSceneViewAppIconView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(FBSDisplay *)display;
-(void)setCornerRadius:(float)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(float)cornerRadius;
-(void)setBackgroundView:(UIView*<SBAppViewBackgroundView>)arg1 ;
-(UIView*<SBAppViewBackgroundView>)backgroundView;
-(int)displayMode;
-(void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2 ;
-(CGSize)referenceSize;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
-(SBApplication *)application;
@end

