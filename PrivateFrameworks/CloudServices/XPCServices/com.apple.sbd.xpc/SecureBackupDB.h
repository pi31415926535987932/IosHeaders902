/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <com.apple.sbd/com.apple.sbd-Structs.h>
@class NSURL;

@interface SecureBackupDB : NSObject {

	_db* _db;
	NSURL* _url;

}

@property (readonly) _db* db;                  //@synthesize db=_db - In the implementation block
@property (readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
+(_db*)openDBWithURL:(id)arg1 truncate:(BOOL)arg2 ;
-(void)closeDB;
-(id)initWithViewName:(id)arg1 keyClass:(id)arg2 ;
-(BOOL)addItem:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(int)removeItemWithKey:(id)arg1 error:(id*)arg2 ;
-(void)resetDB;
-(void)enumerateKeysAndItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(_db*)db;
@end

