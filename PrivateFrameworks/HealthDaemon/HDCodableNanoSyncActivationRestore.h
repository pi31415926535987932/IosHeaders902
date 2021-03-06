/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/HDNanoSyncPersistentUserInfoCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {

	long long _sequenceNumber;
	NSString* _defaultSourceBundleIdentifier;
	NSData* _restoreIdentifier;
	NSMutableArray* _restores;
	int _statusCode;
	SCD_Struct_HD1 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasRestoreIdentifier; 
@property (nonatomic,retain) NSData * restoreIdentifier;                            //@synthesize restoreIdentifier=_restoreIdentifier - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) long long sequenceNumber;                              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) char hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) char hasDefaultSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * defaultSourceBundleIdentifier;              //@synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * restores;                             //@synthesize restores=_restores - In the implementation block
+(id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3 ;
+(id)retreiveFromPersistentUserInfo:(id)arg1 ;
+(id)persistentUserInfoKey;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequenceNumber:(long long)arg1 ;
-(char)hasSequenceNumber;
-(long long)sequenceNumber;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasStatusCode;
-(void)setHasStatusCode:(char)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)nanoSyncDescription;
-(void)setDefaultSourceBundleIdentifier:(NSString *)arg1 ;
-(void)setRestores:(NSMutableArray *)arg1 ;
-(id)decodedRestoreUUID;
-(char)hasRequiredFields;
-(NSString *)defaultSourceBundleIdentifier;
-(NSMutableArray *)restores;
-(void)addRestores:(id)arg1 ;
-(void)setRestoreIdentifier:(NSData *)arg1 ;
-(unsigned)restoresCount;
-(void)clearRestores;
-(id)restoresAtIndex:(unsigned)arg1 ;
-(char)hasRestoreIdentifier;
-(char)hasDefaultSourceBundleIdentifier;
-(NSData *)restoreIdentifier;
-(void)addToPersistentUserInfo:(id)arg1 ;
-(id)copyForPersistentUserInfo;
-(char)readFrom:(id)arg1 ;
@end

