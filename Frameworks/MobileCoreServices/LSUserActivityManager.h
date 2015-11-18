/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:34:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSUserActivityClientResponseProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMapTable, NSUUID, NSString;

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serverQ;
	char _connectionInitializationSucceeded;
	char _needToSendInitialMessage;
	NSMapTable* _userActivitiesByUUID;
	char _supportsActivityContinuation;
	char _activityContinuationIsEnabled;
	NSUUID* _activeUserActivityUUID;

}

@property (retain,readonly) NSXPCConnection * connection; 
@property (copy) NSUUID * activeUserActivityUUID;                       //@synthesize activeUserActivityUUID=_activeUserActivityUUID - In the implementation block
@property (readonly) char supportsActivityContinuation;                 //@synthesize supportsActivityContinuation=_supportsActivityContinuation - In the implementation block
@property (readonly) char activityContinuationIsEnabled; 
@property (readonly) NSObject*<OS_dispatch_queue> serverQ;              //@synthesize serverQ=_serverQ - In the implementation block
@property (retain) NSMapTable * userActivitiesByUUID;                   //@synthesize userActivitiesByUUID=_userActivitiesByUUID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldSupportActivityContinuation;
+(char)userActivityContinuationSupported;
+(id)defaultManager;
-(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(NSUUID *)activeUserActivityUUID;
-(void)sendInitialMessage;
-(NSObject*<OS_dispatch_queue>)serverQ;
-(char)userActivityIsActive:(id)arg1 ;
-(void)makeInactive:(id)arg1 ;
-(NSMapTable *)userActivitiesByUUID;
-(void)setActiveUserActivityUUID:(NSUUID *)arg1 ;
-(void)makeActive:(id)arg1 ;
-(id)_findUserActivityForUUID:(id)arg1 ;
-(void)addUserActivity:(id)arg1 ;
-(void)askClientUserActivityToSave:(id)arg1 ;
-(void)askClientUserActivityToSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)tellClientUserActivityItWasResumed:(id)arg1 ;
-(char)activityContinuationIsEnabled;
-(void)fetchUUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeUserActivity:(id)arg1 ;
-(void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)encodeUserActivity:(id)arg1 ;
-(id)createByDecodingUserActivity:(id)arg1 ;
-(void)tellDaemonAboutNewLSUserActivity:(id)arg1 ;
-(void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(char)arg2 ;
-(void)markUserActivityAsDirty:(id)arg1 forceImmediate:(char)arg2 ;
-(void)pinUserActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)supportsActivityContinuation;
-(void)setUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end
