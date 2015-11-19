/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRTCPConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface TRDConnectionManager : NSObject <TRTCPConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _connectionDelegateQueue;
	NSMapTable* _connectionToXPCConnectionOwners;
	NSMapTable* _serviceToConnection;
	NSMapTable* _serviceToConnectionCompletionHandlers;
	NSMapTable* _XPCConnectionToConnectionToPacketEventClasses;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)connectionDidClose:(id)arg1 ;
-(void)TRXPCD_closeConnectionWithUniqueIdentifier:(int)arg1 ;
-(void)TRXPCD_connectionWithUniqueIdentifier:(int)arg1 sendPacketEvent:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)TRXPCD_connectionWithUniqueIdentifier:(int)arg1 setRelevantReceivedPacketEventTypes:(id)arg2 ;
-(void)connectToService:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)TRXPCD_connectToService:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 didReceivePacketEvent:(id)arg2 ;
-(void)_XPCServerDidInvalidateClientConnectionNotification:(id)arg1 ;
-(id)_existingConnectionForService:(id)arg1 ;
-(void)_callConnectionCompletionHandlersForService:(id)arg1 withConnection:(id)arg2 error:(id)arg3 ;
-(id)_existingConnectionForConnectionUniqueIdentifier:(int)arg1 ;
-(id)_packetEventClassesForPacketEventTypes:(id)arg1 ;
@end

