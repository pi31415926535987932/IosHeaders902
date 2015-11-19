/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>
#import <CallHistorySyncHelper/CloudKitProtocol.h>

@class CKContainer, CKDatabase, CKRecordZone, NSString;

@interface CloudKit : CHSynchronizedLoggable <CloudKitProtocol> {

	CKContainer* _container;
	CKDatabase* _database;
	CKRecordZone* _transactionRecordZone;
	NSString* _transactionRecordType;
	id _observerAccountChangedRef;
	char _isAccountActive;
	NSString* _identity;

}

@property (nonatomic,retain) NSString * identity;                   //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) char isAccountActive;                  //@synthesize isAccountActive=_isAccountActive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)create;
-(void)queryAccountStatusWithRetryCount:(unsigned)arg1 ;
-(void)retryCloudKitOperationForError:(id)arg1 withRetryCount:(unsigned)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)setupSubscription;
-(void)performInitialSyncIfNeeded:(char)arg1 ;
-(void)createRecordZone:(/*^block*/id)arg1 withRetryCount:(unsigned)arg2 ;
-(void)getUpdatesWithRetryCount:(unsigned)arg1 withQualityOfService:(int)arg2 withCallback:(/*^block*/id)arg3 ;
-(id)getPreviousChangeToken;
-(void)getUpdatesWithQualityOfService:(int)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)createRecordZone:(/*^block*/id)arg1 ;
-(void)upload:(id)arg1 withRetryCount:(unsigned)arg2 withCallback:(/*^block*/id)arg3 ;
-(id)createRecord:(id)arg1 ;
-(void)addRecord:(id)arg1 withInsertAndUpdate:(id)arg2 withDelete:(id)arg3 ;
-(void)uploadRecordsToSave:(id)arg1 withRecordsToDelete:(id)arg2 withRetryCount:(unsigned)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)handlePartialUploadFailure:(id)arg1 withUploadRecordsToSave:(id)arg2 withRecordsToDelete:(id)arg3 withRetryCount:(unsigned)arg4 withCallback:(/*^block*/id)arg5 ;
-(void)resolveUploadConflicts:(id)arg1 withInsertAndUpdateRecords:(id)arg2 ;
-(void)queryAccountStatus;
-(void)handleDeviceUnlocked;
-(void)setIsAccountActive:(char)arg1 ;
-(void)setupSubscriptionWithRetryCount:(unsigned)arg1 ;
-(void)upload:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)deleteAndRecreateRecordZone:(/*^block*/id)arg1 ;
-(void)setIdentity:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)registerForNotifications;
-(char)isAccountActive;
-(void)setAccountActive:(char)arg1 ;
-(NSString *)identity;
@end

