/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <recentsd/recentsd-Structs.h>
@class NSString;

@interface CRSQLiteConnection : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	CFDictionaryRef _statementCache;
	void* _ICUSearchContext;
	void* _CRSearchContext;
	void* _CRPhoneSearchContext;
	int _transactionType;
	unsigned _transactionCount;

}

@property (nonatomic,readonly) sqlite3Ref db;              //@synthesize db=_db - In the implementation block
+(id)connectionToNewInMemoryStore;
-(void)dealloc;
-(void)flush;
-(int)commitTransaction;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(sqlite3Ref)db;
-(int)open;
-(int)beginTransactionWithType:(int)arg1 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(const char*)_vfsModuleName;
-(id)initWithPath:(id)arg1 databaseName:(id)arg2 ;
-(char)isOpen;
-(int)rollbackTransaction;
-(int)beginTransaction;
@end

