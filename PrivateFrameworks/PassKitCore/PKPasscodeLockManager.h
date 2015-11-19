/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class MCProfileConnection, NSObject, NSHashTable, NSString;

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver> {

	MCProfileConnection* _profileConnection;
	char _isPasscodeSet;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) char isPasscodeSet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(char)isPasscodeSet;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

