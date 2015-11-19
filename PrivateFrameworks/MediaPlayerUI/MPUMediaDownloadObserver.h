/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPUMediaDownloadObserver : NSObject {

	/*^block*/id _progressHandler;
	NSObject*<OS_dispatch_queue> _queue;
	char _hasPendingProgressHandlerExecution;
	char _invalidated;
	long long _pid;
	char _paused;

}

@property (readonly) double downloadProgress; 
@property (getter=isCurrentlyPlayable,readonly) char currentlyPlayable; 
@property (copy) id progressHandler; 
@property (readonly) char canCancel; 
@property (getter=isPurchasing,nonatomic,readonly) char purchasing; 
@property (getter=isRestoreDownload,readonly) char restoreDownload; 
@property (getter=isPaused,readonly) char paused;                                    //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) long long persistentID;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) double rawDownloadProgress; 
@property (nonatomic,readonly) double rawDownloadTotal; 
+(id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(char)arg2 storeID:(long long)arg3 ;
+(id)newObserverForMediaItem:(id)arg1 ;
+(id)newObserverForMediaCollection:(id)arg1 ;
+(id)newObserverForStoreID:(long long)arg1 ;
-(char)isPurchasing;
-(id)progressHandler;
-(char)isPaused;
-(long long)persistentID;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setProgressHandler:(id)arg1 ;
-(void)_onQueue_invalidate;
-(void)_onQueue_setShouldFireProgressHandler;
-(char)isCurrentlyPlayable;
-(char)canCancel;
-(void)pauseDownload;
-(void)resumeDownload;
-(double)rawDownloadProgress;
-(double)rawDownloadTotal;
-(void)cancelDownload;
-(double)downloadProgress;
-(char)isRestoreDownload;
@end
