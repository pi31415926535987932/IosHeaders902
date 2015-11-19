/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGameDescriptor.h>

@class NSString, NSDictionary, GKStoreItemInternal;

@interface GKGameInternal : GKGameDescriptor {

	NSString* _name;
	NSDictionary* _icons;
	NSString* _defaultLeaderboardIdentifier;
	GKStoreItemInternal* _storeItem;
	SCD_Union_GK6 _flags;
	unsigned short _numberOfLeaderboards;
	unsigned short _numberOfLeaderboardSets;
	unsigned short _numberOfAchievements;
	unsigned short _maxAchievementPoints;

}

@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                                 //@synthesize icons=_icons - In the implementation block
@property (assign,nonatomic) unsigned char platform; 
@property (assign,getter=isPrerendered,nonatomic) char prerendered; 
@property (assign,nonatomic) char supportsLeaderboards; 
@property (assign,nonatomic) char hasAggregateLeaderboard; 
@property (assign,nonatomic) unsigned short numberOfLeaderboards;                  //@synthesize numberOfLeaderboards=_numberOfLeaderboards - In the implementation block
@property (nonatomic,retain) NSString * defaultLeaderboardIdentifier;              //@synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier - In the implementation block
@property (assign,nonatomic) char supportsLeaderboardSets; 
@property (assign,nonatomic) unsigned short numberOfLeaderboardSets;               //@synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets - In the implementation block
@property (assign,nonatomic) char supportsAchievements; 
@property (assign,nonatomic) unsigned short numberOfAchievements;                  //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned short maxAchievementPoints;                  //@synthesize maxAchievementPoints=_maxAchievementPoints - In the implementation block
@property (assign,nonatomic) char supportsMultiplayer; 
@property (assign,nonatomic) char supportsTurnBasedMultiplayer; 
@property (assign,getter=isValid,nonatomic) char valid; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem;                      //@synthesize storeItem=_storeItem - In the implementation block
@property (assign,nonatomic) unsigned flags; 
+(id)secureCodedPropertyKeys;
-(GKStoreItemInternal *)storeItem;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned short)numberOfCategories;
-(char)isValid;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSDictionary *)icons;
-(void)setValid:(char)arg1 ;
-(void)setPlatform:(unsigned char)arg1 ;
-(id)serverRepresentation;
-(char)supportsLeaderboardSets;
-(char)supportsMultiplayer;
-(char)hasAggregateLeaderboard;
-(unsigned short)numberOfLeaderboardSets;
-(unsigned short)numberOfAchievements;
-(char)supportsTurnBasedMultiplayer;
-(id)defaultCategory;
-(void)setPrerendered:(char)arg1 ;
-(void)setSupportsLeaderboards:(char)arg1 ;
-(void)setSupportsLeaderboardSets:(char)arg1 ;
-(void)setHasAggregateLeaderboard:(char)arg1 ;
-(void)setSupportsAchievements:(char)arg1 ;
-(void)setSupportsMultiplayer:(char)arg1 ;
-(void)setSupportsTurnBasedMultiplayer:(char)arg1 ;
-(NSString *)defaultLeaderboardIdentifier;
-(void)setDefaultLeaderboardIdentifier:(NSString *)arg1 ;
-(unsigned short)numberOfLeaderboards;
-(void)setNumberOfLeaderboards:(unsigned short)arg1 ;
-(void)setNumberOfLeaderboardSets:(unsigned short)arg1 ;
-(void)setNumberOfAchievements:(unsigned short)arg1 ;
-(void)setMaxAchievementPoints:(unsigned short)arg1 ;
-(unsigned short)maxAchievementPoints;
-(char)supportsLeaderboards;
-(char)supportsAchievements;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(unsigned char)platform;
-(char)isPrerendered;
@end
