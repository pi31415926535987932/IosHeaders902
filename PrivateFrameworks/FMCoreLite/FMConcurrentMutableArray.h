/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, FMReadWriteLock;

@interface FMConcurrentMutableArray : NSObject {

	NSMutableArray* _underlyingArray;
	FMReadWriteLock* _lock;

}

@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,retain) NSMutableArray * underlyingArray;              //@synthesize underlyingArray=_underlyingArray - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                        //@synthesize lock=_lock - In the implementation block
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(FMReadWriteLock *)lock;
-(NSMutableArray *)underlyingArray;
-(id)nativeArray;
-(void)setUnderlyingArray:(NSMutableArray *)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
@end

