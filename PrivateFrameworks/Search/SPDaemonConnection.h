/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Search/Search-Structs.h>
@class SPXPCConnection, NSObject, NSString;

@interface SPDaemonConnection : NSObject {

	SPXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	char _queryHasBeenReissued;
	NSString* _daemonName;
	CFDictionaryRef _runningQueries;

}

@property (nonatomic,retain) NSString * daemonName;                       //@synthesize daemonName=_daemonName - In the implementation block
@property (assign,nonatomic) CFDictionaryRef runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedConnection;
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(void)activate;
-(id)_connection;
-(void)preheat;
-(void)cancelQuery:(id)arg1 ;
-(void)_resetConnection;
-(id)startQuery:(id)arg1 withResponse:(id)arg2 isStable:(char)arg3 ;
-(void)_sendMessage:(id)arg1 info:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)sendMessageForToken:(id)arg1 withResponse:(id)arg2 isStable:(char)arg3 ;
-(id)startQuery:(id)arg1 withResponse:(id)arg2 isStable:(char)arg3 queue:(id)arg4 ;
-(void)retrieveImageDataForResultIdentifierNumber:(long long)arg1 searchDomain:(unsigned)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithDaemonName:(id)arg1 ;
-(id)startQuery:(id)arg1 ;
-(void)startRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2 ;
-(void)requestRecordUpdatesForApplication:(id)arg1 category:(id)arg2 andIDs:(id)arg3 ;
-(void)endRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2 ;
-(void)registerApplication:(id)arg1 withCategories:(id)arg2 ;
-(void)retrieveImageDataForResult:(id)arg1 searchDomain:(unsigned)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)retrieveImageDataWithIdentifier:(id)arg1 searchDomain:(unsigned)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(char)retrieveUpdateListForDisplayIdentifier:(id)arg1 category:(id)arg2 hasUpdates:(char*)arg3 ;
-(NSString *)daemonName;
-(void)setDaemonName:(NSString *)arg1 ;
-(CFDictionaryRef)runningQueries;
-(void)setRunningQueries:(CFDictionaryRef)arg1 ;
-(void)fetchCardDataForResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
-(void)sendFeedback:(id)arg1 ;
-(void)requestParsecParametersWithReply:(/*^block*/id)arg1 ;
@end

