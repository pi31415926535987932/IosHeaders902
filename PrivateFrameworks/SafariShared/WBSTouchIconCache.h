/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSSiteMetadataImageCache.h>

@class NSMutableDictionary, NSMutableSet;

@interface WBSTouchIconCache : WBSSiteMetadataImageCache {

	NSMutableDictionary* _touchIconsDataForHosts;
	NSMutableSet* _pendingTouchIconRequestHosts;

}
+(const char*)diskAccessQueueName;
-(id)initWithImageDirectoryURL:(id)arg1 ;
-(void)notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 type:(int)arg3 ;
-(void)didRemoveImageForKeyString:(id)arg1 type:(int)arg2 ;
-(void)didFinishLoadingSettings;
-(void)didLoadTouchIcon:(id)arg1 withData:(id)arg2 ;
-(void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(char)arg3 isUserLoadedWebpageRequest:(char)arg4 ;
-(void)saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(char)arg3 isUserLoadedWebpageRequest:(char)arg4 ;
-(void)retainTouchIconForHost:(id)arg1 ;
-(void)releaseTouchIconForHost:(id)arg1 ;
-(void)willSaveTouchIcon:(id)arg1 withData:(id)arg2 ;
-(void)_upgradeCacheVersionIfNeeded;
-(void)_removeTouchIconsDataForHost:(id)arg1 ;
-(id)touchIconForURL:(id)arg1 ;
-(void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2 ;
-(void)retainTouchIconsForHosts:(id)arg1 ;
-(void)releaseTouchIconsForHosts:(id)arg1 ;
-(char)hasDeterminedIconAvailabilityForURL:(id)arg1 ;
-(char)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(char)arg2 ;
@end

