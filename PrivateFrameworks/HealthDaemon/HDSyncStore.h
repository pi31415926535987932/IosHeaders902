/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol HDSyncStore <NSObject>
@property (nonatomic,readonly) int syncProvenance; 
@property (nonatomic,readonly) NSString * syncStoreIdentifier; 
@property (nonatomic,readonly) NSUUID * syncStoreDefaultSourceUUID; 
@property (nonatomic,readonly) NSString * syncStoreDefaultSourceBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * remoteProductType; 
@property (nonatomic,copy,readonly) NSString * remoteSystemBuildVersion; 
@property (nonatomic,readonly) char shouldSynthesizeProvenance; 
@optional
-(void)syncWillBeginWithContext:(id)arg1;
-(void)syncDidFinishWithSuccess:(char)arg1 error:(id)arg2 context:(id)arg3;

@required
-(unsigned)syncObjectLimitForEntityClass:(Class)arg1;
-(int)syncProvenance;
-(NSString *)remoteSystemBuildVersion;
-(NSString *)syncStoreDefaultSourceBundleIdentifier;
-(NSString *)syncStoreIdentifier;
-(id)newChangeWithSyncEntityClass:(Class)arg1;
-(void)sendChange:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)syncEntities;
-(NSUUID *)syncStoreDefaultSourceUUID;
-(NSString *)remoteProductType;
-(char)shouldSynthesizeProvenance;

@end

