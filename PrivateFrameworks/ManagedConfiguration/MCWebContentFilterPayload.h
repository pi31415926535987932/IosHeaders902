/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSArray, NSDictionary;

@interface MCWebContentFilterPayload : MCPayload {

	char _autoFilterEnabled;
	char _filterBrowsers;
	char _filterSockets;
	NSString* _filterType;
	NSArray* _permittedURLStrings;
	NSArray* _whitelistedBookmarks;
	NSArray* _blacklistedURLStrings;
	NSDictionary* _pluginConfiguration;
	NSString* _name;
	NSString* _pluginBundleID;

}

@property (nonatomic,copy) NSString * filterType;                             //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) char autoFilterEnabled;                          //@synthesize autoFilterEnabled=_autoFilterEnabled - In the implementation block
@property (nonatomic,retain) NSArray * permittedURLStrings;                   //@synthesize permittedURLStrings=_permittedURLStrings - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedBookmarks;                  //@synthesize whitelistedBookmarks=_whitelistedBookmarks - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedURLStrings;                 //@synthesize blacklistedURLStrings=_blacklistedURLStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginConfiguration;              //@synthesize pluginConfiguration=_pluginConfiguration - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * pluginBundleID;                         //@synthesize pluginBundleID=_pluginBundleID - In the implementation block
@property (assign,nonatomic) char filterBrowsers;                             //@synthesize filterBrowsers=_filterBrowsers - In the implementation block
@property (assign,nonatomic) char filterSockets;                              //@synthesize filterSockets=_filterSockets - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)pluginFilterKeysAndClasses;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)title;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(id)restrictions;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)installationWarnings;
-(NSString *)pluginBundleID;
-(char)autoFilterEnabled;
-(NSArray *)permittedURLStrings;
-(NSArray *)whitelistedBookmarks;
-(NSArray *)blacklistedURLStrings;
-(void)setAutoFilterEnabled:(char)arg1 ;
-(void)setPermittedURLStrings:(NSArray *)arg1 ;
-(void)setWhitelistedBookmarks:(NSArray *)arg1 ;
-(void)setBlacklistedURLStrings:(NSArray *)arg1 ;
-(NSDictionary *)pluginConfiguration;
-(void)setPluginConfiguration:(NSDictionary *)arg1 ;
-(void)setPluginBundleID:(NSString *)arg1 ;
-(char)filterBrowsers;
-(void)setFilterBrowsers:(char)arg1 ;
-(char)filterSockets;
-(void)setFilterSockets:(char)arg1 ;
@end

