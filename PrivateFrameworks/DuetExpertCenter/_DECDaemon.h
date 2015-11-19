/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, _DECExpertManager, _DECServerResponder, _DECInternalConsumerManager, _DECPrewarmManager, NSString;

@interface _DECDaemon : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	_DECExpertManager* _expertManager;
	_DECServerResponder* _serverResponder;
	_DECInternalConsumerManager* _consumerManager;
	_DECPrewarmManager* _prewarmManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_prewarm;
-(void)_runDelayedInitializationOperations;
@end

