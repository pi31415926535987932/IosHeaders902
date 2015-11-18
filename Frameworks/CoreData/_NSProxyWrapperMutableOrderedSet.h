/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSNotifyingWrapperMutableOrderedSet.h>

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {

	_NSFaultingMutableOrderedSetMutationMethods* _mutationMethods;

}
-(void)addObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 mutationMethods:(id)arg4 ;
-(void)insertObjects:(id*)arg1 count:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)sortWithOptions:(unsigned)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
@end

