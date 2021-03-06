/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableSet, NSURL;

@interface WBSSiteMetadataImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSMutableDictionary* _imagesForKeyStrings;
	NSMutableDictionary* _imageTypeToRetainCountMaps;
	NSMutableSet* _pendingKeyStringRequests;
	NSMutableSet* _missingImageKeyStrings;
	NSMutableDictionary* _cacheSettings;
	unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >* _cacheSettingsWriter;
	char _terminating;
	NSURL* _imageDirectoryURL;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL;                          //@synthesize imageDirectoryURL=_imageDirectoryURL - In the implementation block
@property (getter=isTerminating,nonatomic,readonly) char terminating;              //@synthesize terminating=_terminating - In the implementation block
+(const char*)diskAccessQueueName;
-(id)init;
-(void)removeAllImages;
-(void)savePendingChangesBeforeTermination;
-(id)initWithImageDirectoryURL:(id)arg1 ;
-(id)_cacheSettingsFileURL;
-(void)notifyDidFinishLoadingSettings;
-(void)dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(id)_fileNameForKeyString:(id)arg1 type:(int)arg2 ;
-(void)_removeImagesPassingTest:(/*^block*/id)arg1 ;
-(id)_loadImageFromDiskForKeyString:(id)arg1 type:(int)arg2 ;
-(void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 type:(int)arg3 ;
-(id)_fileLocationForKeyString:(id)arg1 type:(int)arg2 ;
-(int)imageStateForKeyString:(id)arg1 ;
-(void)setImageState:(int)arg1 forKeyString:(id)arg2 ;
-(void)notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 type:(int)arg3 ;
-(void)_requestImageForKeyString:(id)arg1 type:(int)arg2 ;
-(id)keyStringsToRetainCountsForType:(int)arg1 ;
-(void)removeImageFromCacheForKeyString:(id)arg1 type:(int)arg2 ;
-(void)didRemoveImageForKeyString:(id)arg1 type:(int)arg2 ;
-(void)didFinishLoadingSettings;
-(void)saveCacheSettingsSoon;
-(void)purgeUnneededImages;
-(id)imageForKeyString:(id)arg1 type:(int)arg2 ;
-(void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 type:(int)arg3 ;
-(void)retainImageForKeyString:(id)arg1 type:(int)arg2 ;
-(void)releaseImageForKeyString:(id)arg1 type:(int)arg2 ;
-(char)isImageRetainedForKeyString:(id)arg1 type:(int)arg2 ;
-(char)areSettingsLoaded;
-(id)settingForKey:(id)arg1 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)imageDirectoryURL;
-(char)isTerminating;
@end

