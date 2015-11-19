/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSURL, NSMutableArray;

@interface MusicSearchRecentsStorage : UIViewController {

	int _limit;
	NSURL* _persistenceURL;
	NSMutableArray* _recents;
	char _hasChanges;
	int _maximumNumberOfRecents;

}

@property (readonly) int maximumNumberOfRecents;              //@synthesize maximumNumberOfRecents=_maximumNumberOfRecents - In the implementation block
+(id)sharedRecentsStorage;
-(id)recentSearches;
-(void)save;
-(void)load;
-(void)clear;
-(id)initWithLimit:(int)arg1 persistenceURL:(id)arg2 ;
-(void)_addRecent:(id)arg1 replacingRecent:(id)arg2 ;
-(void)addRecent:(id)arg1 ;
-(void)replaceRecent:(id)arg1 withRecent:(id)arg2 ;
-(int)maximumNumberOfRecents;
@end

