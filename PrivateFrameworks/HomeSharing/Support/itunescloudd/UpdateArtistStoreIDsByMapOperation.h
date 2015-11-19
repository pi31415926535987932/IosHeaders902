/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/QueueAwareOperation.h>

@class NSNumber, NSURL;

@interface UpdateArtistStoreIDsByMapOperation : QueueAwareOperation {

	NSNumber* _updateIntervalSeconds;
	NSURL* _allArtistImagesMapURL;
	NSURL* _artistNameLibraryMatchURL;

}

@property (nonatomic,retain) NSNumber * updateIntervalSeconds;               //@synthesize updateIntervalSeconds=_updateIntervalSeconds - In the implementation block
@property (nonatomic,retain) NSURL * allArtistImagesMapURL;                  //@synthesize allArtistImagesMapURL=_allArtistImagesMapURL - In the implementation block
@property (nonatomic,retain) NSURL * artistNameLibraryMatchURL;              //@synthesize artistNameLibraryMatchURL=_artistNameLibraryMatchURL - In the implementation block
-(void)setUpdateIntervalSeconds:(NSNumber *)arg1 ;
-(void)setAllArtistImagesMapURL:(NSURL *)arg1 ;
-(void)setArtistNameLibraryMatchURL:(NSURL *)arg1 ;
-(id)_latestAllArtistImagesMap;
-(void)_updateSpecificArtistStoreIDsUsingAllArtistImagesMap:(id)arg1 ;
-(void)_updateAllArtistStoreIDsUsingAllArtistImagesMap:(id)arg1 ;
-(NSURL *)artistNameLibraryMatchURL;
-(id)_fetchAndCacheLatestAllArtistImagesMap;
-(NSURL *)allArtistImagesMapURL;
-(NSNumber *)updateIntervalSeconds;
-(void)main;
@end

