/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreRecents/CoreRecents-Structs.h>
@class NSObject, NSXPCConnection;

@interface CRRecentContactsLibrary : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	NSXPCConnection* _connection;

}
+(/*^block*/id)frecencyComparator;
+(id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5 ;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned)arg4 ;
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned)arg7 ;
+(id)defaultInstance;
+(/*^block*/id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
+(NSObject*)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 ;
+(NSObject*)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned)arg6 ;
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 ;
+(NSObject*)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned)arg5 ;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 ;
+(NSObject*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 ;
-(void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2 ;
-(void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(/*^block*/id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(char)arg4 ;
-(unsigned)maxDateEventsPerRecentContact;
-(char)removeRecentContacts:(id)arg1 error:(out id*)arg2 ;
-(void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(id)_searchRecentsUsingQuery:(id)arg1 ;
-(id)_remoteLibraryWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_searchRecentsUsingQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_searchRecentsUsingQuery:(id)arg1 error:(id*)arg2 ;
-(void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(char)arg5 ;
-(char)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id*)arg4 ;
-(void)setImplicitGroupThreshold:(unsigned)arg1 forDomain:(id)arg2 ;
-(id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4 ;
-(id)copyRecentsForDomain:(id)arg1 ;
-(int)_daemonProcessID;
-(id)_newConnection;
@end

