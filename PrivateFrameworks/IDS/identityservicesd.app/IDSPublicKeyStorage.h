/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSRecursiveLock, IMTimer, NSMutableDictionary;

@interface IDSPublicKeyStorage : NSObject {

	NSRecursiveLock* _lock;
	/*^block*/id _saveEnqueueBlock;
	IMTimer* _saveTimer;
	NSMutableDictionary* _publicKeyStorage;
	NSMutableDictionary* _personalKeyStorage;
	NSMutableDictionary* _uniqueIDToPushTokenMap;
	char _loaded;

}
+(id)sharedInstance;
-(char)_isUnderFirstDataProtectionLock;
-(void)logState;
-(id)publicKeyForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 ;
-(SecMPPublicIdentityRef)copyPublicIdentityForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 priority:(int)arg5 ;
-(SecMPPublicIdentityRef)copyPersonalPublicIdentityForUniqueID:(id)arg1 priority:(int)arg2 ;
-(void)storePersonalPublicKey:(id)arg1 forToken:(id)arg2 uniqueID:(id)arg3 ;
-(void)_setSaveTimer;
-(void)_loadIfNeeded;
-(void)__updateUniqueIDToTokenMap;
-(id)_existingEntryFromURI:(id)arg1 forURI:(id)arg2 forService:(id)arg3 ;
-(id)_personalPublicKeyForToken:(id)arg1 ;
-(id)_personalPublicKeyForUniqueID:(id)arg1 ;
-(void)removePublicKeyForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 ;
-(id)_entryFromURI:(id)arg1 forURI:(id)arg2 forService:(id)arg3 ;
-(void)_purgeOrphanedKeysToThreshold;
-(void)_purgeEntryIfNecessaryWithFromURI:(id)arg1 forURI:(id)arg2 forService:(id)arg3 forToken:(id)arg4 ;
-(char)hasPublicKeyForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 ;
-(void)emptyPersonalPublicKeyCache;
-(void)storePublicKey:(id)arg1 forToken:(id)arg2 forURI:(id)arg3 fromURI:(id)arg4 forService:(id)arg5 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)_save;
@end

