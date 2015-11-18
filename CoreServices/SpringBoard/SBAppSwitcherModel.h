/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSTimer, NSMutableDictionary;

@interface SBAppSwitcherModel : NSObject {

	NSMutableArray* _recentDisplayItems;
	NSTimer* _saveTimer;
	NSMutableDictionary* _displayItemsToRoles;

}
+(id)sharedInstance;
-(id)mainSwitcherDisplayItems;
-(id)_recentsFromPrefs;
-(id)_displayItemRolesFromPrefsForLoadedDisplayItems:(id)arg1 ;
-(void)_appActivationStateDidChange:(id)arg1 ;
-(void)_warmUpRecentIcons;
-(void)_invalidateSaveTimer;
-(void)addToFront:(id)arg1 role:(int)arg2 ;
-(void)_saveRecents;
-(id)_recentsFromLegacyPrefs;
-(void)_warmUpIconForDisplayItem:(id)arg1 ;
-(void)_pruneRoles;
-(void)_saveRecentsDelayed;
-(id)displayItemsForAppsOfRoles:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

