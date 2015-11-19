/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <searchd/MDIndexer.h>

@protocol CSIndexExtensionDelegate, OS_dispatch_source, OS_dispatch_queue, OS_xpc_object, NSObject;
@class NSObject, NSDictionary, NSSet, NSString;

@interface SPCoreSpotlightIndexer : NSObject <MDIndexer> {

	int cancelFlags[4];
	double _lastUpdateTime;
	char _deviceFirstUnlockedInMKB;
	char _deviceFirstUnlockedInSB;
	id<CSIndexExtensionDelegate> extensionDelegate;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_queue> _indexQueue;
	NSObject*<OS_dispatch_queue> _reindexAllQueue;
	unsigned _dataMigrationStage;
	NSDictionary* _concreteIndexers;
	NSObject*<OS_xpc_object> _expirationActivity;
	NSObject*<OS_dispatch_queue> _firstUnlockQueue;
	NSObject*<OS_dispatch_source> _firstUnlockTimer;
	id<NSObject> _dataMigrationStartObserver;
	id<NSObject> _dataMigrationFinishObserver;
	NSSet* _dataMigrationBundleIDs;
	int _springBoardLockStateNotifyToken;
	int _keybagLockStateNotifyToken;
	unsigned long long _dirty_time;

}

@property (__weak) id<CSIndexExtensionDelegate> extensionDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_source> idleTimer;                     //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexQueue;                     //@synthesize indexQueue=_indexQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reindexAllQueue;                //@synthesize reindexAllQueue=_reindexAllQueue - In the implementation block
@property (assign,nonatomic) unsigned dataMigrationStage;                                 //@synthesize dataMigrationStage=_dataMigrationStage - In the implementation block
@property (assign,nonatomic) char deviceFirstUnlockedInMKB;                               //@synthesize deviceFirstUnlockedInMKB=_deviceFirstUnlockedInMKB - In the implementation block
@property (assign,nonatomic) char deviceFirstUnlockedInSB;                                //@synthesize deviceFirstUnlockedInSB=_deviceFirstUnlockedInSB - In the implementation block
@property (nonatomic,retain) NSDictionary * concreteIndexers;                             //@synthesize concreteIndexers=_concreteIndexers - In the implementation block
@property (assign,nonatomic) unsigned long long dirty_time;                               //@synthesize dirty_time=_dirty_time - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> expirationActivity;                 //@synthesize expirationActivity=_expirationActivity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> firstUnlockQueue;               //@synthesize firstUnlockQueue=_firstUnlockQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> firstUnlockTimer;              //@synthesize firstUnlockTimer=_firstUnlockTimer - In the implementation block
@property (nonatomic,retain) id<NSObject> dataMigrationStartObserver;                     //@synthesize dataMigrationStartObserver=_dataMigrationStartObserver - In the implementation block
@property (nonatomic,retain) id<NSObject> dataMigrationFinishObserver;                    //@synthesize dataMigrationFinishObserver=_dataMigrationFinishObserver - In the implementation block
@property (nonatomic,retain) NSSet * dataMigrationBundleIDs;                              //@synthesize dataMigrationBundleIDs=_dataMigrationBundleIDs - In the implementation block
@property (assign,nonatomic) int springBoardLockStateNotifyToken;                         //@synthesize springBoardLockStateNotifyToken=_springBoardLockStateNotifyToken - In the implementation block
@property (assign,nonatomic) int keybagLockStateNotifyToken;                              //@synthesize keybagLockStateNotifyToken=_keybagLockStateNotifyToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cooldown;
+(id)sharedInstance;
+(void)deactivate;
+(void)preheat;
+(void)shutdown;
+(void)shrink;
-(void)attributesForProtectionClass:(id)arg1 bundleId:(id)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned)dataMigrationStage;
-(void)setDataMigrationStage:(unsigned)arg1 ;
-(void)closeIndex;
-(NSObject*<OS_dispatch_queue>)indexQueue;
-(void)performIndexerTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)deviceFirstUnlockedInMKB;
-(char)deviceFirstUnlockedInSB;
-(void)reindexAllItemsWithIndexers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)firstUnlockQueue;
-(void)performIndexerTask:(id)arg1 withIndexExtensionsAndCompletionHandler:(/*^block*/id)arg2 ;
-(void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2 ;
-(int)openIndex:(char)arg1 ;
-(id<CSIndexExtensionDelegate>)extensionDelegate;
-(void)revokeExpiredItems:(id)arg1 ;
-(void)powerStateChanged;
-(void)setIndexQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFirstUnlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)firstUnlockTimer;
-(void)setFirstUnlockTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDeviceFirstUnlockedInMKB:(char)arg1 ;
-(void)setDeviceFirstUnlockedInSB:(char)arg1 ;
-(NSDictionary *)concreteIndexers;
-(void)setDataMigrationBundleIDs:(NSSet *)arg1 ;
-(void)setConcreteIndexers:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reindexAllQueue;
-(int)_openIndex:(char)arg1 ;
-(char)blacklistCheck:(id)arg1 ;
-(void)issueMerge:(id)arg1 ;
-(void)issueSplit:(id)arg1 ;
-(void)issueRepair:(id)arg1 ;
-(NSSet *)dataMigrationBundleIDs;
-(void)runMigration;
-(void)setExtensionDelegate:(id<CSIndexExtensionDelegate>)arg1 ;
-(void)imageDataForProtectionClass:(id)arg1 bundleId:(id)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchAttributesForProtectionClass:(id)arg1 attributes:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setReindexAllQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)dirty_time;
-(void)setDirty_time:(unsigned long long)arg1 ;
-(NSObject*<OS_xpc_object>)expirationActivity;
-(void)setExpirationActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(id<NSObject>)dataMigrationStartObserver;
-(void)setDataMigrationStartObserver:(id<NSObject>)arg1 ;
-(id<NSObject>)dataMigrationFinishObserver;
-(void)setDataMigrationFinishObserver:(id<NSObject>)arg1 ;
-(int)springBoardLockStateNotifyToken;
-(void)setSpringBoardLockStateNotifyToken:(int)arg1 ;
-(int)keybagLockStateNotifyToken;
-(void)setKeybagLockStateNotifyToken:(int)arg1 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(int)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(int)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(int)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(int)arg6 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(int)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 ;
-(void)_issueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)flush;
-(void)preheat;
-(void)dirty;
-(double)lastUpdateTime;
-(char)commitUpdates;
-(void)cancelQuery:(id)arg1 ;
-(void)shrink;
-(id)startQuery:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)coolDown;
-(NSObject*<OS_dispatch_source>)idleTimer;
-(void)setIdleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

