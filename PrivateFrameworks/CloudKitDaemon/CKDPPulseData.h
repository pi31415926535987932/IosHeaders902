/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate, CKDPIdentifier;

@interface CKDPPulseData : PBCodable <NSCopying> {

	long long _customState;
	long long _stateTTLMillis;
	CKDPDate* _lastCustom;
	CKDPDate* _lastEdited;
	CKDPDate* _lastInvisible;
	CKDPDate* _lastViewed;
	int _state;
	CKDPIdentifier* _user;
	SCD_Struct_CK11 _has;

}

@property (nonatomic,readonly) char hasUser; 
@property (nonatomic,retain) CKDPIdentifier * user;                 //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) char hasState; 
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char hasCustomState; 
@property (assign,nonatomic) long long customState;                 //@synthesize customState=_customState - In the implementation block
@property (assign,nonatomic) char hasStateTTLMillis; 
@property (assign,nonatomic) long long stateTTLMillis;              //@synthesize stateTTLMillis=_stateTTLMillis - In the implementation block
@property (nonatomic,readonly) char hasLastViewed; 
@property (nonatomic,retain) CKDPDate * lastViewed;                 //@synthesize lastViewed=_lastViewed - In the implementation block
@property (nonatomic,readonly) char hasLastEdited; 
@property (nonatomic,retain) CKDPDate * lastEdited;                 //@synthesize lastEdited=_lastEdited - In the implementation block
@property (nonatomic,readonly) char hasLastCustom; 
@property (nonatomic,retain) CKDPDate * lastCustom;                 //@synthesize lastCustom=_lastCustom - In the implementation block
@property (nonatomic,readonly) char hasLastInvisible; 
@property (nonatomic,retain) CKDPDate * lastInvisible;              //@synthesize lastInvisible=_lastInvisible - In the implementation block
-(CKDPIdentifier *)user;
-(void)setUser:(CKDPIdentifier *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasState:(char)arg1 ;
-(char)hasState;
-(void)setLastViewed:(CKDPDate *)arg1 ;
-(void)setLastEdited:(CKDPDate *)arg1 ;
-(void)setLastCustom:(CKDPDate *)arg1 ;
-(void)setLastInvisible:(CKDPDate *)arg1 ;
-(char)hasUser;
-(long long)customState;
-(void)setCustomState:(long long)arg1 ;
-(void)setHasCustomState:(char)arg1 ;
-(char)hasCustomState;
-(long long)stateTTLMillis;
-(void)setStateTTLMillis:(long long)arg1 ;
-(void)setHasStateTTLMillis:(char)arg1 ;
-(char)hasStateTTLMillis;
-(char)hasLastViewed;
-(char)hasLastEdited;
-(char)hasLastCustom;
-(char)hasLastInvisible;
-(CKDPDate *)lastViewed;
-(CKDPDate *)lastEdited;
-(CKDPDate *)lastCustom;
-(CKDPDate *)lastInvisible;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

