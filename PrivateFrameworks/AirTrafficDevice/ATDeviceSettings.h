/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSString, NSArray;

@interface ATDeviceSettings : NSObject {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) char isDeviceLinkClient; 
@property (nonatomic,copy,readonly) NSString * libraryIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (nonatomic,copy,readonly) NSString * serviceType; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (nonatomic,copy,readonly) NSArray * dataClassesNeedingSync; 
@property (nonatomic,readonly) double pairingSyncCompletionTime; 
@property (nonatomic,readonly) char useNetServicesConnection; 
@property (nonatomic,readonly) char fairPlayEnabled; 
@property (nonatomic,readonly) char grappaEnabled; 
+(id)sharedInstance;
-(NSString *)serviceName;
-(id)init;
-(void)synchronize;
-(void)removeEndpointInfoForLibrary:(id)arg1 ;
-(void)setPairingSyncCompletionTime:(double)arg1 ;
-(void)setSyncPending:(char)arg1 forDataClass:(id)arg2 ;
-(id)hostInfoForLibrary:(id)arg1 ;
-(void)setHostInfo:(id)arg1 forLibrary:(id)arg2 ;
-(char)grappaEnabled;
-(char)isSyncPendingForDataClass:(id)arg1 ;
-(id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(double)pairingSyncCompletionTime;
-(char)isDeviceLinkClient;
-(char)useNetServicesConnection;
-(void)setHasCompletedDataMigration:(char)arg1 ;
-(id)endpointInfo;
-(NSArray *)dataClassesNeedingSync;
-(int)activeRestoreType;
-(void)setActiveRestoreType:(int)arg1 ;
-(char)hasCompletedDataMigration;
-(void)setEndpointInfo:(id)arg1 ;
-(id)_endpointInfoForLibrary:(id)arg1 ;
-(void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2 ;
-(char)fairPlayEnabled;
-(void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3 ;
-(id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(NSString *)libraryIdentifier;
-(NSString *)serviceType;
-(NSString *)serviceDomain;
-(NSString *)interfaceName;
@end

