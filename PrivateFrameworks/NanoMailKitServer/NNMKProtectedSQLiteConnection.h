/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSQLiteConnection.h>

@class NSString;

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection {

	char _protectedDatabaseAttached;
	NSString* _protectedDatabasePath;
	NSString* _protectedDatabaseName;

}

@property (nonatomic,readonly) char protectedDatabaseAttached;              //@synthesize protectedDatabaseAttached=_protectedDatabaseAttached - In the implementation block
@property (nonatomic,retain) NSString * protectedDatabasePath;              //@synthesize protectedDatabasePath=_protectedDatabasePath - In the implementation block
@property (nonatomic,retain) NSString * protectedDatabaseName;              //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
-(NSString *)protectedDatabaseName;
-(int)attachProtectedDatabase;
-(id)_vfsModuleName;
-(id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4 errorCode:(int*)arg5 ;
-(void)dettachProtectedDatabase;
-(char)protectedDatabaseAttached;
-(NSString *)protectedDatabasePath;
-(void)setProtectedDatabasePath:(NSString *)arg1 ;
-(void)setProtectedDatabaseName:(NSString *)arg1 ;
@end

