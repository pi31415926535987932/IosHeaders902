/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject {

	NSString* _bundleId;
	FBSApplicationDataStoreRepositoryClient* _client;
	char _clientNeedsCheckin;

}

@property (nonatomic,retain,readonly) NSString * bundleID;              //@synthesize bundleId=_bundleId - In the implementation block
+(void)synchronize;
+(void)_doWithClassClient:(/*^block*/id)arg1 ;
+(void)setPrefetchedKeys:(id)arg1 ;
+(void)_setClassClient:(id)arg1 ;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
-(NSString *)bundleID;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)_initWithBundleId:(id)arg1 client:(id)arg2 ;
-(id)_makeSafe:(id)arg1 forType:(Class)arg2 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedXPCCodableObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)archivedXPCCodableObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(void)setArchivedXPCCodableObject:(id)arg1 forKey:(id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
@end

