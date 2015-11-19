/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SYDJournal : NSObject {

	NSMutableDictionary* store;
	NSMutableDictionary* journal;
	char readonly;

}
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)changesSinceChangeCount:(long long)arg1 ;
-(long long)maximumChangeCount;
-(id)initWithMutableStore:(id)arg1 ;
-(void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3 ;
-(int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2 ;
-(char)removeChangesUntilChangeCount:(long long)arg1 ;
@end
