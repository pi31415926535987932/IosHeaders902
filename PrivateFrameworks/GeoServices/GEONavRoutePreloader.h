/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORoutePreloader.h>

@protocol GEORoutePreloadCamera;
@class GEOTileKeyList, NSMutableArray, NSMapTable, NSTimer;

@interface GEONavRoutePreloader : GEORoutePreloader {

	id<GEORoutePreloadCamera> _camera;
	GEOTileKeyList* _tilesLoadingOrLoaded;
	GEOTileKeyList* _tilesReceived;
	GEOTileKeyList* _tilesMissed;
	NSMutableArray* _steps;
	unsigned _stepGeneration;
	char _tooFarFromRoute;
	int _currentLoadingSteps;
	NSMapTable* _stepErrors;
	NSMapTable* _stepLifetimeErrors;
	char _anyErrors;
	char _finished;
	double _beginTime;
	double _mostRecentErrorTime;
	char _hadEnoughTilesToDisableNetworking;
	NSTimer* _geodCrashTimer;
	double _maneuverSizeInMeters;

}

@property (nonatomic,retain) id<GEORoutePreloadCamera> camera;              //@synthesize camera=_camera - In the implementation block
-(void)dealloc;
-(void)stopLoading;
-(void)_retryFailuresWithErrorsReset:(char)arg1 ;
-(char)minimalDebuggingEnabled;
-(char)fullDebuggingEnabled;
-(char)loggingEnabled;
-(void)_cancelPreloadTasks;
-(void)preloaderLog:(id)arg1 ;
-(char)isSufficientlyLoaded;
-(void)setTraits:(id)arg1 ;
-(void)setNetworkQuality:(unsigned)arg1 ;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE16*)arg1 maxLength:(unsigned)arg2 actualLength:(unsigned*)arg3 ;
-(void)updateWithRouteMatch:(id)arg1 ;
-(int)preloadStateForTile:(const GEOTileKey*)arg1 ;
-(void)beginLoading;
-(id)initWithRoute:(id)arg1 loggingEnabled:(char)arg2 minimalDebugging:(char)arg3 fullDebugging:(char)arg4 batteryHandler:(/*^block*/id)arg5 ;
-(void)_geodCrashed:(id)arg1 ;
-(void)_performNextRequests;
-(void)_cancelStep:(id)arg1 ;
-(void)_incrementErrorForStep:(id)arg1 ;
-(void)_cancelRequestsInPast;
-(void)_cancelAllSteps;
-(void)_accumulateSteps;
-(id)_descriptionForStep:(id)arg1 ;
-(void)_resetErrCounts;
-(void)_evaluateNetworkPerformance:(id)arg1 ;
-(char)_loadStep:(id)arg1 requireWiFi:(char)arg2 ;
-(void)setCamera:(id<GEORoutePreloadCamera>)arg1 ;
-(id<GEORoutePreloadCamera>)camera;
@end

