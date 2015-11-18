/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSMutableDictionary, NSPropertyDescription;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _ignoringIdempotentKVO : 1;
		unsigned _mustCopyOnWrite : 1;
		unsigned _isImmutableCopy : 1;
		unsigned _reserved : 11;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;
	unsigned* _orderKeys;
	id _grottyHack;
	NSMutableDictionary* _forcedKeys;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) char fault; 
+(char)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(char)arg3 ;
-(void)willRead;
-(unsigned)indexOfObjectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)turnIntoFault;
-(NSPropertyDescription *)relationship;
-(void)willReadWithContents:(id)arg1 ;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(char)_shouldProcessKVOChange;
-(char)_isIdenticalFault:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)_orderedObjectsAndKeys;
-(char)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id*)arg2 ;
-(char)_hasOrderKeys;
-(void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned*)arg3 reorderedIndexes:(char**)arg4 ;
-(unsigned)_orderKeyForObject:(id)arg1 ;
-(void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1 ;
-(id)_newOrderKeys;
-(void)_assignOrderKeysUsingCount:(unsigned)arg1 ;
-(void)willChange;
-(void)insertObjects:(const id*)arg1 count:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)_setProcessingIdempotentKVO:(char)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(Class)classForArchiver;
-(void)sortRange:(NSRange)arg1 options:(unsigned)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)isFault;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned)indexOfObject:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(id)description;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)unionSet:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)allObjects;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(Class)classForCoder;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)sortWithOptions:(unsigned)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(char)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(char)isEqualToOrderedSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSManagedObject *)source;
-(char)_tryRetain;
-(unsigned)indexOfObjectWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
@end

