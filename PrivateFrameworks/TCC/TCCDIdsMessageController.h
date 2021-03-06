/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TCC.framework/tccd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <tccd/TCCDMessageController.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSString;

@interface TCCDIdsMessageController : TCCDMessageController <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _messageIdsToHandlers;

}

@property (retain) IDSService * idsService;                                 //@synthesize idsService=_idsService - In the implementation block
@property (retain) NSMutableDictionary * messageIdsToHandlers;              //@synthesize messageIdsToHandlers=_messageIdsToHandlers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)messageIdsToHandlers;
-(void)setMessageIdsToHandlers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)_sendMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

