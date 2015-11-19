/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/nanobackupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary;

@interface NBExclusionListManager : NSObject {

	char _hasReadConfiguration;
	NSSet* _excludedPerGizmoDomains;
	NSMutableDictionary* _excludedPerGizmoDomainSettings;

}

@property (nonatomic,retain) NSSet * excludedPerGizmoDomains;                                   //@synthesize excludedPerGizmoDomains=_excludedPerGizmoDomains - In the implementation block
@property (assign,nonatomic) char hasReadConfiguration;                                         //@synthesize hasReadConfiguration=_hasReadConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * excludedPerGizmoDomainSettings;              //@synthesize excludedPerGizmoDomainSettings=_excludedPerGizmoDomainSettings - In the implementation block
-(void)readConfigurationIfNeeded;
-(NSSet *)excludedPerGizmoDomains;
-(id)excludedKeysInDomain:(id)arg1 ;
-(void)setExcludedPerGizmoDomains:(NSSet *)arg1 ;
-(char)hasReadConfiguration;
-(void)setHasReadConfiguration:(char)arg1 ;
-(NSMutableDictionary *)excludedPerGizmoDomainSettings;
-(void)setExcludedPerGizmoDomainSettings:(NSMutableDictionary *)arg1 ;
-(void)purgeCache;
@end
