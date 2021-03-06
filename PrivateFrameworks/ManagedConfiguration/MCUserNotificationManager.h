/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCUserNotificationManager : NSObject

@property (nonatomic,readonly) char hasOutstandingNotifications; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)mainQueueDidReceiveAppWhitelistChangedNotification;
-(void)cancelAllNotificationsCompletionBlock:(/*^block*/id)arg1 ;
-(char)hasOutstandingNotifications;
-(void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(char)arg6 displayInAppWhitelistModes:(char)arg7 dismissAfterTimeInterval:(double)arg8 assertion:(id)arg9 completionBlock:(/*^block*/id)arg10 ;
@end

