/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPhotoBakedThumbnailsDelegate.h>

@class NSMutableArray, NSCountedSet, NSRecursiveLock, PLXPCTransaction, NSMutableDictionary;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {

	NSMutableArray* _highPriorityJobs;
	NSCountedSet* _unfinishedHighPriorityJobs;
	unsigned _highPrioritySequentialJobCount;
	NSMutableArray* _lowPriorityJobs;
	NSCountedSet* _unfinishedLowPriorityJobs;
	NSRecursiveLock* _jobsLock;
	int _unfinishedJobCount;
	int _jobQueueAvailabilityToken;
	char _writerThreadRunning;
	char _databaseIsCorrupt;
	PLXPCTransaction* _transaction;
	NSMutableDictionary* _inProgressAvalancheFds;

}
+(id)sharedWriter;
+(void)decorateThumbnailInRect:(CGRect)arg1 size:(CGSize)arg2 duration:(id)arg3 inContext:(CGContextRef)arg4 format:(int)arg5 ;
+(char)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 filteredImagePath:(id)arg3 isSubstandardRender:(char)arg4 ;
+(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(id)init;
-(char)enqueueJob:(id)arg1 ;
-(void)_postJobQueueNotificationIsAvailable:(char)arg1 ;
-(char)_isHighPriorityJob:(id)arg1 ;
-(void)_incrementJobCount:(id)arg1 ;
-(void)_writerThread;
-(id)cameraAssetPathForNewAssetWithExtension:(id)arg1 ;
-(void)_removeTransientKeys:(id)arg1 ;
-(void)_photoIrisPairingDidSucceed:(char)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4 ;
-(void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1 ;
-(void)_decrementJobCount:(id)arg1 ;
-(void)_processImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fetchPhotoAssetForMediaGroupUUID:(id)arg1 moc:(id)arg2 ;
-(id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2 ;
-(id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned)arg2 extension:(id)arg3 ;
-(void)_handleAvalancheCrashRecovery:(id)arg1 ;
-(void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1 ;
-(void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1 ;
-(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_decorateThumbnail:(id)arg1 ;
-(char)_transferVideoIncomingPathToVideoDestinationPath:(id)arg1 shouldRemoveIncoming:(char*)arg2 error:(id*)arg3 ;
-(void)_setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2 ;
-(void)_processVideoJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processBatchImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalancheJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processImportImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalanchesValidationJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processSyncedVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enablePhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processIngestedSyncedAssetJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processCrashRecoveryJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processJob:(id)arg1 ;
-(char)canEnqueueJob:(id)arg1 ;
-(id)uuidFromIncomingFilename:(id)arg1 ;
-(void)setAvalancheInProgress:(char)arg1 uuid:(id)arg2 ;
@end

