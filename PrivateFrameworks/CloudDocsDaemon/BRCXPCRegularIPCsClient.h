/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCXPCClient.h>
#import <libobjc.A.dylib/BRProtocol.h>

@class NSString;

@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getBookmarkDataForURL:(id)arg1 andAllowAccessByBundleID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)presentAcceptDialogsForShareURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setupInstanceWithDict:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetBudgets:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSelfCheck:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)printStatus:(id)arg1 containerID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)gatherInformationForPath:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)log:(const char*)arg1 function:(const char*)arg2 source:(const char*)arg3 line:(int)arg4 message:(id)arg5 ;
-(void)forceSyncContainerID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)computePurgableSpaceWithUrgency:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)waitForFileSystemChangeProcessingWithReply:(/*^block*/id)arg1 ;
-(void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getContainersByID:(/*^block*/id)arg1 ;
-(void)getContainerForURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getContainerForURLFast:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)checkinAskClientIfUsingUbiquity:(char)arg1 ;
-(void)presyncContainerWithID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getContainerURLForID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getContainerURLForID:(id)arg1 forPid:(int)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)updateContainerMetadataForID:(id)arg1 ;
-(void)deleteAllContentsOfContainerID:(id)arg1 onClient:(char)arg2 onServer:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)registerInitialSyncBarrierForID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)evictItemAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)thumbnailChangedForItemAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getNotificationInfoAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)getTotalApplicationDocumentUsageWithReply:(/*^block*/id)arg1 ;
-(void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)copyLoggedInUserFirstAndLastNameWithReply:(/*^block*/id)arg1 ;
-(void)addExternalDocumentReferenceTo:(id)arg1 forPid:(int)arg2 inContainer:(id)arg3 underParent:(id)arg4 reply:(/*^block*/id)arg5 ;
-(oneway void)bundleDidAccessExternalDocument:(id)arg1 ;
-(void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)currentAccountCreateWithID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)currentAccountLogoutWithReply:(/*^block*/id)arg1 ;
-(void)getContainersNeedingUpload:(/*^block*/id)arg1 ;
-(void)setMigrationStatus:(char)arg1 forDSID:(id)arg2 shouldUpdateAccount:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)getMigrationStatusForPrimaryiCloudAccount:(/*^block*/id)arg1 ;
-(void)jetsamCloudDocsAppsWithReply:(/*^block*/id)arg1 ;
-(void)getBookmarkDataForURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resolveBookmarkDataToURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getBackReferencingURLForURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(char)arg2 requestedTTL:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getApplicationStatus:(/*^block*/id)arg1 ;
-(void)getApplicationStatusWithPID:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)getApplicationStatusWithAuditToken:(SCD_Struct_BR20)arg1 reply:(/*^block*/id)arg2 ;
-(void)getLastSyncDateWithReply:(/*^block*/id)arg1 ;
-(void)getContainerStatusWithID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getContainerLastServerUpdateWithID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getIsContainerWithIDOverQuota:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(char)arg2 readonly:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)copyCurrentUserIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)createSharingInfoForURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startOperation:(id)arg1 toDestroySharingInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)copyBulkShareIDsAtURLs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)removeItemFromDisk:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleShareURL:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

