/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface SBPluginManager : NSObject {

	NSString* _pluginsDirectory;
	NSMutableDictionary* _plugins;

}
+(id)sharedInstance;
-(void)loadAllLaunchPlugins;
-(id)springBoardPluginsDirectory;
-(Class)loadPluginBundle:(id)arg1 ;
-(Class)loadPluginNamed:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

