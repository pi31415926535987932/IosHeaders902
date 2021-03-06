/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSession.h>

@class TKSmartCardSlotEngine, NSXPCConnection;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {

	TKSmartCardSlotEngine* _slot;
	char _transmitting;
	char _valid;
	char _active;
	int _endPolicy;
	NSXPCConnection* _connection;

}

@property (assign) char valid;                                                   //@synthesize valid=_valid - In the implementation block
@property (assign) char active;                                                  //@synthesize active=_active - In the implementation block
@property (assign) int endPolicy;                                                //@synthesize endPolicy=_endPolicy - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(char)active;
-(void)setActive:(char)arg1 ;
-(char)valid;
-(NSXPCConnection *)connection;
-(void)setValid:(char)arg1 ;
-(void)transmit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setEndPolicy:(int)arg1 ;
-(void)terminateWithReply:(/*^block*/id)arg1 ;
-(void)setSessionEndPolicy:(int)arg1 ;
-(int)endPolicy;
-(id)initWithSlot:(id)arg1 connection:(id)arg2 ;
@end

