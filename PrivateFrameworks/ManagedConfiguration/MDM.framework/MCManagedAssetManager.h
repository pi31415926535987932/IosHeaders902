/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCMDMServer;

@interface MCManagedAssetManager : NSObject {

	MCMDMServer* _server;

}

@property (assign,nonatomic,__weak) MCMDMServer * server;              //@synthesize server=_server - In the implementation block
-(MCMDMServer *)server;
-(void)setServer:(MCMDMServer *)arg1 ;
-(void)promptUserForiTunesAccount:(id)arg1 accountNameEditable:(char)arg2 canCreateNewAccount:(char)arg3 assertion:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)promptUserToLoginToiTunesIfNeededTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)inviteUserToCloudVPPProgramURL:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

