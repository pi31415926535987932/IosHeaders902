/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSString * deviceIdentifier; 
@property (assign,nonatomic) short state; 
@property (nonatomic,retain) NSDate * stateModificationDate; 
+(id)recordType;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)identifierForDeviceIdentifier:(id)arg1 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 ;
+(id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 ;
+(id)allKnownDeviceMigrationStates;
+(id)deviceMigrationStatesMatchingPredicate:(id)arg1 ;
+(id)currentDeviceMigrationStateCreateIfNecessary:(char)arg1 ;
+(id)stringFromMigrationState:(short)arg1 ;
+(id)currentDeviceMigrationState;
-(id)recordName;
-(id)recordZoneID;
-(id)loggingDescriptionValues;
-(void)deleteFromLocalDatabase;
-(id)threadUnsafeNewlyCreatedRecord;
-(void)mergeDataFromRecord:(id)arg1 ;
-(char)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(char)isMigrating;
@end

