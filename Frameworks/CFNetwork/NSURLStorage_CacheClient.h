/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:22:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLStorageCacheClient.h>

@class NSXPCInterface, NSXPCConnection, NSString, NSData;

@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient> {

	NSXPCInterface* _netStoreInterface;
	NSXPCConnection* _networkStorageConnection;
	NSString* _taskManagerIdentifier;
	NSString* _path;
	weak_ptr<__CFURLCache>* _cfWeakCacheCpp;
	NSData* _sandboxExtensionToken;
	int _storageSize;
	char _networkStorageConnectionInterrupted;

}

@property (assign) char networkStorageConnectionInterrupted;              //@synthesize networkStorageConnectionInterrupted=_networkStorageConnectionInterrupted - In the implementation block
-(void)deleteResponsesSinceDate:(id)arg1 ;
-(void)setMinSizeForVMCachedResource:(int)arg1 ;
-(void)_invalidateNSXPCConnection;
-(char)createStorageTaskManagerForPath:(id)arg1 maxSize:(int)arg2 extension:(id)arg3 withIdentifier:(id)arg4 ;
-(void)copyAllPartitionNamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)copyHostNamesForOptionalPartition:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2 ;
-(void)cachedResponseDictionaryForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(int)currentDiskUsage;
-(void)deleteAllResponses;
-(void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2 ;
-(void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3 ;
-(void)notifyCacheClientOfTimeRelativeResponses:(id)arg1 ;
-(void)setNetworkStorageConnectionInterrupted:(char)arg1 ;
-(char)networkStorageConnectionInterrupted;
-(void)_reconnectWithStorageServer;
-(char)ensureNetworkStorageDaemonConnection;
-(void)addCachedResponse:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
-(void)setMaxSize:(int)arg1 ;
-(id)getPath;
-(id)initWithCache:(shared_ptr<__CFURLCache>*)arg1 ;
@end

