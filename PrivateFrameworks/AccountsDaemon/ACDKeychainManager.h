/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ACDKeychainManager : NSObject
+(void)initialize;
+(id)credentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 ;
+(id)_credentialForAccountWithID:(id)arg1 accountTypeID:(id)arg2 credentialType:(id)arg3 clientID:(id)arg4 error:(id*)arg5 ;
+(void)_migrateCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 ;
+(id)_keychainServiceNameForClientID:(id)arg1 accountTypeIdentifier:(id)arg2 key:(id)arg3 ;
+(id)_itemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
+(void)_setCredentialForAccount:(id)arg1 clientID:(id)arg2 handleCredentialItemRemovals:(char)arg3 error:(id*)arg4 ;
+(void)_saveCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 error:(id*)arg4 ;
+(void)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 accountTypeID:(id)arg3 clientID:(id)arg4 error:(id*)arg5 ;
+(void)_setNonPersistentCredentialTimerForAccount:(id)arg1 ;
+(char)_shouldSyncCredentialForAccountType:(id)arg1 ;
+(void)_setItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(char)arg6 error:(id*)arg7 ;
+(void)removeCredentialForAccount:(id)arg1 error:(id*)arg2 ;
+(void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)_removeCredentialForAccountWithUsername:(id)arg1 accountIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 credentialType:(id)arg4 clientID:(id)arg5 error:(id*)arg6 ;
+(void)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 username:(id)arg3 accountTypeID:(id)arg4 clientID:(id)arg5 error:(id*)arg6 ;
+(char)_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
+(id)credentialForManagedAccountObject:(id)arg1 ;
+(id)credentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(void)setCredentialForAccount:(id)arg1 ;
+(void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(void)setCredentialForAccount:(id)arg1 error:(id*)arg2 ;
+(void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)setCredentialForNewAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)removeCredentialForAccount:(id)arg1 ;
+(void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(void)removeCredentialForAccount:(id)arg1 key:(id)arg2 error:(id*)arg3 ;
+(void)_removeAllItemsForService:(id)arg1 ;
+(void)_removeAllItemsForUsername:(id)arg1 ;
@end

