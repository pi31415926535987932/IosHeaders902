/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSNumber;

@interface MCSubCalAccountPayload : MCPayload {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	char _useSSL;
	NSString* _accountPersistentUUID;
	NSNumber* _useSSLNum;

}

@property (nonatomic,retain,readonly) NSString * accountDescription;              //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                        //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain,readonly) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,retain,readonly) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) char useSSL;                                       //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                      //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * useSSLNum;                              //@synthesize useSSLNum=_useSSLNum - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)password;
-(id)description;
-(id)title;
-(id)subtitle2Label;
-(char)useSSL;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle2Description;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSNumber *)useSSLNum;
-(NSString *)accountDescription;
-(NSString *)username;
-(NSString *)hostname;
@end

