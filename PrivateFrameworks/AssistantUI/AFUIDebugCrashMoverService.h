/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface AFUIDebugCrashMoverService : NSObject {

	NSObject*<OS_xpc_object> _connection;

}

@property (getter=_connection,nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(id)_connection;
-(const char*)_errorDescriptionForXPCObject:(id)arg1 ;
-(void)moveLogsWithExtensions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

