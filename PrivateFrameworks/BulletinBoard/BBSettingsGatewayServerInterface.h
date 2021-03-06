/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)setSectionOrderRule:(int)arg1;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getBehaviorOverridesWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEnabledWithHandler:(/*^block*/id)arg1;
-(void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(/*^block*/id)arg1;
-(void)setOrderedSectionIDs:(id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
-(void)setPrivilegedSenderTypes:(unsigned)arg1 source:(unsigned)arg2;
-(void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned)arg3;
-(void)setBehaviorOverridesChangeUpdatesEnabled:(char)arg1;
-(void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(char)arg1;
-(void)setBehaviorOverrideStatusChangeUpdatesEnabled:(char)arg1;
-(void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(char)arg1;
-(void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(char)arg1;
-(void)setPrivilegedSenderTypesChangeUpdatesEnabled:(char)arg1;
-(void)setBehaviorOverrides:(id)arg1 source:(unsigned)arg2;
-(void)setBehaviorOverrideStatus:(int)arg1 source:(unsigned)arg2;
-(void)setBehaviorOverridesEffectiveWhileUnlocked:(char)arg1 source:(unsigned)arg2;

@end

