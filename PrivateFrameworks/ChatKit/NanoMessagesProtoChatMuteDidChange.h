/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/companionmessagesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionmessagesd/companionmessagesd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NanoMessagesProtoChatMuteDidChange : PBCodable <NSCopying> {

	double _unmuteTime;
	NSString* _chatGUID;
	SCD_Struct_Na1 _has;

}

@property (nonatomic,readonly) char hasChatGUID; 
@property (nonatomic,retain) NSString * chatGUID;              //@synthesize chatGUID=_chatGUID - In the implementation block
@property (assign,nonatomic) char hasUnmuteTime; 
@property (assign,nonatomic) double unmuteTime;                //@synthesize unmuteTime=_unmuteTime - In the implementation block
-(char)hasChatGUID;
-(void)setUnmuteTime:(double)arg1 ;
-(void)setHasUnmuteTime:(char)arg1 ;
-(char)hasUnmuteTime;
-(double)unmuteTime;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)chatGUID;
-(void)setChatGUID:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

