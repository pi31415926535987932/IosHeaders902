/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, IMTimer;

@interface IDSAppleRegistrationKeychainReader : NSObject {

	NSMutableArray* _registrationData;
	IMTimer* _purgeTimer;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;

}
+(id)sharedInstance;
+(id)keychainServiceForVersion:(unsigned)arg1 ;
+(id)keychainAccountForVersion:(unsigned)arg1 ;
+(id)keychainAccessGroupForVersion:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flushCache;
-(id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3 ;
-(void)_reloadFromKeychainLocked;
-(void)_setPurgeTimer;
-(void)_reloadFromDictionaryLocked:(id)arg1 ;
-(id)registrationData;
-(void)_flush;
@end

