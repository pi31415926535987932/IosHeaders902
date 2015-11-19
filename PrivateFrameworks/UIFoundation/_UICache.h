/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface _UICache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_source> _memoryWarningsSource;
	char _clearsCacheOnLowMemoryWarnings;
	char _clearsCacheOnApplicationBackground;
	id _noteObserver;

}

@property (assign,nonatomic) char clearsCacheOnLowMemoryWarnings; 
@property (assign,nonatomic) char clearsCacheOnApplicationBackground; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setClearsCacheOnApplicationBackground:(char)arg1 ;
-(void)setClearsCacheOnLowMemoryWarnings:(char)arg1 ;
-(char)clearsCacheOnLowMemoryWarnings;
-(char)clearsCacheOnApplicationBackground;
-(id)cacheKeys;
@end

