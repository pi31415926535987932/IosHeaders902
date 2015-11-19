/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSRemoteURLConnectionAgent.app/IDSRemoteURLConnectionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSRemoteURLConnectionAgent/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSMutableSet, NSString;

@interface IDSRemoteURLConnectionDaemonIDSInterface : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _messageIDToLoaderUniqueIDMap;
	NSMutableSet* _pendingResponseUniqueIDs;

}

@property (nonatomic,readonly) char isNearby; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)sendIDSMessage:(id)arg1 forLoaderWithUniqueID:(id)arg2 ;
-(void)_handleLoadRequestMessage:(id)arg1 ;
-(void)_handleLoadRequestResponseMessage:(id)arg1 ;
-(void)_handleCancelMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(char)isNearby;
@end

