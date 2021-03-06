/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MCSong, MPAudioPlaylist, MPSongInternal, NSURL;

@interface MPSong : NSObject <NSCoding, NSCopying> {

	NSString* _path;
	MCSong* _song;
	MPAudioPlaylist* _parentPlaylist;
	MPSongInternal* _internal;

}

@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSURL * URL; 
+(id)songWithPath:(id)arg1 ;
+(id)songWithURL:(id)arg1 ;
+(id)song;
-(id)parentPlaylist;
-(void)copyStruct:(id)arg1 ;
-(void)setParentPlaylist:(id)arg1 ;
-(id)parentDocument;
-(void)setInternalDuration;
-(void)setInternalStartTime;
-(double)maxDuration;
-(double)stopTime;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(int)index;
-(void)setPath:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(double)startTime;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setSong:(id)arg1 ;
-(id)song;
-(void)setAudioVolume:(float)arg1 ;
-(float)audioVolume;
@end

