/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSCompanionServerProtocol <NSSServerProtocol>
@required
-(void)getProfilesInfo:(/*^block*/id)arg1;
-(void)rebootDevice;
-(void)getUsage:(/*^block*/id)arg1;
-(void)purgeUsageBundle:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)getAboutInfo:(/*^block*/id)arg1;
-(void)obliterateGizmo:(/*^block*/id)arg1;
-(void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getProfileWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)installProfile:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)removeProfileWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)getLegalDocuments:(/*^block*/id)arg1;
-(void)getLocalesInfo:(/*^block*/id)arg1;
-(void)setDeviceName:(id)arg1;

@end
