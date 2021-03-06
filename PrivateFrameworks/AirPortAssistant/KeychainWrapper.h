/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSLock;

@interface KeychainWrapper : NSObject {

	NSString* _accountName;
	NSString* _serviceName;
	NSLock* _lock;

}

@property (nonatomic,copy) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSLock * lock;                     //@synthesize lock=_lock - In the implementation block
+(id)keychainWrapperWithMACAddress:(id)arg1 ;
+(id)keychainPasswordForMACAddress:(id)arg1 ;
+(void)removeKeychainPasswordForMACAddress:(id)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(NSLock *)lock;
-(long)addGenericPassword:(id)arg1 withLabel:(id)arg2 andDescription:(id)arg3 ;
-(void)removeGenericPassword;
-(id)initWithAccountName:(id)arg1 serviceName:(id)arg2 ;
-(id)genericPassword;
-(id)getPasswordFromQuery:(id)arg1 ;
-(id)getGenericPassword;
-(void)setServiceName:(NSString *)arg1 ;
-(id)genericPasswordQuery;
-(void)setLock:(NSLock *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
@end

