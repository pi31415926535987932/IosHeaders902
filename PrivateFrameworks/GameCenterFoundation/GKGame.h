/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKGameInternal, NSString, NSDictionary, NSNumber, GKStoreItemInternal;

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {

	GKGameInternal* _internal;
	int _environment;

}

@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSString * engineID; 
@property (nonatomic,readonly) char isGameRecommendation; 
@property (retain) GKGameInternal * internal;                                      //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) char prerendered; 
@property (assign,nonatomic) int environment;                                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSDictionary * gameDescriptor; 
@property (nonatomic,readonly) NSNumber * adamID; 
@property (nonatomic,readonly) NSNumber * externalVersion; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) unsigned char platform; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultCategory; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem; 
@property (nonatomic,readonly) GKGameInfo gameInfo; 
@property (nonatomic,readonly) char supportsMultiplayer; 
@property (nonatomic,readonly) char supportsTurnBasedMultiplayer; 
@property (getter=isInstalled,nonatomic,readonly) char installedGame; 
@property (getter=isDownloading,nonatomic,readonly) char downloading; 
+(void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1 ;
+(void)launchAppStoreWithGameCenterGames;
+(CGSize)serverImageSizeForIconStyle:(int)arg1 ;
+(void)preloadIconsForGames:(id)arg1 style:(int)arg2 handler:(/*^block*/id)arg3 ;
+(void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(char)supportsSecureCoding;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)currentGame;
+(id)currentGameIncludingGameCenter:(char)arg1 ;
+(void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(int)arg2 ;
+(void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadTopGamesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)updateGames:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)markGameRecommendationsDisplayed:(id)arg1 complete:(/*^block*/id)arg2 ;
+(void)markGameRecommendationsViewed:(id)arg1 complete:(/*^block*/id)arg2 ;
+(char)isGameCenter;
+(char)isPreferences;
-(void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)imageSourceForIconStyle:(int)arg1 ;
-(id)URLStringForImageWithShineIfNeeded;
-(id)loadIconForStyle:(int)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)imageSourceForiOSIconStyle:(int)arg1 ;
-(id)macBrushForIconStyle:(int)arg1 ;
-(id)_imageURLForIconStyle:(int)arg1 ;
-(id)_imageSourceForIconSize:(CGSize)arg1 ;
-(void)uninstallApplicationWithBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)iconForStyle:(int)arg1 ;
-(id)cachedIconForStyle:(int)arg1 ;
-(id)loadIconForSize:(CGSize)arg1 scale:(float)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)logoImageWithMaximumSize:(CGSize)arg1 ;
-(void)removeGameWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(void)_gkSetSharingInfo:(id)arg1 ;
-(id)fetchSharingInfo;
-(id)_gkSharingInfo;
-(char)isInstalled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)environment;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)cacheKey;
-(void)setEnvironment:(int)arg1 ;
-(char)isDownloading;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKGameInternal *)arg1 ;
-(NSDictionary *)gameDescriptor;
-(GKGameInfo)gameInfo;
-(char)isStoreItemUnexpired;
-(void)loadGameRatingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)submitRating:(float)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(GKGameInternal *)internal;
-(char)isGameRecommendation;
-(void)getFriendPlayersIncludingCompatibleGames:(char)arg1 handler:(/*^block*/id)arg2 ;
-(char)isGameCenter;
-(void)getFriendPlayersForAchievement:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getFriendPlayersForLeaderboard:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
@end

