/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNNotificationAuthorizationAlertController, NSObject;

@interface UNNotificationSettingsService : NSObject {

	UNNotificationAuthorizationAlertController* _authorizationAlertController;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)bundleIdentifiersWithEnabledNotifications:(id)arg1 ;
-(unsigned)notificationTypesForBundleIdentifier:(id)arg1 ;
-(void)_queue_notificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)notificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)bundleIdentifiersWithEnabledNotifications:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_queue_bundleIdentifiersWithEnabledNotifications:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_queue_notificationSettingsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_queue_registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_queue_registerNotificationTypes:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationSettingsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)registerNotificationTypes:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
@end

