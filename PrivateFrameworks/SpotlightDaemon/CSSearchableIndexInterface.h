/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSSearchableIndexInterface <NSObject>
@optional
-(void)acknowledgeReindex;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(int)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(/*^block*/id)arg10;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3;
-(void)checkInWithProtectionClass:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2;
-(void)_issueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(int)arg6 completionHandler:(/*^block*/id)arg7;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(int)arg7 completionHandler:(/*^block*/id)arg8;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(int)arg3 completionHandler:(/*^block*/id)arg4;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(int)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(int)arg6;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5;

@end
