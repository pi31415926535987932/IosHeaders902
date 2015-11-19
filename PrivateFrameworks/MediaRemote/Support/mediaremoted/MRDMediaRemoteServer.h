/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDMediaRemoteClientDelegate.h>
#import <mediaremoted/MRDXPCMessageHandling.h>
#import <mediaremoted/MRDNowPlayingDataSourceDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, MRDNowPlayingDataSource, MRDNowPlayingInfoServer, MRDAirPlayServer, MRDRemoteControlServer, MRDBrowsableContentServer, MRDMediaRemoteClient, NSMutableDictionary, NSMutableArray, NSMutableSet, MRMutableApplicationActivity, NSArray, NSString;

@interface MRDMediaRemoteServer : NSObject <MRDMediaRemoteClientDelegate, MRDXPCMessageHandling, MRDNowPlayingDataSourceDelegate> {

	NSObject*<OS_xpc_object> _listenerConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	MRDNowPlayingDataSource* _localNowPlayingDataSource;
	MRDNowPlayingInfoServer* _nowPlayingInfoServer;
	MRDAirPlayServer* _airplayServer;
	MRDRemoteControlServer* _remoteControlServer;
	MRDBrowsableContentServer* _browsableContentServer;
	MRDMediaRemoteClient* _overrideClient;
	NSMutableDictionary* _activeClients;
	NSMutableDictionary* _customOrigins;
	NSMutableArray* _applicationStateMonitors;
	NSMutableSet* _runAssertions;
	MROriginRef _activeOrigin;
	MRMutableApplicationActivity* _currentAppActivity;
	int _nowPlayingApplicationDidChangeToken;
	int _nowPlayingApplicationIsPlayingDidChangeToken;
	NSMutableDictionary* _customOriginIsPlayingTokens;

}

