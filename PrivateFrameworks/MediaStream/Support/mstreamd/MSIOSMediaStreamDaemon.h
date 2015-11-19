/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSMediaStreamDaemon.h>
#import <mstreamd/MSPowerBudgetDelegate.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <mstreamd/MSPauseManagerDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSDaemonProtocols.h>

@class NSXPCListener, APSConnection, MSPowerAssertionManager, NSMutableDictionary, NSString;

@interface MSIOSMediaStreamDaemon : MSMediaStreamDaemon <MSPowerBudgetDelegate, APSConnectionDelegate, MSPauseManagerDelegate, NSXPCListenerDelegate, MSDaemonProtocols> {

	NSXPCListener* _center;
	NSXPCListener* _noWakeCenter;
	APSConnection* _prodAPSConnection;
	APSConnection* _devAPSConnection;
	MSPowerAssertionManager* _powerAssertionManager;
	NSMutableDictionary* _personIDToPowerBudgetPersistedValuesMap;
	NSMutableDictionary* _personIDToPowerBudgetMap;

}

@property (nonatomic,retain) NSMutableDictionary * personIDToPowerBudgetPersistedValuesMap;              //@synthesize personIDToPowerBudgetPersistedValuesMap=_personIDToPowerBudgetPersistedValuesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personIDToPowerBudgetMap;                             //@synthesize personIDToPowerBudgetMap=_personIDToPowerBudgetMap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)personIDToPowerBudgetMap;
-(void)_updatePushNotificationTopicsOutListenToProduction:(char*)arg1 outListenToDevelopment:(char*)arg2 ;
-(NSMutableDictionary *)personIDToPowerBudgetPersistedValuesMap;
-(id)_powerBudgetForPersonID:(id)arg1 ;
-(void)_readPowerBudgetParametersForPersonID:(id)arg1 ;
-(void)didBeginForegroundFocusForPersonID:(id)arg1 ;
-(void)didEndForegroundFocusForPersonID:(id)arg1 ;
-(void)setPersonIDToPowerBudgetPersistedValuesMap:(NSMutableDictionary *)arg1 ;
-(void)setPersonIDToPowerBudgetMap:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)didReceivePushNotificationForPersonID:(id)arg1 ;
-(void)didIdle;
-(void)didUnidle;
-(void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1 ;
-(void)didReceiveAuthenticationFailureForPersonID:(id)arg1 ;
-(void)didReceiveAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg1 ;
-(char)mayDownloadPersonID:(id)arg1 ;
-(void)_serverSideConfigurationDidChange:(id)arg1 ;
-(char)isWaitingForAuth;
-(void)enqueueAssetCollections:(id)arg1 personID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)serverSideConfigurationForPersonID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)pauseForUUID:(id)arg1 ;
-(void)unpauseForUUID:(id)arg1 ;
-(void)forgetEverythingForPersonID:(id)arg1 ;
-(void)pauseManagerDidPause:(id)arg1 ;
-(void)pauseManagerDidUnpause:(id)arg1 ;
-(id)MSPowerBudgetDidRequestPersistedValues:(id)arg1 ;
-(void)MSPowerBudget:(id)arg1 didRequestStorageOfPersistedValues:(id)arg2 ;
-(void)MSPowerBudgetGotSignificantEvent:(id)arg1 ;
-(void)resetServerStateForPersonID:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2 ;
-(void)isBusyCompletionBlock:(/*^block*/id)arg1 ;
@end

