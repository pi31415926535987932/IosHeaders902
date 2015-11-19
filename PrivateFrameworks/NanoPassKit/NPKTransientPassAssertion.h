/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSString;

@interface NPKTransientPassAssertion : NSObject {

	NSXPCConnection* _xpcConnection;
	NSString* _uniqueID;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                          //@synthesize uniqueID=_uniqueID - In the implementation block
-(void)invalidate;
-(NSString *)uniqueID;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_resyncState;
-(id)initWithPassWithUniqueID:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
@end