@property (nonatomic,readonly) NSArray * availableOrigins; 
@property (nonatomic,readonly) NSArray * customOrigins; 
@property (nonatomic,readonly) MRDNowPlayingInfoServer * nowPlayingInfoServer;              //@synthesize nowPlayingInfoServer=_nowPlayingInfoServer - In the implementation block
@property (nonatomic,readonly) int localNowPlayingPID; 
@property (nonatomic,readonly) NSString * localNowPlayingAppDisplayID; 
@property (nonatomic,readonly) char localNowPlayingApplicationIsPlaying; 
@property (nonatomic,readonly) char nowPlayingClientIsPlaying; 
@property (nonatomic,retain) MRDMediaRemoteClient * overrideClient; 
@property (nonatomic,readonly) MRDMediaRemoteClient * localNowPlayingClient; 
@property (nonatomic,readonly) MRDMediaRemoteClient * systemMediaClient; 
@property (nonatomic,readonly) MRDMediaRemoteClient * frontmostClient; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(MROriginRef)copyActiveOrigin;
-(unsigned)resolveContextualCommandForCurrentNowPlaying:(unsigned)arg1 ;
-(void)pickRouteWithUID:(id)arg1 ;
-(NSString *)localNowPlayingAppDisplayID;
-(id)clientForBundleIdentifier:(id)arg1 ;
-(id)clientWithRegisteredCustomOrigin:(MROriginRef)arg1 ;
-(MRDMediaRemoteClient *)frontmostClient;
-(MRDMediaRemoteClient *)systemMediaClient;
-(MRDMediaRemoteClient *)localNowPlayingClient;
-(void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2 ;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(MROriginRef)copyAvailableOriginMatchingUniqueIdentifier:(int)arg1 ;
-(MRDNowPlayingInfoServer *)nowPlayingInfoServer;
-(void)nowPlayingDataSourceNowPlayingApplicationDidChange:(id)arg1 ;
-(int)localNowPlayingPID;
-(void)_sendMediaRemoteCommand:(unsigned)arg1 withOrigin:(MROriginRef)arg2 ;
-(void)_postActiveOriginDidChange;
-(void)_postAvailableOriginsDidChange;
-(void)_clientDidOpenConnection:(id)arg1 ;
-(MROriginRef)_createRestoredActiveOrigin;
-(MROriginRef)copyCustomOriginMatchingUniqueIdentifier:(unsigned)arg1 ;
-(void)_setActiveOrigin:(MROriginRef)arg1 whileRestoringFromSavedState:(char)arg2 ;
-(void)_savePersistentActiveOrigin:(MROriginRef)arg1 ;
-(void)_postNowPlayingAppIsPlayingDidChange;
-(void)_postNowPlayingApplicationDidChange;
-(char)originIsActiveOrigin:(MROriginRef)arg1 ;
-(void)setActiveOrigin:(MROriginRef)arg1 ;
-(NSArray *)availableOrigins;
-(void)_postClientNotificationNamed:(id)arg1 userInfoData:(const void*)arg2 length:(unsigned long)arg3 ;
-(NSArray *)customOrigins;
-(char)nowPlayingClientIsPlayingWithOrigin:(MROriginRef)arg1 ;
-(char)localNowPlayingApplicationIsPlaying;
-(void)_endApplicationActivity:(id)arg1 ;
-(void)_beginApplicationActivity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_postAppActivityNotificationNamed:(id)arg1 withActivity:(id)arg2 ;
-(void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetCanBeNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppOverrideMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetOverriddenNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingArtworkMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppDisplayIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppDisplayIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppPIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppDisplayNameMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppDisplayNameMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppPlaybackStateMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppPlaybackStateMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetAvailableOriginsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetActiveOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetActiveOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRegisterCustomOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRemoveCustomOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handlePostNotificationMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleBeginApplicationActivityMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetCurrentApplicationActivityMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleEndApplicationActivityMessage:(id)arg1 fromClient:(id)arg2 ;
-(MRDMediaRemoteClient *)overrideClient;
-(void)setOverrideClient:(MRDMediaRemoteClient *)arg1 ;
-(void)_setNowPlayingInfo:(id)arg1 forOrigin:(MROriginRef)arg2 pid:(int)arg3 withArtwork:(id)arg4 mergePolicy:(unsigned char)arg5 ;
-(MROriginRef)_copyActiveOrRegisteredOriginForUID:(int)arg1 ;
-(void)_postClientNotificationNamed:(id)arg1 withOrigin:(MROriginRef)arg2 userInfo:(id)arg3 ;
-(char)nowPlayingClientIsPlaying;
-(char)registerCustomOrigin:(MROriginRef)arg1 ;
-(char)removeCustomOrigin:(MROriginRef)arg1 ;
-(char)_internalMediaRemoteNotificationIsLegal:(id)arg1 ;
-(void)setCurrentApplicationActivity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)currentApplicationActivity;
-(void)removeClientForPID:(int)arg1 ;
-(void)_postNowPlayingAppIsPlayingDidChangeWithOrigin:(MROriginRef)arg1 ;
-(void)_postNowPlayingInfoDidChangeNotification;
-(void)_postNowPlayingInfoDidChangeNotificationForOrigin:(MROriginRef)arg1 ;
-(void)_prepareRemoteControlInterfacesForStartedActivity:(id)arg1 ;
-(void)_prepareRemoteControlInterfacesForStartingActivity:(id)arg1 ;
-(void)_teardownRemoteControlInterfacesForEndedActivity:(id)arg1 ;
-(void)mediaRemoteClientInvalidated:(id)arg1 ;
-(void)nowPlayingDataSourceNowPlayingApplicationPlaybackStateDidChange:(id)arg1 ;
-(id)addRunAssertionWithName:(id)arg1 ;
-(void)removeRunAssertion:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)stop;
-(void)start;
-(void)addClient:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)allClients;
-(id)clientForPID:(int)arg1 ;
@end

