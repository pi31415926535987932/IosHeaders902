/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DABookmarkDAV/BookmarkDAVAccount.h>
#import <DADaemonBookmarkDAV/DADataclassLockWatcher.h>
#import <DADaemonBookmarkDAV/DABabysittable.h>

@class BookmarkDAVSyncDriver, NSString, NSDictionary;

@interface BookmarkDAVDaemonAccount : BookmarkDAVAccount <DADataclassLockWatcher, DABabysittable> {

	BookmarkDAVSyncDriver* _syncDriver;

}

@property (nonatomic,readonly) NSString * pushKey; 
@property (nonatomic,readonly) NSDictionary * pushTransport; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)pushKey;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(id)waiterID;
-(void)getRootFolderWithConsumer:(id)arg1 ;
-(void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(char)arg2 ;
-(NSDictionary *)pushTransport;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
@end

