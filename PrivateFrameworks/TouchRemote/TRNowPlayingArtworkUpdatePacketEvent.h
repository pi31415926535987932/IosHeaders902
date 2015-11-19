/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSData, NSString, NSDictionary;

@interface TRNowPlayingArtworkUpdatePacketEvent : TRPacketEvent {

	NSData* _artworkData;
	NSString* _artworkMIMEType;
	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,readonly) NSData * artworkData;                       //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,readonly) NSString * artworkMIMEType;                 //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
@property (nonatomic,readonly) NSDictionary * nowPlayingInfo;              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
+(unsigned)_packetEventType;
-(NSDictionary *)nowPlayingInfo;
-(id)description;
-(NSString *)artworkMIMEType;
-(NSData *)artworkData;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initArtworkData:(id)arg1 artworkMIMEType:(id)arg2 nowPlayingInfo:(id)arg3 ;
@end

