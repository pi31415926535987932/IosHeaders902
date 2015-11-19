/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/Support/cplogd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface CPLogDServer : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSMutableDictionary* _UUIDToFileMap;

}
-(void)_handleClientConnection:(id)arg1 ;
-(void)_handleMessage:(id)arg1 client:(id)arg2 ;
-(void)_getUUIDForPath:(id)arg1 client:(id)arg2 outError:(char*)arg3 ;
-(void)_logData:(id)arg1 client:(id)arg2 outError:(char*)arg3 ;
-(void)_slurpFile:(id)arg1 client:(id)arg2 outError:(char*)arg3 ;
-(void)_startNewFile:(id)arg1 client:(id)arg2 outError:(char*)arg3 ;
-(id)init;
@end

