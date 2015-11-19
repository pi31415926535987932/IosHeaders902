/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLDiskSpaceManagement : NSObject
+(unsigned long long)_performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(char)arg2 fromPhotoLibrary:(id)arg3 keepRecentlyViewedAssets:(char)arg4 ;
+(unsigned long long)_scanFilesInReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(char)arg1 bytesToPurge:(unsigned long long)arg2 ;
+(unsigned long long)_scanFilesInCloudSharingCacheDataDirectoryShouldFreeSpace:(char)arg1 bytesToPurge:(unsigned long long)arg2 ;
+(long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(char)arg2 ;
+(unsigned long long)_scanFilesInPhotoMetadataDirectoryShouldFreeSpace:(char)arg1 bytesToPurge:(unsigned long long)arg2 skipAssets:(id)arg3 ;
+(unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(char)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)purgeCloudSharingAssetsIfNotRecentlyViewedFromPhotoLibrary:(id)arg1 ;
+(unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(char)arg2 fromPhotoLibrary:(id)arg3 ;
+(unsigned long long)purgeExpiredOutboundSharingAssets;
@end

