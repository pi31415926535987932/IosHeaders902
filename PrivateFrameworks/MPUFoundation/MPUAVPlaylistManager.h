/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MediaPlayer/MPAVPlaylistManager.h>
#import <MPUFoundation/MPUQueueBehaviorManaging.h>

@class NSMutableIndexSet, MPMutableBidirectionalDictionary, MPQueueFeeder, NSMutableArray, MPAVItem, NSMutableDictionary, NSString;

@interface MPUAVPlaylistManager : MPAVPlaylistManager <MPUQueueBehaviorManaging> {

	char _ignoreNextIndexChanges;
	char _disableSoftQueueFaulting;
	unsigned _maximumModifiedPlaylistIterationIndex;
	unsigned _minimumPlaylistIndex;
	unsigned _maximumPlaylistIndex;
	NSMutableIndexSet* _failedSoftQueueIndexes;
	MPMutableBidirectionalDictionary* _identifiersToIndexes;
	char _disableQueueModifications;
	MPQueueFeeder* _softQueueFeeder;
	NSMutableArray* _hardQueueSourceContexts;
	MPAVItem* _lastPlayedSoftQueueItem;
	int _nextCurrentIndex;
	int _hardQueueInsertionIndex;
	int _repeatStartIndex;
	NSMutableDictionary* _iterationIndexToQueueModifications;

}

@property (nonatomic,readonly) NSRange hardQueuePlaylistIndexRange; 
@property (nonatomic,readonly) NSRange softQueuePlaylistIndexRange; 
@property (nonatomic,retain) MPQueueFeeder * softQueueFeeder;                                       //@synthesize softQueueFeeder=_softQueueFeeder - In the implementation block
@property (assign,nonatomic) char disableQueueModifications;                                        //@synthesize disableQueueModifications=_disableQueueModifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * hardQueueSourceContexts;                              //@synthesize hardQueueSourceContexts=_hardQueueSourceContexts - In the implementation block
@property (nonatomic,retain) MPAVItem * lastPlayedSoftQueueItem;                                    //@synthesize lastPlayedSoftQueueItem=_lastPlayedSoftQueueItem - In the implementation block
@property (assign,nonatomic) int nextCurrentIndex;                                                  //@synthesize nextCurrentIndex=_nextCurrentIndex - In the implementation block
@property (assign,nonatomic) int hardQueueInsertionIndex;                                           //@synthesize hardQueueInsertionIndex=_hardQueueInsertionIndex - In the implementation block
@property (assign,nonatomic) int repeatStartIndex;                                                  //@synthesize repeatStartIndex=_repeatStartIndex - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iterationIndexToQueueModifications;              //@synthesize iterationIndexToQueueModifications=_iterationIndexToQueueModifications - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) char canSeek; 
@property (nonatomic,readonly) char canSkipToPreviousItem; 
@property (nonatomic,readonly) int playbackMode; 
@property (nonatomic,readonly) char userCanChangeShuffleAndRepeatType; 
-(void)setRepeatMode:(int)arg1 ;
-(void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned)arg2 error:(id)arg3 ;
-(void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2 ;
-(char)canSkipToPreviousItem;
-(char)userCanChangeShuffleAndRepeatType;
-(id)playlistFeeder;
-(void)setCurrentIndex:(int)arg1 selectionDirection:(int)arg2 ;
-(int)playlistIndexWithDelta:(int)arg1 fromIndex:(int)arg2 ignoreElapsedTime:(char)arg3 ;
-(int)playlistIndexOfItemIdentifier:(id)arg1 ;
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2 ;
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2 ;
-(unsigned)displayIndexForItem:(id)arg1 ;
-(id)playlistFeederForPlaylistIndex:(int)arg1 ;
-(id)itemForPlaylistIndex:(int)arg1 ;
-(unsigned)displayCountForItem:(id)arg1 ;
-(int)playlistIndexOfIndex:(int)arg1 inPlaylistFeeder:(id)arg2 ;
-(void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3 ;
-(char)setPlaylistFeeder:(id)arg1 startIndex:(int)arg2 keepPlaying:(char)arg3 ;
-(int)_prepareToQueuePlaybackIndex:(int)arg1 selectionDirection:(int)arg2 ;
-(void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2 ;
-(id)metadataItemForPlaylistIndex:(int)arg1 ;
-(int)playlistIndexOfItem:(id)arg1 ;
-(int)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)_commonInit;
-(int)currentIndex;
-(char)disableQueueModifications;
-(char)preventsHardQueueModificationsForItem:(id)arg1 ;
-(void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(int)arg2 ;
-(void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSRange)hardQueuePlaylistIndexRange;
-(void)setDisableQueueModifications:(char)arg1 ;
-(void)removeItemAtPlaybackIndex:(int)arg1 ;
-(void)moveItemAtPlaybackIndex:(int)arg1 toPlaybackIndex:(int)arg2 intoHardQueue:(char)arg3 ;
-(MPQueueFeeder *)softQueueFeeder;
-(void)clearHardQueue;
-(void)clearSoftQueue;
-(NSRange)softQueuePlaylistIndexRange;
-(void)_handleConfiguredQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2 ;
-(id)identifierAtIndex:(unsigned)arg1 queueFeeder:(id)arg2 ;
-(char)_itemIsHardQueueItem:(id)arg1 ;
-(char)_itemIsSoftQueueItem:(id)arg1 ;
-(NSRange)_softQueuePlaylistIndexRangeIncludingCurrentItem:(char)arg1 ;
-(id)_sourceContextForPlaylistIndex:(unsigned)arg1 ;
-(id)_playlistIterationForQueueFeeder:(id)arg1 firstItemPlaylistIndex:(unsigned)arg2 iterationIndex:(unsigned)arg3 ;
-(void)_insertSoftQueueSourceContext:(id)arg1 atIndex:(int)arg2 ;
-(NSRange)_hardQueuePlaylistIndexRangeIncludingCurrentItem:(char)arg1 ;
-(int)_hardQueueIndexForIndex:(int)arg1 ;
-(id)_removeSoftQueueSourceContextAtIndex:(int)arg1 ;
-(id)_itemForSourceContext:(id)arg1 ;
-(id)_metadataItemForSourceContext:(id)arg1 ;
-(id)_softQueueSourceContextForIndex:(int)arg1 ;
-(unsigned)indexOfItemWithIdentifier:(id)arg1 queueFeeder:(id)arg2 ;
-(void)_findPlaylistIterationForPlaybackIndex:(unsigned)arg1 createIfNecessary:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)_softQueueIndexForIndex:(int)arg1 ;
-(id)_queueFeeder:(id)arg1 itemForIdentifier:(id)arg2 ;
-(unsigned)playlistItemCount;
-(void)setSoftQueueFeeder:(MPQueueFeeder *)arg1 ;
-(NSMutableArray *)hardQueueSourceContexts;
-(void)setHardQueueSourceContexts:(NSMutableArray *)arg1 ;
-(MPAVItem *)lastPlayedSoftQueueItem;
-(void)setLastPlayedSoftQueueItem:(MPAVItem *)arg1 ;
-(int)nextCurrentIndex;
-(void)setNextCurrentIndex:(int)arg1 ;
-(int)hardQueueInsertionIndex;
-(void)setHardQueueInsertionIndex:(int)arg1 ;
-(int)repeatStartIndex;
-(void)setRepeatStartIndex:(int)arg1 ;
-(NSMutableDictionary *)iterationIndexToQueueModifications;
-(void)setIterationIndexToQueueModifications:(NSMutableDictionary *)arg1 ;
@end

