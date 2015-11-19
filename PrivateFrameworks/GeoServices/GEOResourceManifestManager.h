/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxyDelegate.h>

@protocol GEOResourceManifestServerProxy;
@class NSHashTable, GEOActiveTileGroup, NSLock, NSDictionary, NSSet, NSMutableArray, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSString;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate> {

	id<GEOResourceManifestServerProxy> _serverProxy;
	NSHashTable* _serverProxyObservers;
	GEOActiveTileGroup* _activeTileGroup;
	NSLock* _activeTileGroupLock;
	NSDictionary* _resourceNamesToPaths;
	NSSet* _allResourceNames;
	char _needsToLoadTileGroupFromDisk;
	NSMutableArray* _tileGroupObservers;
	NSLock* _tileGroupObserversLock;
	NSLock* _closedCountLock;
	int _closedCount;
	GEOLocalizationRegionsInfo* _localizationRegionsInfo;
	NSMutableArray* _networkActivityHandlers;
	char _isUpdatingManifest;
	char _isLoadingResources;
	NSLock* _resourceNamesToPathsLock;
	GEOResourceManifestConfiguration* _configuration;

}

@property (nonatomic,readonly) id<GEOResourceManifestServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
@property (nonatomic,readonly) char hasActiveTileGroup; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)setServerProxyClass:(Class)arg1 ;
+(void)useLocalProxy;
+(void)useRemoteProxy;
+(void)disableServerConnection;
+(id)modernManagerForConfiguration:(id)arg1 ;
+(id)modernManager;
+(void)setHiDPI:(char)arg1 ;
+(id)modernManagerForTileGroupIdentifier:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_localeChanged:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)allResourceNames;
-(id)authToken;
-(id)_activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(void)devResourcesFolderDidChange;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(id<GEOResourceManifestServerProxy>)serverProxy;
-(char)hasResourceManifest;
-(unsigned)mapMatchingZoomLevel;
-(char)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(void)forceUpdate;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 ;
-(char)hasActiveTileGroup;
-(void)addTileGroupObserver:(id)arg1 queue:(id)arg2 ;
-(id)detailedDescription;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)activeTileGroupIdentifier;
-(void)removeTileGroupObserver:(id)arg1 ;
-(void)startObservingDevResources;
-(void)addServerProxyObserver:(id)arg1 ;
-(void)removeServerProxyObserver:(id)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(void)addNetworkActivityHandler:(/*^block*/id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(void)resetActiveTileGroup;
-(void)stopObservingDevResources;
-(void)closeServerConnection;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(void)openServerConnection;
-(void)_buildResourceNamesToPaths;
-(void)updateManifest:(/*^block*/id)arg1 ;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1 ;
-(int)mapMatchingTileSetStyle;
-(id)allRegionalResourceNames;
-(char)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1 ;
-(id)_loadActiveTileGroupIfNecessary:(char)arg1 ;
-(void)_notifyObserversOfResourcesChange;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1 ;
-(id)baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLStringIfNecessaryForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3 ;
@end

