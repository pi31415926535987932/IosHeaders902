/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying> {

	long long _errorCode;
	NSData* _errorDict;
	NSString* _errorDomain;
	NSString* _identifier;
	int _status;
	SCD_Struct_SP6 _has;

}

@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) char hasErrorDict; 
@property (nonatomic,retain) NSData * errorDict;                  //@synthesize errorDict=_errorDict - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setErrorDict:(NSData *)arg1 ;
-(char)hasErrorDict;
-(NSData *)errorDict;
-(id)sockPuppetMessageForPlayerItemSetStatus;
-(id)sockPuppetMessageForQueuePlayerSetStatus;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(long long)errorCode;
-(NSString *)errorDomain;
-(char)hasErrorCode;
-(void)setErrorDomain:(NSString *)arg1 ;
-(char)hasErrorDomain;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

