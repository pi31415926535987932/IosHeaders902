/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <softwareupdated/softwareupdated-Structs.h>
#import <softwareupdated/NEFilterDataExtensionProviderHostDelegate.h>
#import <softwareupdated/NEFilterControlExtensionProviderHostDelegate.h>
#import <libobjc.A.dylib/NEAgentSessionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NEAgentSession, NSExtension, NEFilterDataExtensionProviderHostContext, NEFilterControlExtensionProviderHostContext, NSUUID, NSObject, NSString, NEFilterProviderConfiguration;

@interface NEAgentFilterExtension : NSObject <NEFilterDataExtensionProviderHostDelegate, NEFilterControlExtensionProviderHostDelegate, NEAgentSessionDelegate> {

	char _dataExtensionInitialized;
	char _controlExtensionInitialized;
	NEAgentSession* _session;
	NSExtension* _dataExtension;
	NSExtension* _controlExtension;
	NEFilterDataExtensionProviderHostContext* _dataSessionContext;
	NEFilterControlExtensionProviderHostContext* _controlSessionContext;
	NSUUID* _dataSessionRequestIdentifier;
	NSUUID* _controlSessionRequestIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _dataExtensionIdentifier;
	NSString* _controlExtensionIdentifier;
	NSObject*<OS_xpc_object> _clientListenerEndpoint;
	NEFilterProviderConfiguration* _configuration;

}

@property (__weak,readonly) NEAgentSession * session;                                                //@synthesize session=_session - In the implementation block
@property (retain) NSExtension * dataExtension;                                                      //@synthesize dataExtension=_dataExtension - In the implementation block
@property (retain) NSExtension * controlExtension;                                                   //@synthesize controlExtension=_controlExtension - In the implementation block
@property (retain) NEFilterDataExtensionProviderHostContext * dataSessionContext;                    //@synthesize dataSessionContext=_dataSessionContext - In the implementation block
@property (retain) NEFilterControlExtensionProviderHostContext * controlSessionContext;              //@synthesize controlSessionContext=_controlSessionContext - In the implementation block
@property (retain) NSUUID * dataSessionRequestIdentifier;                                            //@synthesize dataSessionRequestIdentifier=_dataSessionRequestIdentifier - In the implementation block
@property (retain) NSUUID * controlSessionRequestIdentifier;                                         //@synthesize controlSessionRequestIdentifier=_controlSessionRequestIdentifier - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                               //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * dataExtensionIdentifier;                                               //@synthesize dataExtensionIdentifier=_dataExtensionIdentifier - In the implementation block
@property (retain) NSString * controlExtensionIdentifier;                                            //@synthesize controlExtensionIdentifier=_controlExtensionIdentifier - In the implementation block
@property (assign) char dataExtensionInitialized;                                                    //@synthesize dataExtensionInitialized=_dataExtensionInitialized - In the implementation block
@property (assign) char controlExtensionInitialized;                                                 //@synthesize controlExtensionInitialized=_controlExtensionInitialized - In the implementation block
@property (retain) NSObject*<OS_xpc_object> clientListenerEndpoint;                                  //@synthesize clientListenerEndpoint=_clientListenerEndpoint - In the implementation block
@property (retain) NEFilterProviderConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendExtensionFailed;
-(void)setDataSessionContext:(NEFilterDataExtensionProviderHostContext *)arg1 ;
-(void)setDataSessionRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)dataExtension;
-(void)setControlSessionContext:(NEFilterControlExtensionProviderHostContext *)arg1 ;
-(void)setControlSessionRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)controlExtension;
-(NSString *)dataExtensionIdentifier;
-(void)setDataExtension:(NSExtension *)arg1 ;
-(NSUUID *)dataSessionRequestIdentifier;
-(void)cleanupDataExtensionWithRequestIdentifier:(id)arg1 ;
-(NSString *)controlExtensionIdentifier;
-(void)setControlExtension:(NSExtension *)arg1 ;
-(NSUUID *)controlSessionRequestIdentifier;
-(void)cleanupControlExtensionWithRequestIdentifier:(id)arg1 ;
-(void)handleControlExtensionInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleDataExtensionInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopFilterExtensionWithReason:(int)arg1 ;
-(void)resetFilterSettings;
-(NEFilterDataExtensionProviderHostContext *)dataSessionContext;
-(void)setDataExtensionInitialized:(char)arg1 ;
-(NEFilterControlExtensionProviderHostContext *)controlSessionContext;
-(void)setControlExtensionInitialized:(char)arg1 ;
-(char)controlExtensionInitialized;
-(char)dataExtensionInitialized;
-(void)sendFilterStatus:(long)arg1 withError:(long)arg2 ;
-(void)startFilterExtension;
-(void)sendEnviromentEventComplete:(long)arg1 ;
-(void)sleepEvent;
-(void)wakeEvent;
-(void)savedConfigurationChangedEventWithEventData:(id)arg1 ;
-(NSObject*<OS_xpc_object>)clientListenerEndpoint;
-(void)setClientListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(void)dataExtension:(id)arg1 didFailWithError:(id)arg2 ;
-(void)controlExtension:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDataExtensionIdentifier:(NSString *)arg1 ;
-(void)setControlExtensionIdentifier:(NSString *)arg1 ;
-(void)extension:(id)arg1 didFailWithError:(id)arg2 ;
-(void)extension:(id)arg1 didStartWithError:(id)arg2 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)controlExtension:(id)arg1 didStartWithError:(id)arg2 ;
-(void)handleInitMessage:(id)arg1 ;
-(void)handleStart:(id)arg1 ;
-(void)handleStop:(id)arg1 ;
-(void)handleEnvironmentEvent:(id)arg1 ;
-(void)handleAddClientMessage:(id)arg1 ;
-(id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(CFBundleRef)arg4 ;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleMessage:(id)arg1 withOuterMessage:(id)arg2 ;
-(void)handleCancel;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dataExtension:(id)arg1 didStartWithError:(id)arg2 ;
-(NEAgentSession *)session;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConfiguration:(NEFilterProviderConfiguration *)arg1 ;
-(NEFilterProviderConfiguration *)configuration;
@end
