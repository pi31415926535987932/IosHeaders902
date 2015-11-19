/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {

	NSString* _accountName;
	NSArray* _emailAddresses;
	NSString* _facebookUserID;
	NSNumber* _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;
	unsigned _loginStatus;

}

@property (assign) unsigned loginStatus;              //@synthesize loginStatus=_loginStatus - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)emailAddresses;
-(void)dealloc;
-(void)setEmailAddresses:(id)arg1 ;
-(unsigned)loginStatus;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfChallenges;
-(unsigned short)numberOfTurns;
-(int)defaultFamiliarity;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(void)setPurpleBuddyAccount:(char)arg1 ;
-(void)setUnderage:(char)arg1 ;
-(char)isFindable;
-(void)setFindable:(char)arg1 ;
-(char)isPhotoPending;
-(void)setPhotoPending:(char)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(void)setLoginStatus:(unsigned)arg1 ;
-(char)isFriend;
-(char)isLocalPlayer;
-(char)isPurpleBuddyAccount;
-(char)isUnderage;
-(id)accountName;
-(void)setAccountName:(id)arg1 ;
@end

