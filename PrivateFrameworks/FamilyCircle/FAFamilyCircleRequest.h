/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FAFamilyCircleRequest : NSObject {

	NSString* _usernameOrDSID;
	NSString* _passwordOrToken;

}

@property (copy) NSString * usernameOrDSID;               //@synthesize usernameOrDSID=_usernameOrDSID - In the implementation block
@property (copy) NSString * passwordOrToken;              //@synthesize passwordOrToken=_passwordOrToken - In the implementation block
-(id)init;
-(id)requestOptions;
-(id)serviceConnection;
-(id)serviceRemoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)usernameOrDSID;
-(NSString *)passwordOrToken;
-(void)setUsernameOrDSID:(NSString *)arg1 ;
-(void)setPasswordOrToken:(NSString *)arg1 ;
@end

