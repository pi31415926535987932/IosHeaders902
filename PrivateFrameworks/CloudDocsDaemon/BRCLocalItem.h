/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCSyncThrottleItemProtocol.h>
#import <libobjc.A.dylib/BRCItem.h>

@class BRCItemID, NSString, BRCStatInfo, NSNumber, BRCAccountSession, BRCServerZone, BRCLocalContainer, BRCLocalStatInfo, CKRecordID, CKRecord, BRCAliasItem, BRCDirectoryItem, BRCDocumentItem, NSMutableSet;

@interface BRCLocalItem : NSObject <BRCSyncThrottleItemProtocol, BRCItem> {

	BRCAccountSession* _session;
	BRCServerZone* _serverZone;
	BRCLocalContainer* _container;
	BRCItemID* _itemID;
	NSNumber* _ownerKey;
	BRCLocalStatInfo* _st;
	unsigned _syncUpState;
	BRCLocalItem* _orig;
	unsigned long long _localDiffs;
	unsigned char _itemScope;
	NSNumber* _inFlightDiffs;
	unsigned long long _dbRowID;
	unsigned long long _notifsRank;
	unsigned _sharingOptions;
	NSNumber* _knownByServer;
	NSNumber* _isInDocumentScope;
	NSNumber* _parentFileID;
	id _serverPathMatchID;
	char _resolvedPath;
	char _forceDelete;
	char _forceDeletedAlready;
	char _forceNotif;
	NSString* _path;

}

