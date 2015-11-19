/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSystemServiceFacility {

	FBServiceClientAuthenticator* _badgeValueAuthenticator;
	FBServiceClientAuthenticator* _deleteSnapshotsAuthenticator;
	FBServiceClientAuthenticator* _shutdownAuthenticator;
	FBServiceClientAuthenticator* _keyboardFocusAuthenticator;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)_handleUIAppCheckIn:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetActiveInterfaceOrientation:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleAppRequestBrightness:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetNextWakeInterval:(id)arg1 forClient:(id)arg2 ;
-(void)_handleIsClientLoggingEnabled:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg1 ;
-(void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2 ;
-(void)_handlePidForApplication:(id)arg1 ;
-(void)_handleCanActivateApplication:(id)arg1 ;
-(void)_handleActivateApplication:(id)arg1 ;
-(void)_handleActivateURL:(id)arg1 ;
-(void)_handleActions:(id)arg1 ;
-(void)_handleTerminateApplication:(id)arg1 ;
-(void)_handleTerminateApplicationGroup:(id)arg1 ;
-(void)_handleShutdown:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleDeleteAllApplicationSnapshots:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSuspendApplication:(id)arg1 forClient:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end

