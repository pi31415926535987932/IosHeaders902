/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {

	unsigned _chapterIndex;
	NSArray* _chapters;
	char _hasArtworkAtPlaybackTime;

}

@property (assign,nonatomic) unsigned chapterIndex;                      //@synthesize chapterIndex=_chapterIndex - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                         //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) char hasArtworkAtPlaybackTime;              //@synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime - In the implementation block
-(char)hasArtworkAtPlaybackTime;
-(NSArray *)chapters;
-(void)setChapterIndex:(unsigned)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
-(void)setHasArtworkAtPlaybackTime:(char)arg1 ;
-(unsigned)chapterIndex;
@end