@property (nonatomic,readonly) CKRecordID * structureRecordID; 
@property (nonatomic,readonly) CKRecord * baseStructureRecord; 
@property (nonatomic,readonly) BRCAliasItem * asAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) NSString * digestDescription; 
@property (nonatomic,readonly) BRCItemID * itemID;                                               //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BRCLocalItem * orig;                                              //@synthesize orig=_orig - In the implementation block
@property (nonatomic,readonly) unsigned long long dbRowID;                                       //@synthesize dbRowID=_dbRowID - In the implementation block
@property (nonatomic,readonly) NSNumber * parentFileID; 
@property (nonatomic,readonly) char needsInsert; 
@property (nonatomic,readonly) char isFault; 
@property (nonatomic,readonly) char isLost; 
@property (nonatomic,readonly) char isOnDisk; 
@property (nonatomic,readonly) char isAlmostDead; 
@property (nonatomic,readonly) char isFromInitialScan; 
@property (nonatomic,readonly) char isInDocumentScope; 
@property (nonatomic,readonly) char isReserved; 
@property (nonatomic,readonly) char isKnownByServer; 
@property (nonatomic,readonly) char isKnownByServerOrInFlight; 
@property (nonatomic,readonly) char isDeadInServerTruth; 
@property (nonatomic,readonly) char isReadAndUploaded; 
@property (nonatomic,readonly) char isIdleOrRejected; 
@property (nonatomic,readonly) char isRejected; 
@property (nonatomic,readonly) char needsReading; 
@property (nonatomic,readonly) char needsUpload; 
@property (nonatomic,readonly) char needsSyncUp; 
@property (nonatomic,readonly) char isSharedByMe; 
@property (nonatomic,readonly) char isSharedByMeWithAShareID; 
@property (nonatomic,readonly) BRCItemID * serverPathMatchItemID; 
@property (nonatomic,readonly) NSMutableSet * setOfContainersIDsWithReverseAliases; 
@property (nonatomic,readonly) BRCLocalStatInfo * st;                                            //@synthesize st=_st - In the implementation block
@property (nonatomic,readonly) unsigned syncUpState;                                             //@synthesize syncUpState=_syncUpState - In the implementation block
@property (nonatomic,readonly) NSNumber * inFlightDiffs;                                         //@synthesize inFlightDiffs=_inFlightDiffs - In the implementation block
@property (nonatomic,readonly) unsigned long long localDiffs;                                    //@synthesize localDiffs=_localDiffs - In the implementation block
@property (nonatomic,readonly) unsigned long long notifsRank;                                    //@synthesize notifsRank=_notifsRank - In the implementation block
@property (nonatomic,readonly) char physicalNameNeedsRename; 
@property (nonatomic,readonly) NSString * path;                                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * extension; 
@property (nonatomic,readonly) char isDead; 
@property (nonatomic,readonly) char isLive; 
@property (nonatomic,readonly) char isAlias; 
@property (nonatomic,readonly) char isPackage; 
@property (nonatomic,readonly) char isDocument; 
@property (nonatomic,readonly) char isDirectory; 
@property (nonatomic,readonly) NSNumber * ownerKey;                                              //@synthesize ownerKey=_ownerKey - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BRCServerZone * serverZone;                                       //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned sharingOptions;                                            //@synthesize sharingOptions=_sharingOptions - In the implementation block
+(char)supportsSecureCoding;
+(id)newItemWithPath:(id)arg1 parentID:(id)arg2 ;
-(id)parentItem;
-(char)isLive;
-(char)isDirectory;
-(char)isPackage;
-(BRCItemID *)itemID;
-(char)isRejected;
-(BRCAccountSession *)session;
-(char)isFault;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BRCLocalContainer *)container;
-(NSString *)extension;
-(id)descriptionWithContext:(id)arg1 ;
-(char)isDocument;
-(char)isAlias;
-(char)isReserved;
-(BRCLocalItem *)orig;
-(BRCLocalStatInfo *)st;
-(char)isDead;
-(NSString *)logicalName;
-(NSNumber *)parentFileID;
-(BRCDocumentItem *)asDocument;
-(unsigned)sharingOptions;
-(NSNumber *)ownerKey;
-(char)isLost;
-(BRCAliasItem *)asAlias;
-(unsigned long long)dbRowID;
-(char)evictWithGroup:(id)arg1 error:(id*)arg2 ;
-(BRCServerZone *)serverZone;
-(char)changedAtRelativePath:(id)arg1 scanPackage:(char)arg2 ;
-(char)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(char)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(char)isKnownByServer;
-(void)_markNeedsSyncingUp;
-(void)markLostClearGenerationID:(char)arg1 backoffMode:(unsigned char)arg2 ;
-(void)updateFromFSAtPath:(id)arg1 ;
-(char)saveToDB;
-(void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(char)arg4 ;
-(void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1 ;
-(char)saveToDBForServerEdit:(char)arg1 keepAliases:(char)arg2 ;
-(void)markDead;
-(char)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)diffAgainstOriginalItem;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(unsigned long long)notifsRank;
-(char)learnStagedInfoFromDownloadStageID:(id)arg1 error:(id*)arg2 ;
-(void)handleUnknownItemError;
-(void)triggerTransferNotificationIfNeeded;
-(void)markNeedsDeleteForRescheduleOfItem:(id)arg1 ;
-(char)isKnownByServerOrInFlight;
-(char)checkIsInDocumentsScopeWithParent:(id)arg1 ;
-(id)_initWithRelativePath:(id)arg1 parentID:(id)arg2 ;
-(id)_initWithLocalItem:(id)arg1 ;
-(id)_initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3 ;
-(char)needsInsert;
-(char)_isInterestingUpdateForNotifs;
-(NSMutableSet *)setOfContainersIDsWithReverseAliases;
-(id)_setOfParentIDs;
-(void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(char)arg2 ;
-(char)isIdleOrRejected;
-(char)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1 ;
-(char)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(char)arg3 ;
-(unsigned long long)diffAgainstLocalItem:(id)arg1 ;
-(char)updateFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(char)needsReading;
-(void)updateStructuralCKInfoFromServerItem:(id)arg1 ;
-(char)isReadAndUploaded;
-(void)moveAsideLocally;
-(void)markNeedsReading;
-(void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2 ;
-(void)clearFromStage;
-(BRCDirectoryItem *)asDirectory;
-(void)markLostWhenReplacedByItem:(id)arg1 ;
-(char)validateLoggingToFile:(_sFILE*)arg1 ;
-(void)setSharingOptions:(unsigned)arg1 ;
-(char)isFromInitialScan;
-(char)isInDocumentScope;
-(char)isDeadInServerTruth;
-(BRCItemID *)serverPathMatchItemID;
-(char)isAlmostDead;
-(char)isSharedByMe;
-(char)isSharedByMeWithAShareID;
-(char)physicalNameNeedsRename;
-(NSString *)digestDescription;
-(id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3 ;
-(void)markForceNotify;
-(char)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(void)markForceNeedsSyncUp;
-(void)prepareForSyncUp;
-(void)markLatestSyncRequestFailed;
-(void)markLatestSyncRequestRejected;
-(void)markLatestRequestAcknowledged;
-(void)markFound;
-(void)markLostWithoutBackoff;
-(void)markReserved;
-(void)markRemovedFromFilesystemForServerEdit:(char)arg1 ;
-(void)markRenamedUsingServerItem:(id)arg1 toRelpath:(id)arg2 ;
-(void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned)arg2 ;
-(void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned)arg2 documentID:(unsigned)arg3 ;
-(void)updateStatMetadataFromServerItem:(id)arg1 ;
-(void)updateItemMetadataFromServerItem:(id)arg1 ;
-(void)markLiveFromStage;
-(void)beginBounceAndSaveToDBWithName:(id)arg1 ;
-(void)markBounceFinished;
-(void)markBounceFailed;
-(char)needsUpload;
-(char)needsSyncUp;
-(void)startDownloadWithOptions:(unsigned)arg1 group:(id)arg2 ;
-(unsigned)syncUpState;
-(unsigned long long)localDiffs;
-(NSNumber *)inFlightDiffs;
-(CKRecordID *)structureRecordID;
-(CKRecord *)baseStructureRecord;
-(void)_serializeStructuralPluginHints:(id)arg1 ;
-(id)structureRecordBeingDeadInServerTruth:(char)arg1 stageID:(id)arg2 ;
-(float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(float)fakeSync;
-(void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2 ;
-(void)fixupStagedItemAtStartup;
-(char)isOnDisk;
@end

