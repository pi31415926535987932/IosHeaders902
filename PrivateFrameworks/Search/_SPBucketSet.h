/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <searchd/searchd-Structs.h>
@class NSObject;

@interface _SPBucketSet : NSObject {

	CFDictionaryRef _members;
	NSObject*<OS_dispatch_queue> _queue;
	int _count;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) int count;                                                 //@synthesize count=_count - In the implementation block
-(void)decay:(int)arg1 ;
-(void)addValue:(int)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)valueForKey:(id)arg1 ;
-(void)dealloc;
-(int)count;
-(id)init;
-(void)setCount:(int)arg1 ;
-(void)removeValueForKey:(id)arg1 ;
@end

