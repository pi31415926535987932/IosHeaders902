/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@class NSArray, NSMutableDictionary;

@interface WBSAutomaticReadingListAppExtensionSource : WBSAutomaticReadingListSocialSource {

	NSArray* _activeExtensions;
	NSMutableDictionary* _identifierToEntriesMap;
	id _extensionMatchingContext;
	NSArray* _extensions;

}

@property (nonatomic,retain) NSArray * extensions;              //@synthesize extensions=_extensions - In the implementation block
+(id)sharedSource;
+(id)displayNameForExtension:(id)arg1 ;
+(id)hostingAppIconForExtension:(id)arg1 ;
-(id)serviceName;
-(id)init;
-(char)isActive;
-(id)_items;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(NSArray *)extensions;
-(void)_beginExtensionDiscovery;
-(void)_extensionsDidChange;
-(char)showItemsForExtension:(id)arg1 ;
-(void)requestMoreItemsWithAge:(int)arg1 ;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(id)serviceImage;
-(id)servicePluginName;
-(id)recordsInfo;
-(id)_findAccounts;
-(void)setShowItems:(char)arg1 forExtension:(id)arg2 ;
-(void)setExtensions:(NSArray *)arg1 ;
@end

