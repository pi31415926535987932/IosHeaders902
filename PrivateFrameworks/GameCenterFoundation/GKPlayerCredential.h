/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal, NSDate;

@interface GKPlayerCredential : GKInternalRepresentation {

	NSString* _accountName;
	NSString* _authenticationToken;
	GKPlayerInternal* _playerInternal;
	int _environment;
	unsigned _scope;
	NSDate* _scopeModificationDate;
	NSString* _altDSID;

}

@property (retain) NSString * accountName;                         //@synthesize accountName=_accountName - In the implementation block
@property (retain) NSString * authenticationToken;                 //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (retain) NSString * altDSID;                             //@synthesize altDSID=_altDSID - In the implementation block
@property (retain) GKPlayerInternal * playerInternal;              //@synthesize playerInternal=_playerInternal - In the implementation block
@property (assign) int environment;                                //@synthesize environment=_environment - In the implementation block
@property (assign) unsigned scope;                                 //@synthesize scope=_scope - In the implementation block
@property (retain) NSDate * scopeModificationDate;                 //@synthesize scopeModificationDate=_scopeModificationDate - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)environment;
-(void)setScope:(unsigned)arg1 ;
-(unsigned)scope;
-(void)setEnvironment:(int)arg1 ;
-(GKPlayerInternal *)playerInternal;
-(void)setPlayerInternal:(GKPlayerInternal *)arg1 ;
-(NSDate *)scopeModificationDate;
-(void)setScopeModificationDate:(NSDate *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)altDSID;
@end

