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

@class NSMutableArray, CKDPSubscriptionNotificationAlert;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {

	NSMutableArray* _additionalFields;
	CKDPSubscriptionNotificationAlert* _alert;
	char _shouldBadge;
	char _shouldSendContentAvailable;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) char hasAlert; 
@property (nonatomic,retain) CKDPSubscriptionNotificationAlert * alert;              //@synthesize alert=_alert - In the implementation block
@property (assign,nonatomic) char hasShouldBadge; 
@property (assign,nonatomic) char shouldBadge;                                       //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalFields;                      //@synthesize additionalFields=_additionalFields - In the implementation block
@property (assign,nonatomic) char hasShouldSendContentAvailable; 
@property (assign,nonatomic) char shouldSendContentAvailable;                        //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasAlert;
-(CKDPSubscriptionNotificationAlert *)alert;
-(char)shouldBadge;
-(void)setShouldBadge:(char)arg1 ;
-(char)shouldSendContentAvailable;
-(void)setShouldSendContentAvailable:(char)arg1 ;
-(NSMutableArray *)additionalFields;
-(void)setAdditionalFields:(NSMutableArray *)arg1 ;
-(void)setAlert:(CKDPSubscriptionNotificationAlert *)arg1 ;
-(void)addAdditionalFields:(id)arg1 ;
-(unsigned)additionalFieldsCount;
-(void)clearAdditionalFields;
-(id)additionalFieldsAtIndex:(unsigned)arg1 ;
-(void)setHasShouldBadge:(char)arg1 ;
-(char)hasShouldBadge;
-(void)setHasShouldSendContentAvailable:(char)arg1 ;
-(char)hasShouldSendContentAvailable;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

