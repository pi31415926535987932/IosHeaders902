/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataAccess/DataAccess-Structs.h>
@interface DAKeychain : NSObject
+(id)sharedKeychain;
-(void)migratePasswordForAccount:(id)arg1 ;
-(int)_daKeychainAccessibilityForSecAccessibility:(void*)arg1 ;
-(char)canAccessCredentialsWithAccessibility:(int)arg1 ;
-(void)removePersistentCredentials;
-(CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1 ;
-(void*)_secAccessibilityForDAKeychainAccessibility:(int)arg1 ;
-(CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2 ;
-(char)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2 ;
-(id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(char)arg3 passwordExpected:(char)arg4 ;
-(id)guessPasswordForURL:(id)arg1 ;
-(void)removeKeychainInformationsForURL:(id)arg1 ;
-(char)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4 ;
-(id)loadKeychainInformationsForURL:(id)arg1 ;
-(char)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3 ;
@end
