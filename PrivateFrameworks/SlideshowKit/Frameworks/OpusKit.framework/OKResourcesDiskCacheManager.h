/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface OKResourcesDiskCacheManager : NSObject {

	NSURL* _baseURL;
	NSObject*<OS_dispatch_queue> _globalQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)sharedManager;
+(id)temporaryManagerWithIdentifier:(id)arg1 ;
+(id)_sharedResourcesDirectoryURL;
-(void)dealloc;
-(id)init;
-(char)hasMetadataForMediaItem:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(id)metadataForMediaItem:(id)arg1 error:(id*)arg2 ;
-(char)setMetadata:(id)arg1 forMediaItem:(id)arg2 error:(id*)arg3 ;
-(void)performAsynchronousResourceAccessUsingBlock:(/*^block*/id)arg1 ;
-(char)removeMetadataForMediaItem:(id)arg1 error:(id*)arg2 ;
-(char)hasThumbnailForMediaItem:(id)arg1 resolution:(unsigned)arg2 thumbnail:(id*)arg3 error:(id*)arg4 ;
-(id)thumbnailForMediaItem:(id)arg1 resolution:(unsigned)arg2 error:(id*)arg3 ;
-(char)setThumbnail:(id)arg1 forMediaItem:(id)arg2 resolution:(unsigned)arg3 error:(id*)arg4 ;
-(char)removeThumbnailsForMediaItem:(id)arg1 error:(id*)arg2 ;
-(char)removeAllCaches:(id*)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
-(void)_performAsynchronousResourceAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)_cachedResourceDirectoryURLForMediaItem:(id)arg1 ;
-(id)resourcesDirectoryURL;
-(char)_writeResources:(id*)arg1 byResourcesAccessor:(/*^block*/id)arg2 ;
-(char)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byResourcesAccessor:(/*^block*/id)arg3 ;
-(id)_cacheResourceMetadataURLForMediaItem:(id)arg1 ;
-(char)_readCachedMediaItem:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(char)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(id)_cacheResourceThumbnailURLForMediaItem:(id)arg1 resolution:(unsigned)arg2 ;
-(id)_cacheResourceThumbnailsURLForMediaItem:(id)arg1 ;
-(char)_readCachedMediaItem:(id)arg1 resolution:(unsigned)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(char)_writeCachedMediaItem:(id)arg1 resolution:(unsigned)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(char)_writeCachedMediaItem:(id)arg1 error:(id*)arg2 byThumbnailsAccessor:(/*^block*/id)arg3 ;
-(id)cachedMediaItemURLs:(id*)arg1 ;
-(char)removeMediaItem:(id)arg1 error:(id*)arg2 ;
-(char)removeMediaItemsAtPath:(id)arg1 error:(id*)arg2 ;
-(char)removeThumbnailForMediaItem:(id)arg1 resolution:(unsigned)arg2 error:(id*)arg3 ;
@end

