/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface MCInteractionClient : NSObject {

	NSString* _defaultStatus;
	NSString* _lastStatus;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSString * defaultStatus; 
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(char)didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_receivedUserInput:(id)arg1 preflight:(char)arg2 payloadIndex:(unsigned)arg3 delegate:(id)arg4 semaphore:(id)arg5 error:(id)arg6 outResponses:(id)arg7 ;
-(char)didUpdateStatus:(id)arg1 ;
-(id)initWithXPCClientConnection:(id)arg1 ;
-(char)requestUserInput:(id)arg1 delegate:(id)arg2 outResult:(id*)arg3 ;
-(char)showUserWarnings:(id)arg1 outResult:(char*)arg2 ;
-(char)didBeginInstallingNextProfileData:(id)arg1 ;
-(char)requestCurrentPasscodeOutPasscode:(id*)arg1 ;
-(NSString *)defaultStatus;
-(void)setDefaultStatus:(NSString *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

