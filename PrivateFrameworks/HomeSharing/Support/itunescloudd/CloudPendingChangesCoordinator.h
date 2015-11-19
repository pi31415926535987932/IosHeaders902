/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CloudPendingChangesCoordinator : NSObject {

	NSString* _name;
	NSString* _pendingChangesPath;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sagaPendingChangesCoordinator;
+(id)jaliscoPendingChangesCoordinator;
+(id)jaliscoAppLibraryPendingChangesCoordinator;
-(void)processPendingChangesUsingLibrary:(id)arg1 ;
-(void)addPendingChange:(id)arg1 ;
-(void)removeAllPendingChanges;
-(id)_pendingChanges;
-(char)_savePendingChanges:(id)arg1 ;
-(id)initWithPrefix:(id)arg1 ;
@end

