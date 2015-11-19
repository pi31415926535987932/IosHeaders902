/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSASAssetTransferer.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MSASAssetDownloader : MSASAssetTransferer {

	char _didEncounterNetworkConditionError;
	char _isDownloadingThumbnails;
	char _isWaitingForFirstDownloadEvent;
	int _state;
	NSMutableArray* _itemsInFlight;
	NSMutableDictionary* _assetToItemInFlightMap;
	NSMutableArray* _finishedAssets;
	NSString* _currentFocusAlbumGUID;
	NSString* _currentFocusAssetCollectionGUID;
	NSString* _objectGUID;
	NSString* _downloadBatchPerfGUID;

}

@property (assign,nonatomic,__weak) id<MSASAssetDownloaderDelegate> delegate; 
@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * itemsInFlight;                               //@synthesize itemsInFlight=_itemsInFlight - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetToItemInFlightMap;                 //@synthesize assetToItemInFlightMap=_assetToItemInFlightMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedAssets;                              //@synthesize finishedAssets=_finishedAssets - In the implementation block
@property (assign,nonatomic) char didEncounterNetworkConditionError;                       //@synthesize didEncounterNetworkConditionError=_didEncounterNetworkConditionError - In the implementation block
@property (assign,nonatomic) char isDownloadingThumbnails;                                 //@synthesize isDownloadingThumbnails=_isDownloadingThumbnails - In the implementation block
@property (nonatomic,retain) NSString * currentFocusAlbumGUID;                             //@synthesize currentFocusAlbumGUID=_currentFocusAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * currentFocusAssetCollectionGUID;                   //@synthesize currentFocusAssetCollectionGUID=_currentFocusAssetCollectionGUID - In the implementation block
@property (assign,nonatomic) char isWaitingForFirstDownloadEvent;                          //@synthesize isWaitingForFirstDownloadEvent=_isWaitingForFirstDownloadEvent - In the implementation block
@property (nonatomic,retain) NSString * objectGUID;                                        //@synthesize objectGUID=_objectGUID - In the implementation block
@property (nonatomic,retain) NSString * downloadBatchPerfGUID;                             //@synthesize downloadBatchPerfGUID=_downloadBatchPerfGUID - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(void)workQueueRetryOutstandingActivities;
-(void)unregisterAssets:(id)arg1 ;
-(void)didEnqueueAsset:(id)arg1 forAlbumGUID:(id)arg2 ;
-(void)registerAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3 ;
-(void)workQueueStop;
-(void)workQueueShutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)setDidEncounterNetworkConditionError:(char)arg1 ;
-(char)didEncounterNetworkConditionError;
-(id)_pathForPersonID:(id)arg1 ;
-(void)workQueueCancel;
-(NSMutableArray *)itemsInFlight;
-(void)setItemsInFlight:(NSMutableArray *)arg1 ;
-(void)workQueueDownloadNextBatch;
-(void)_workQueueGoIdle;
-(void)setIsWaitingForFirstDownloadEvent:(char)arg1 ;
-(id)workQueueObjectGUID;
-(NSString *)downloadBatchPerfGUID;
-(void)setCurrentFocusAssetCollectionGUID:(NSString *)arg1 ;
-(void)setCurrentFocusAlbumGUID:(NSString *)arg1 ;
-(void)setIsDownloadingThumbnails:(char)arg1 ;
-(void)setDownloadBatchPerfGUID:(NSString *)arg1 ;
-(void)workQueueRegisterAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)workQueueUnregisterAssets:(id)arg1 ;
-(void)_workQueueStopTrackingItem:(id)arg1 ;
-(void)_workQueueDidFinishWithItem:(id)arg1 error:(id)arg2 ;
-(char)isWaitingForFirstDownloadEvent;
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 error:(id)arg3 ;
-(id)_orphanedAssetError;
-(NSMutableDictionary *)assetToItemInFlightMap;
-(void)setAssetToItemInFlightMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)finishedAssets;
-(void)setFinishedAssets:(NSMutableArray *)arg1 ;
-(char)isDownloadingThumbnails;
-(NSString *)currentFocusAlbumGUID;
-(NSString *)currentFocusAssetCollectionGUID;
-(NSString *)objectGUID;
-(void)setObjectGUID:(NSString *)arg1 ;
@end

