/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/ctkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface TKTokenServer : NSObject {

	NSObject*<OS_xpc_object> _listener;

}
-(id)init;
-(void)start;
-(void)acceptNewConnection:(id)arg1 ;
@end

