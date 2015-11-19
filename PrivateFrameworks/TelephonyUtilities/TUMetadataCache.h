/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface TUMetadataCache : NSObject {

	NSObject*<OS_dispatch_queue> _cache_queue;
	NSArray* _providers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cache_queue;              //@synthesize cache_queue=_cache_queue - In the implementation block
@property (nonatomic,retain) NSArray * providers;                                   //@synthesize providers=_providers - In the implementation block
-(id)init;
-(id)description;
-(char)isEmpty;
-(id)metadataForDestinationID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cache_queue;
-(void)updateCacheWithDestinationIDs:(id)arg1 ;
-(void)removeDestinationIDFromCache:(id)arg1 ;
-(void)setCache_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDataProviders:(id)arg1 ;
-(NSArray *)providers;
-(void)setProviders:(NSArray *)arg1 ;
@end

