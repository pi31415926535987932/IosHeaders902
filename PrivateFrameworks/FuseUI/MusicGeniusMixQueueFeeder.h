/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicQueryQueueFeeder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MusicGeniusMixQueueFeederDataSource;
@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder <NSSecureCoding> {

	unsigned _currentPlaylistOffset;
	id<MusicGeniusMixQueueFeederDataSource> _dataSource;

}

@property (nonatomic,retain) id<MusicGeniusMixQueueFeederDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)itemCount;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
-(id)localizedPositionInPlaylistString:(id)arg1 ;
-(unsigned)shuffleType;
-(char)userCanChangeShuffleAndRepeatType;
-(void)shuffleItemsWithAnchor:(unsigned*)arg1 ;
-(unsigned)realRepeatType;
-(unsigned)indexOfMediaItem:(id)arg1 ;
-(id)mediaItemAtIndex:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<MusicGeniusMixQueueFeederDataSource>)arg1 ;
-(id<MusicGeniusMixQueueFeederDataSource>)dataSource;
-(id)query;
-(unsigned)numberOfPaths;
-(id)pathAtIndex:(unsigned)arg1 ;
@end

