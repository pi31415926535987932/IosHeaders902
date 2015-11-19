/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PairedUnlock/PairedUnlock-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PUProtoDidGetPasscodeState : PBCodable <NSCopying> {

	char _hasPasscode;
	char _isLocked;
	char _isUnlockOnly;

}

@property (assign,nonatomic) char hasPasscode;               //@synthesize hasPasscode=_hasPasscode - In the implementation block
@property (assign,nonatomic) char isLocked;                  //@synthesize isLocked=_isLocked - In the implementation block
@property (assign,nonatomic) char isUnlockOnly;              //@synthesize isUnlockOnly=_isUnlockOnly - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isLocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)isUnlockOnly;
-(void)setIsLocked:(char)arg1 ;
-(void)setHasPasscode:(char)arg1 ;
-(void)setIsUnlockOnly:(char)arg1 ;
-(char)hasPasscode;
@end

