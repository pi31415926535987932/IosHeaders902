/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {

	int _badgeCount;
	NSString* _category;
	NSString* _dialog;
	NSData* _payload;
	NSString* _sound;
	int _source;
	NSString* _uuid;
	char _isRead;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) char hasIsRead; 
@property (assign,nonatomic) char isRead;                      //@synthesize isRead=_isRead - In the implementation block
@property (nonatomic,readonly) char hasUuid; 
@property (nonatomic,retain) NSString * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) char hasSource; 
@property (assign,nonatomic) int source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) char hasDialog; 
@property (nonatomic,retain) NSString * dialog;                //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) char hasSound; 
@property (nonatomic,retain) NSString * sound;                 //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) char hasBadgeCount; 
@property (assign,nonatomic) int badgeCount;                   //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) char hasPayload; 
@property (nonatomic,retain) NSData * payload;                 //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) char hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSData *)payload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)source;
-(void)setSource:(int)arg1 ;
-(NSString *)uuid;
-(void)setPayload:(NSData *)arg1 ;
-(char)isRead;
-(void)setBadgeCount:(int)arg1 ;
-(void)setHasBadgeCount:(char)arg1 ;
-(char)hasBadgeCount;
-(int)badgeCount;
-(char)hasDialog;
-(NSString *)sound;
-(char)hasIsRead;
-(void)setDialog:(NSString *)arg1 ;
-(void)setSound:(NSString *)arg1 ;
-(void)setIsRead:(char)arg1 ;
-(void)setHasIsRead:(char)arg1 ;
-(char)hasSound;
-(char)hasPayload;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasCategory;
-(char)hasSource;
-(void)setHasSource:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)dialog;
-(char)hasUuid;
@end

