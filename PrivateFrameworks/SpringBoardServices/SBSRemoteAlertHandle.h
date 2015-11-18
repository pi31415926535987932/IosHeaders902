/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 5:00:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertClientHandle.h>

@protocol OS_dispatch_queue;
@class SBSRemoteAlertClient, NSObject, BSMachPortSendRight, NSHashTable, NSString;

@interface SBSRemoteAlertHandle : NSObject <SBSRemoteAlertClientHandle> {

	SBSRemoteAlertClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	BSMachPortSendRight* _token;
	char _active;
	NSHashTable* _observers;

}

@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(char)arg2 ;
+(id)handleWithConfiguration:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(char)isValid;
-(void)removeObserver:(id)arg1 ;
-(void)queue_setActive:(char)arg1 ;
-(id)queue_token;
-(id)_initWithHandleToken:(id)arg1 ;
-(void)queue_noteInvalidWithError:(id)arg1 ;
-(void)_queue_callObserversWithBlock:(/*^block*/id)arg1 ;
-(void)activateWithOptions:(id)arg1 ;
@end

