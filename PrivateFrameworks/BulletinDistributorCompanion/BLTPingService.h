/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BLTPingService <NSObject>
@required
-(void)unsubscribeFromSectionID:(id)arg1;
-(void)subscribeToSectionID:(id)arg1;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(char)arg2;
-(void)sendBulletinSummary:(id)arg1;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)subscribeWithMachServiceName:(id)arg1;

@end

