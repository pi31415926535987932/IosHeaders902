/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPShuffleControllerDataSource.h>

@class MPMediaLibraryConnectionAssertion, MPMediaQuery, NSArray, MPShuffleController, MPMutableBidirectionalDictionary, MPMediaItem, NSString;

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPShuffleControllerDataSource> {

	MPMediaLibraryConnectionAssertion* _connectionAssertion;
	unsigned long long _feederRevisionID;
	char _hasValidItems;
	MPMediaQuery* _query;
	NSArray* _queryItems;
	MPShuffleController* _shuffleController;
	vector<long long, std::__1::allocator<long long> >* _itemPIDs;
	MPMutableBidirectionalDictionary* _indexToIdentifierCache;
	unsigned _currentInvalidationRevision;
	char _isPlaylistQueueFeeder;
	MPMediaItem* _cloudDialogAllowedMediaItem;

}

@property (nonatomic,copy) MPMediaQuery * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) MPMediaItem * cloudDialogAllowedMediaItem;              //@synthesize cloudDialogAllowedMediaItem=_cloudDialogAllowedMediaItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioSessionModeForMediaType:(unsigned)arg1 ;
+(Class)playbackItemMetadataClass;
-(unsigned)indexOfItemWithIdentifier:(id)arg1 ;
-(unsigned)itemCount;
-(id)copyRawItemAtIndex:(unsigned)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(id)identifierAtIndex:(unsigned)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)itemClass;
-(char)hasValidItemAtIndex:(unsigned)arg1 ;
-(char)shouldReuseQueueFeederForPlaybackContext:(id)arg1 ;
-(void)shuffleItemsWithAnchor:(unsigned*)arg1 ;
-(unsigned)itemTypeForIndex:(unsigned)arg1 ;
-(id)audioSessionModeForItemAtIndex:(unsigned)arg1 ;
-(unsigned)initialPlaybackQueueDepthForStartingIndex:(unsigned)arg1 ;
-(unsigned)indexOfMediaItem:(id)arg1 ;
-(id)mediaItemAtIndex:(unsigned)arg1 ;
-(void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2 ;
-(id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned)arg2 ;
-(unsigned)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned)arg3 ;
-(unsigned)itemCountForShuffleController:(id)arg1 ;
-(void)_libraryDidChangeNotification:(id)arg1 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(id)_mediaItemForPID:(unsigned long long)arg1 ;
-(void)setCloudDialogAllowedMediaItem:(MPMediaItem *)arg1 ;
-(unsigned)_playbackIndexByApplyShuffleType:(unsigned)arg1 withStartIndex:(unsigned)arg2 startIndexMediaItem:(id)arg3 shouldKeepConsistentQueueOrder:(char)arg4 ;
-(unsigned)_indexForSongShuffledIndex:(unsigned)arg1 ;
-(id)_identifierAtIndex:(unsigned)arg1 ;
-(void)_invalidateMediaLibraryValues;
-(unsigned)_indexForPersistentID:(unsigned long long)arg1 ;
-(void)_handleMediaLibraryDidChange;
-(void)_verifyQueueInvalidationCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned)unshuffledIndexOfAVItem:(id)arg1 ;
-(MPMediaItem *)cloudDialogAllowedMediaItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(MPMediaQuery *)query;
-(void)_commonInit;
-(void)setQuery:(MPMediaQuery *)arg1 ;
-(id)pathAtIndex:(unsigned)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
@end

