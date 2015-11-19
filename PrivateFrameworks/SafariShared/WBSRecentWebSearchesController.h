/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {

	NSMutableArray* _recentSearchEntries;

}
+(char)_shouldTrackSearches;
+(unsigned)_maximumNumberOfSearchesToTrack;
+(id)_defaultsKey;
-(id)recentSearches;
-(void)clearRecentSearches;
-(void)_addRecentSearchEntry:(id)arg1 ;
-(void)_saveRecentSearches;
-(void)_loadRecentSearchesIfNeeded;
-(id)recentSearchesMatchingPrefix:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(id)_recentSearchesDictionaries;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)_migrateLegacyData;
-(void)addRecentSearch:(id)arg1 ;
-(void)clearRecentSearchesAddedAfterDate:(id)arg1 ;
-(void)_addLegacySearch:(id)arg1 ;
@end

