/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UNSNotificationRegistrarServerProtocol <NSObject>
@required
-(void)setAllowsBackgroundRefresh:(char)arg1 forBundleIdentifier:(id)arg2;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
-(void)backgroundAppRefreshBundleIdentifierMappingWithResult:(/*^block*/id)arg1;
-(void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)remoteNotificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)notificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)notificationSettingsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)registerRemoteNotificationTypes:(unsigned)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)registerBadgeSettingForBundleIdentifier:(id)arg1;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)setObservingRemoteNotifications:(char)arg1 forBundleIdentifier:(id)arg2;

@end

