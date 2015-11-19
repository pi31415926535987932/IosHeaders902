/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSObject, NSDate, NSDictionary, NSString;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject> {

	char _shouldUpdateQuantityCharacteristics;
	char _shouldUpdateUserProfile;
	char _needsUpdateAfterUnlock;
	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _userProfileLastUpdated;
	NSDictionary* _lastUserProfile;

}

@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                  //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) char shouldUpdateQuantityCharacteristics;              //@synthesize shouldUpdateQuantityCharacteristics=_shouldUpdateQuantityCharacteristics - In the implementation block
@property (nonatomic,readonly) char shouldUpdateUserProfile;                          //@synthesize shouldUpdateUserProfile=_shouldUpdateUserProfile - In the implementation block
@property (nonatomic,retain) NSDate * userProfileLastUpdated;                         //@synthesize userProfileLastUpdated=_userProfileLastUpdated - In the implementation block
@property (nonatomic,copy) NSDictionary * lastUserProfile;                            //@synthesize lastUserProfile=_lastUserProfile - In the implementation block
@property (assign,nonatomic) char needsUpdateAfterUnlock;                             //@synthesize needsUpdateAfterUnlock=_needsUpdateAfterUnlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id<HDHealthDaemon>)healthDaemon;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(char)arg2 ;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(void)_updateUserProfileForRestoreCompletion:(id)arg1 ;
-(id)_userCharacteristicForType:(id)arg1 entity:(id*)arg2 error:(id*)arg3 ;
-(char)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(char)arg3 updateProfileAndSync:(char)arg4 error:(id*)arg5 ;
-(void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(char)arg1 shouldSync:(char)arg2 ;
-(id)userCharacteristicForType:(id)arg1 error:(id*)arg2 ;
-(void)_updateQuantityCharacteristicsAndUserProfile;
-(void)_queue_updateQuantityCharacteristics;
-(void)_queue_updateUserProfile;
-(id)_mostRecentSampleOfType:(id)arg1 error:(id*)arg2 ;
-(void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
-(id)initWithHealthDaemon:(id)arg1 ;
-(char)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(char)arg3 ;
-(char)shouldUpdateQuantityCharacteristics;
-(char)shouldUpdateUserProfile;
-(NSDate *)userProfileLastUpdated;
-(void)setUserProfileLastUpdated:(NSDate *)arg1 ;
-(NSDictionary *)lastUserProfile;
-(void)setLastUserProfile:(NSDictionary *)arg1 ;
-(char)needsUpdateAfterUnlock;
-(void)setNeedsUpdateAfterUnlock:(char)arg1 ;
@end

