/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:22:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCacheInternal;

@interface NSURLCache : NSObject {

	NSURLCacheInternal* _internal;

}

@property (assign) unsigned memoryCapacity; 
@property (assign) unsigned diskCapacity; 
@property (readonly) unsigned currentMemoryUsage; 
@property (readonly) unsigned currentDiskUsage; 
+(void)setSharedURLCache:(id)arg1 ;
+(id)sharedURLCache;
-(unsigned)currentDiskUsage;
-(void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2 ;
-(unsigned)currentMemoryUsage;
-(void)getCachedResponseForDataTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCachedResponseForDataTask:(id)arg1 ;
-(id)_initWithExistingCFURLCache:(CFURLCache*)arg1 ;
-(id)_diskCacheDefaultPath;
-(id)_cacheDirectory;
-(CFCachedURLResponse*)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)arg1 ;
-(void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponse*)arg1 forRequest:(CFURLRequestRef)arg2 ;
-(long)_nscfBridgeURLCacheDiskCapacity;
-(void)_nscfBridgeURLCacheSetMemoryCapacity:(long)arg1 ;
-(void)_nscfBridgeURLCacheSetDiskCapacity:(long)arg1 ;
-(void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1 ;
-(void)_nscfBridgeURLCacheRemoveAllCachedResponses;
-(long)_nscfBridgeURLCacheMemoryCapacity;
-(long)_nscfBridgeURLCacheCurrentMemoryUsage;
-(long)_nscfBridgeURLCacheCurrentDiskUsage;
-(id)_initWithIdentifier:(id)arg1 memoryCapacity:(int)arg2 diskCapacity:(int)arg3 private:(BOOL)arg4 ;
-(id)initWithExistingSharedCFURLCache:(CFURLCache*)arg1 ;
-(id)_initWithMemoryCapacity:(unsigned)arg1 diskCapacity:(unsigned)arg2 relativePath:(id)arg3 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)setMemoryCapacity:(unsigned)arg1 ;
-(void)setDiskCapacity:(unsigned)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeCachedResponsesSinceDate:(id)arg1 ;
-(id)initWithMemoryCapacity:(unsigned)arg1 diskCapacity:(unsigned)arg2 diskPath:(id)arg3 ;
-(void)removeAllCachedResponses;
-(unsigned)diskCapacity;
-(unsigned)memoryCapacity;
-(CFURLCache*)_CFURLCache;
-(void)removeCachedResponseForRequest:(id)arg1 ;
@end

