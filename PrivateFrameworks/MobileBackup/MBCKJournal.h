/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBCKModel.h>

@class NSArray, MBCKDevice, NSSet, NSString, NSMutableDictionary;

@interface MBCKJournal : MBCKModel {

	NSArray* _snapshotActions;
	NSArray* _processedSnapshotActions;
	MBCKDevice* _device;
	NSSet* _cachedSnapshotIDs;
	NSString* _recordPrefix;
	NSMutableDictionary* _cachedSnapshotsByID;
	NSMutableDictionary* _snapshotsByID;

}

@property (nonatomic,readonly) NSArray * snapshotActions;                            //@synthesize snapshotActions=_snapshotActions - In the implementation block
@property (nonatomic,readonly) NSArray * processedSnapshotActions;                   //@synthesize processedSnapshotActions=_processedSnapshotActions - In the implementation block
@property (assign,nonatomic,__weak) MBCKDevice * device;                             //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSSet * cachedSnapshotIDs;                              //@synthesize cachedSnapshotIDs=_cachedSnapshotIDs - In the implementation block
@property (nonatomic,retain) NSString * recordPrefix;                                //@synthesize recordPrefix=_recordPrefix - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedSnapshotsByID;              //@synthesize cachedSnapshotsByID=_cachedSnapshotsByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * snapshotsByID;                    //@synthesize snapshotsByID=_snapshotsByID - In the implementation block
+(id)journalForDevice:(id)arg1 cache:(id)arg2 ;
-(void)refreshWithRecord:(id)arg1 ;
-(id)recordRepresentation;
-(id)_getRecordIDString;
-(char)replayWithError:(id*)arg1 ;
-(id)initWithDevice:(id)arg1 cache:(id)arg2 ;
-(NSString *)recordPrefix;
-(char)_handleSnapshotActions:(id)arg1 withError:(id*)arg2 ;
-(char)_handleMergeAction:(id)arg1 outputSnapshotID:(id)arg2 serverSnapshot:(id)arg3 shouldMergeDeletions:(BOOL)arg4 withError:(id*)arg5 ;
-(char)_handleRemoveDomain:(id)arg1 domainHmacs:(id)arg2 outputSnapshotID:(id)arg3 serverSnapshot:(id)arg4 withError:(id*)arg5 ;
-(NSArray *)snapshotActions;
-(NSArray *)processedSnapshotActions;
-(NSSet *)cachedSnapshotIDs;
-(void)setCachedSnapshotIDs:(NSSet *)arg1 ;
-(void)setRecordPrefix:(NSString *)arg1 ;
-(NSMutableDictionary *)cachedSnapshotsByID;
-(void)setCachedSnapshotsByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)snapshotsByID;
-(void)setSnapshotsByID:(NSMutableDictionary *)arg1 ;
-(MBCKDevice *)device;
-(unsigned)recordZone;
-(id)recordType;
-(void)setDevice:(MBCKDevice *)arg1 ;
@end

