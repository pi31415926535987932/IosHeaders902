/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKScoreInternal, GKGame, NSString, NSDate, GKPlayer;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	char _shouldSetDefaultLeaderboard;
	GKScoreInternal* _internal;
	GKGame* _game;

}

@property (assign,nonatomic) long long value; 
@property (nonatomic,copy) NSString * formattedValue; 
@property (nonatomic,copy) NSString * leaderboardIdentifier; 
@property (assign,nonatomic) unsigned long long context; 
@property (nonatomic,retain,readonly) NSDate * date; 
@property (nonatomic,retain,readonly) GKPlayer * player; 
@property (assign,nonatomic) int rank; 
@property (assign,nonatomic) char shouldSetDefaultLeaderboard;                   //@synthesize shouldSetDefaultLeaderboard=_shouldSetDefaultLeaderboard - In the implementation block
@property (retain) GKScoreInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (retain,readonly) NSString * playerID; 
@property (nonatomic,retain) NSString * groupLeaderboardIdentifier; 
@property (assign) char valueSet; 
@property (nonatomic,retain) GKGame * game;                                      //@synthesize game=_game - In the implementation block
@property (nonatomic,copy) NSString * category; 
+(void)reportScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(char)supportsSecureCoding;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(void)reportScores:(id)arg1 whileScreeningChallenges:(char)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(void)reportScores:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)issueChallengeToPlayers:(id)arg1 message:(id)arg2 ;
-(char)canBeShared;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(void)_gkSetSharingInfo:(id)arg1 ;
-(id)fetchSharingInfo;
-(id)_gkSharingInfo;
-(GKPlayer *)player;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKScoreInternal *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2 ;
-(id)initWithLeaderboardIdentifier:(id)arg1 ;
-(char)shouldSetDefaultLeaderboard;
-(id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2 ;
-(id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2 ;
-(id)initWithCategory:(id)arg1 ;
-(void)reportScoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setShouldSetDefaultLeaderboard:(char)arg1 ;
-(NSString *)playerID;
-(GKScoreInternal *)internal;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

