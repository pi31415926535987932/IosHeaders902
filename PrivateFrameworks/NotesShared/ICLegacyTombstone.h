/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) NSString * contentHashAtImport; 
@property (nonatomic,retain) NSDate * modificationDateAtImport; 
+(id)recordType;
+(id)legacyTombstonesMatchingPredicate:(id)arg1 ;
+(id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2 ;
+(id)legacyTombstoneWithIdentifier:(id)arg1 ;
+(id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 ;
+(id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3 ;
+(void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 ;
+(id)allLegacyTombstones;
+(void)addLegacyTombstoneForNote:(id)arg1 ;
+(void)removeLegacyTombstoneForNote:(id)arg1 ;
+(void)addLegacyTombstoneForFolder:(id)arg1 ;
+(void)removeLegacyTombstoneForFolder:(id)arg1 ;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(char)hasTombstonePrefix:(id)arg1 ;
+(short)tombstoneTypeFromRecordName:(id)arg1 ;
-(id)recordZoneID;
-(id)loggingDescriptionValues;
-(void)deleteFromLocalDatabase;
-(id)threadUnsafeNewlyCreatedRecord;
-(void)mergeDataFromRecord:(id)arg1 ;
-(char)hasAllMandatoryFields;
-(char)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
@end

