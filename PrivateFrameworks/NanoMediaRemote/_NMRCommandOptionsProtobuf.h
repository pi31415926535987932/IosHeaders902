/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	long long _radioStationID;
	unsigned long long _trackID;
	NSString* _contextID;
	NSString* _destinationAppDisplayID;
	NSString* _mediaType;
	int _playbackQueueInsertionPosition;
	float _playbackRate;
	NSString* _radioStationHash;
	float _rating;
	int _repeatMode;
	unsigned _sendOptions;
	int _shuffleMode;
	float _skipInterval;
	NSString* _sourceID;
	NSString* _stationURL;
	NSData* _systemAppPlaybackQueueData;
	char _externalPlayerCommand;
	char _negative;
	char _requestDefermentToPlaybackQueuePosition;
	char _shouldBeginRadioPlayback;
	char _shouldOverrideManuallyCuratedQueue;
	SCD_Struct_NM6 _has;

}

@property (nonatomic,readonly) char hasSourceID; 
@property (nonatomic,retain) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) char hasMediaType; 
@property (nonatomic,retain) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) char hasExternalPlayerCommand; 
@property (assign,nonatomic) char externalPlayerCommand;                                   //@synthesize externalPlayerCommand=_externalPlayerCommand - In the implementation block
@property (assign,nonatomic) char hasSkipInterval; 
@property (assign,nonatomic) float skipInterval;                                           //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) char hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) char hasRating; 
@property (assign,nonatomic) float rating;                                                 //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) char hasNegative; 
@property (assign,nonatomic) char negative;                                                //@synthesize negative=_negative - In the implementation block
@property (assign,nonatomic) char hasPlaybackPosition; 
@property (assign,nonatomic) double playbackPosition;                                      //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) char hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) char hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) char hasContextID; 
@property (nonatomic,retain) NSString * contextID;                                         //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) char hasTrackID; 
@property (assign,nonatomic) unsigned long long trackID;                                   //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) char hasRadioStationID; 
@property (assign,nonatomic) long long radioStationID;                                     //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) char hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                                  //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) char hasSystemAppPlaybackQueueData; 
@property (nonatomic,retain) NSData * systemAppPlaybackQueueData;                          //@synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData - In the implementation block
@property (nonatomic,readonly) char hasDestinationAppDisplayID; 
@property (nonatomic,retain) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (assign,nonatomic) char hasSendOptions; 
@property (assign,nonatomic) unsigned sendOptions;                                         //@synthesize sendOptions=_sendOptions - In the implementation block
@property (assign,nonatomic) char hasRequestDefermentToPlaybackQueuePosition; 
@property (assign,nonatomic) char requestDefermentToPlaybackQueuePosition;                 //@synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition - In the implementation block
@property (assign,nonatomic) char hasShouldOverrideManuallyCuratedQueue; 
@property (assign,nonatomic) char shouldOverrideManuallyCuratedQueue;                      //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (nonatomic,readonly) char hasStationURL; 
@property (nonatomic,retain) NSString * stationURL;                                        //@synthesize stationURL=_stationURL - In the implementation block
@property (assign,nonatomic) char hasShouldBeginRadioPlayback; 
@property (assign,nonatomic) char shouldBeginRadioPlayback;                                //@synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback - In the implementation block
@property (assign,nonatomic) char hasPlaybackQueueInsertionPosition; 
@property (assign,nonatomic) int playbackQueueInsertionPosition;                           //@synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition - In the implementation block
-(void)setSourceID:(NSString *)arg1 ;
-(NSString *)sourceID;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(unsigned long long)trackID;
-(char)shouldOverrideManuallyCuratedQueue;
-(NSString *)stationURL;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(void)setNegative:(char)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)contextID;
-(void)setContextID:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(char)hasRating;
-(void)setHasRepeatMode:(char)arg1 ;
-(char)hasRepeatMode;
-(void)setHasShuffleMode:(char)arg1 ;
-(char)hasShuffleMode;
-(char)externalPlayerCommand;
-(char)negative;
-(double)playbackPosition;
-(NSString *)radioStationHash;
-(long long)radioStationID;
-(NSData *)systemAppPlaybackQueueData;
-(NSString *)destinationAppDisplayID;
-(unsigned)sendOptions;
-(char)requestDefermentToPlaybackQueuePosition;
-(char)shouldBeginRadioPlayback;
-(int)playbackQueueInsertionPosition;
-(void)setRadioStationID:(long long)arg1 ;
-(char)hasRadioStationID;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(void)setSystemAppPlaybackQueueData:(NSData *)arg1 ;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(void)setStationURL:(NSString *)arg1 ;
-(char)hasSourceID;
-(void)setExternalPlayerCommand:(char)arg1 ;
-(void)setHasExternalPlayerCommand:(char)arg1 ;
-(char)hasExternalPlayerCommand;
-(void)setHasSkipInterval:(char)arg1 ;
-(char)hasSkipInterval;
-(void)setHasPlaybackRate:(char)arg1 ;
-(char)hasPlaybackRate;
-(void)setHasRating:(char)arg1 ;
-(void)setHasNegative:(char)arg1 ;
-(char)hasNegative;
-(void)setPlaybackPosition:(double)arg1 ;
-(void)setHasPlaybackPosition:(char)arg1 ;
-(char)hasPlaybackPosition;
-(char)hasContextID;
-(void)setHasTrackID:(char)arg1 ;
-(char)hasTrackID;
-(void)setHasRadioStationID:(char)arg1 ;
-(char)hasRadioStationHash;
-(char)hasSystemAppPlaybackQueueData;
-(char)hasDestinationAppDisplayID;
-(void)setSendOptions:(unsigned)arg1 ;
-(void)setHasSendOptions:(char)arg1 ;
-(char)hasSendOptions;
-(void)setRequestDefermentToPlaybackQueuePosition:(char)arg1 ;
-(void)setHasRequestDefermentToPlaybackQueuePosition:(char)arg1 ;
-(char)hasRequestDefermentToPlaybackQueuePosition;
-(void)setShouldOverrideManuallyCuratedQueue:(char)arg1 ;
-(void)setHasShouldOverrideManuallyCuratedQueue:(char)arg1 ;
-(char)hasShouldOverrideManuallyCuratedQueue;
-(char)hasStationURL;
-(void)setShouldBeginRadioPlayback:(char)arg1 ;
-(void)setHasShouldBeginRadioPlayback:(char)arg1 ;
-(char)hasShouldBeginRadioPlayback;
-(void)setPlaybackQueueInsertionPosition:(int)arg1 ;
-(void)setHasPlaybackQueueInsertionPosition:(char)arg1 ;
-(char)hasPlaybackQueueInsertionPosition;
-(char)readFrom:(id)arg1 ;
-(void)setSkipInterval:(float)arg1 ;
-(float)skipInterval;
-(char)hasMediaType;
-(void)setTrackID:(unsigned long long)arg1 ;
@end

