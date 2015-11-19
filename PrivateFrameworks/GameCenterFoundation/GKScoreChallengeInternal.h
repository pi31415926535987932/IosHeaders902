/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {

	GKScoreInternal* _score;
	GKLeaderboardInternal* _leaderboard;

}

@property (nonatomic,copy) GKScoreInternal * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) GKLeaderboardInternal * leaderboard;              //@synthesize leaderboard=_leaderboard - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(GKScoreInternal *)score;
-(void)dealloc;
-(unsigned)type;
-(GKLeaderboardInternal *)leaderboard;
-(void)setLeaderboard:(GKLeaderboardInternal *)arg1 ;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(void)setScore:(GKScoreInternal *)arg1 ;
-(id)titleText;
@end

