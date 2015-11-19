/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HKExtendedServerInterface.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class HDClient, NSObject, NSString;

@interface HDHealthExtensionsServer : NSObject <HDDiagnosticObject, HKExtendedServerInterface> {

	char _registeredForAchievementNotifications;
	HDClient* _client;
	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) HDClient * client;                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) id<HDHealthDaemon> healthDaemon;                         //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char registeredForAchievementNotifications;              //@synthesize registeredForAchievementNotifications=_registeredForAchievementNotifications - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldAcceptConnectionForClient:(id)arg1 error:(id*)arg2 ;
+(id)serverWithClient:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serverInterface;
-(id<HDHealthDaemon>)healthDaemon;
-(id)diagnosticDescription;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(void)runAchievementsFixupAsDryRun:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithClient:(id)arg1 healthDaemon:(id)arg2 ;
-(void)_achievementsAdded:(id)arg1 ;
-(void)registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUnalertedAchievementsWithCompletion:(/*^block*/id)arg1 ;
-(void)markAchievementsAlerted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNumberOfUnviewedAchievementsWithCompletion:(/*^block*/id)arg1 ;
-(void)markAchievementAsViewed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAchievement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)registeredForAchievementNotifications;
-(void)setRegisteredForAchievementNotifications:(char)arg1 ;
-(HDClient *)client;
-(id)clientInterface;
-(void)setClient:(HDClient *)arg1 ;
@end

