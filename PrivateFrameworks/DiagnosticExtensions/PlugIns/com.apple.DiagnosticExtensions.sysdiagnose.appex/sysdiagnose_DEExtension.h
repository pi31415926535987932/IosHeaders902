/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/PlugIns/com.apple.DiagnosticExtensions.sysdiagnose.appex/com.apple.DiagnosticExtensions.sysdiagnose
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEExtensionProvider.h>

@protocol OS_xpc_object;
@class NSObject;

@interface sysdiagnose_DEExtension : DEExtensionProvider {

	NSObject*<OS_xpc_object> _connection;

}

@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(const char*)requestSysdiagnose;
-(const char*)sendSysdiagnoseRequest:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(id)attachmentList;
-(id)setupConnection;
@end
