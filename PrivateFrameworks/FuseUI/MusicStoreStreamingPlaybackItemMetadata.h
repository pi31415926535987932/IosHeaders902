/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MusicStoreItemMetadataContext, MPStoreItemMetadata;

@interface MusicStoreStreamingPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasLoadedMediaItem;
	char _isLoadingMediaItem;
	NSMutableArray* _mediaItemLoadCompletionHandlers;
	MusicStoreItemMetadataContext* _storeItemMetadataContext;
	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MusicStoreItemMetadataContext * storeItemMetadataContext; 
+(char)_shouldRespectMusicCellularDataSetting;
+(char)_shouldRespectStoreCellularDataSetting;
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(int)endpointType;
-(long long)storeAdamID;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(long long)artistStoreAdamID;
-(id)contentTitle;
-(double)expectedDuration;
-(char)shouldReportPlayEventsToStore;
-(char)allowsAssetCaching;
-(id)albumTitle;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)contentType;
-(void)_registerForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(void)_unregisterForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(MusicStoreItemMetadataContext *)storeItemMetadataContext;
-(id)_storeItemMetadata;
-(void)_storeItemMetadataContextRepresentativeMediaEntityDidChangeNotification:(id)arg1 ;
-(id)initWithStoreItemMetadataContext:(id)arg1 ;
-(void)setStoreItemMetadataContext:(MusicStoreItemMetadataContext *)arg1 ;
-(id)artistName;
@end

