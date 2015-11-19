/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBCKModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MBCKSnapshot, MBCKDevice, NSSet, NSDictionary, NSError, NSMutableDictionary;

@interface MBCKManifest : MBCKModel <NSSecureCoding> {

	NSString* _snapshotID;
	char _isAppDomain;
	NSString* _manifestID;
	MBCKSnapshot* _snapshot;
	MBCKDevice* _device;
	NSString* _domainName;
	NSString* _domainHmac;
	unsigned _manifestCount;
	NSSet* _dependentDomainNames;
	NSDictionary* _entitlements;
	NSString* _entitlementsPath;
	NSString* _owningBundleID;
	NSError* _fileUploadError;
	NSMutableDictionary* _filesInFlightByID;

}

@property (nonatomic,retain) NSString * manifestID;                                //@synthesize manifestID=_manifestID - In the implementation block
@property (nonatomic,readonly) NSString * snapshotID; 
@property (nonatomic,readonly) MBCKSnapshot * snapshot;                            //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) MBCKDevice * device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * domainName;                              //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) NSString * domainHmac;                              //@synthesize domainHmac=_domainHmac - In the implementation block
@property (nonatomic,readonly) unsigned manifestCount;                             //@synthesize manifestCount=_manifestCount - In the implementation block
@property (nonatomic,readonly) NSSet * fileRecordIDs; 
@property (nonatomic,readonly) NSSet * placeholderFileRecordIDs; 
@property (nonatomic,retain) NSSet * dependentDomainNames;                         //@synthesize dependentDomainNames=_dependentDomainNames - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                          //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSString * entitlementsPath;                          //@synthesize entitlementsPath=_entitlementsPath - In the implementation block
@property (nonatomic,retain) NSString * owningBundleID;                            //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (nonatomic,readonly) char isAppDomain;                                   //@synthesize isAppDomain=_isAppDomain - In the implementation block
@property (nonatomic,readonly) NSError * fileUploadError;                          //@synthesize fileUploadError=_fileUploadError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filesInFlightByID;              //@synthesize filesInFlightByID=_filesInFlightByID - In the implementation block
+(id)manifestWithSnapshot:(id)arg1 domainName:(id)arg2 count:(unsigned)arg3 cache:(id)arg4 ;
+(id)manifestWithSnapshot:(id)arg1 manifestID:(id)arg2 count:(unsigned)arg3 cache:(id)arg4 ;
+(id)domainHmac:(id)arg1 key:(id)arg2 ;
+(id)manifestWithRecord:(id)arg1 cache:(id)arg2 snapshot:(id)arg3 ;
+(char)supportsSecureCoding;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(void)refreshWithRecord:(id)arg1 ;
-(id)initWithRecord:(id)arg1 cache:(id)arg2 ;
-(void)addSavesToDatabase:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareForSaveWithCompletion:(/*^block*/id)arg1 ;
-(id)_getRecordIDString;
-(void)saveToCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)recordWasSaved:(id)arg1 withError:(id)arg2 ;
-(id)handleMergeConflictForRecord:(id)arg1 serverRecord:(id)arg2 originalRecord:(id)arg3 ;
-(char)shouldRetryRecord:(id)arg1 forError:(id)arg2 ;
-(void)record:(id)arg1 madeProgress:(double)arg2 ;
-(id)initWithDictionary:(id)arg1 cache:(id)arg2 ;
-(char)queueUploadOfFileChange:(id)arg1 withEngine:(id)arg2 withError:(id*)arg3 ;
-(char)deleteSavedFilesWithError:(id*)arg1 ;
-(void)updateFromServerWithCompletion:(/*^block*/id)arg1 ;
-(char)addRestorablesToCacheWithAppManager:(id)arg1 restoreEngine:(id)arg2 error:(id*)arg3 ;
-(id)baseRecordIDString;
-(unsigned)manifestCount;
-(NSString *)manifestID;
-(NSString *)entitlementsPath;
-(void)deleteCloudFilesPendingCompletion:(/*^block*/id)arg1 ;
-(NSError *)fileUploadError;
-(void)setDependentDomainNames:(NSSet *)arg1 ;
-(void)setEntitlementsPath:(NSString *)arg1 ;
-(void)fetchFilesWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)domainHmac;
-(id)initWithSnapshot:(id)arg1 domainName:(id)arg2 manifestID:(id)arg3 count:(unsigned)arg4 cache:(id)arg5 ;
-(id)initWithRecord:(id)arg1 cache:(id)arg2 snapshot:(id)arg3 ;
-(void)setManifestID:(NSString *)arg1 ;
-(id)recordIDStringForManifestAtIndex:(unsigned)arg1 ;
-(NSMutableDictionary *)filesInFlightByID;
-(char)_queryManifestWithProgress:(/*^block*/id)arg1 recordName:(id)arg2 cursor:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteFileRecordIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteSavedFilesWithCompletion:(/*^block*/id)arg1 ;
-(NSSet *)dependentDomainNames;
-(void)_prepareForSaveWithCompletion:(/*^block*/id)arg1 ;
-(id)_manifestRecordWithFiles:(id)arg1 placeholderFiles:(id)arg2 manifestIndex:(unsigned)arg3 ;
-(NSSet *)fileRecordIDs;
-(NSSet *)placeholderFileRecordIDs;
-(char)fetchFilesWithProgress:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setFilesInFlightByID:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(MBCKSnapshot *)snapshot;
-(NSString *)owningBundleID;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(MBCKDevice *)device;
-(unsigned)recordZone;
-(id)recordType;
-(int)savePolicy;
-(NSDictionary *)entitlements;
-(NSString *)domainName;
-(char)isAppDomain;
-(NSString *)snapshotID;
-(void)setDevice:(MBCKDevice *)arg1 ;
@end

