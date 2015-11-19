/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/HAPKeyStore.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HAPSystemKeychainStore : NSObject <HAPKeyStore> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _activeControllerIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * activeControllerIdentifier;              //@synthesize activeControllerIdentifier=_activeControllerIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)systemStore;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2 ;
-(long)_getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 ;
-(long)_createControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 ;
-(id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(char)arg4 error:(int*)arg5 ;
-(NSString *)activeControllerIdentifier;
-(long)_addKeychainItem:(id)arg1 ;
-(void)setActiveControllerIdentifier:(NSString *)arg1 ;
-(long)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(char)arg3 ;
-(char)_getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 ;
-(long)_removeControllerKeyPair;
-(long)_removeKeychainItem:(id)arg1 leaveTombstone:(char)arg2 ;
-(long)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 ;
-(long)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(char)arg2 ;
-(long)_getMetadataSecretKey:(id*)arg1 ;
-(long)_createMetadataSecretKey:(id*)arg1 ;
-(long)_getPublicKey:(id*)arg1 registeredWithHomeKit:(char*)arg2 forAccessoryName:(id)arg3 ;
-(long)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2 ;
-(char)_removeAccessoryKeyForName:(id)arg1 ;
-(long)_savePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned)arg3 ;
-(long)_deletePeripheralIdentifierForAccessoryName:(id)arg1 ;
-(long)_getPeripheralIdentifier:(id*)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned*)arg3 ;
-(long)_deleteAllPeripheralIdentifiers;
-(char)getControllerKeyPair:(id*)arg1 username:(id*)arg2 error:(id*)arg3 ;
-(char)updatePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned)arg3 error:(id*)arg4 ;
-(char)deletePeripheralIdentifierForAccessoryName:(id)arg1 error:(id*)arg2 ;
-(id)readPeripheralIdentifierForAccessoryName:(id)arg1 protocolVersion:(unsigned*)arg2 error:(id*)arg3 ;
-(id)getPeripherialIdentifiersAndAccessoryNames;
-(char)savePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned)arg3 error:(id*)arg4 ;
-(id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(char*)arg2 error:(id*)arg3 ;
-(char)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(char)arg4 error:(id*)arg5 ;
-(char)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3 ;
-(char)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4 ;
-(char)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(char)arg2 error:(id*)arg3 ;
-(void)updateActiveControllerPairingIdentifier:(id)arg1 ;
-(char)getMetadataSecretKey:(id*)arg1 error:(id*)arg2 ;
-(char)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3 ;
-(char)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)removeControllerKeyPairWithError:(id*)arg1 ;
-(char)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(char)arg3 error:(id*)arg4 ;
-(char)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4 ;
-(char)removeAllAccessoryKeys:(id*)arg1 ;
-(char)deleteAllPeripheralIdentifiers:(id*)arg1 ;
-(char)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(char)arg5 error:(id*)arg6 ;
-(char)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2 ;
@end

