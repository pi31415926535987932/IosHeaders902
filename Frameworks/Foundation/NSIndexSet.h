/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	struct {
		unsigned _isEmpty : 1;
		unsigned _hasSingleRange : 1;
		unsigned _cacheValid : 1;
		unsigned _reservedArrayBinderController : 29;
	}  _indexSetFlags;
	SCD_Union_NS27* _internal;

}

@property (readonly) unsigned count; 
@property (readonly) unsigned firstIndex; 
@property (readonly) unsigned lastIndex; 
+(id)indexSetWithIndexes:(const unsigned*)arg1 count:(unsigned)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)indexSet;
+(id)indexSetWithIndex:(unsigned)arg1 ;
+(id)indexSetWithIndexesInRange:(NSRange)arg1 ;
-(unsigned)_indexAtIndex:(unsigned)arg1 ;
-(void)_setContentToContentFromIndexSet:(id)arg1 ;
-(unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)arg1 ;
-(unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)arg1 ;
-(unsigned)_indexClosestToIndex:(unsigned)arg1 equalAllowed:(char)arg2 following:(char)arg3 ;
-(unsigned)_indexOfRangeContainingIndex:(unsigned)arg1 ;
-(unsigned)indexWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)indexesWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned)__getContainmentVector:(out char*)arg1 inRange:(NSRange)arg2 ;
-(char)containsIndexes:(id)arg1 ;
-(id)_numberEnumerator;
-(void)enumerateIndexesInRange:(NSRange)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned)indexInRange:(NSRange)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesPassingTest:(/*^block*/id)arg1 ;
-(id)indexesInRange:(NSRange)arg1 options:(unsigned)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(unsigned)indexLessThanOrEqualToIndex:(unsigned)arg1 ;
-(unsigned)indexGreaterThanOrEqualToIndex:(unsigned)arg1 ;
-(id)initWithIndexSet:(id)arg1 ;
-(id)initWithIndexes:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)enumerateRangesWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned)getIndexes:(unsigned*)arg1 maxCount:(unsigned)arg2 inIndexRange:(NSRange*)arg3 ;
-(char)intersectsIndexesInRange:(NSRange)arg1 ;
-(void)enumerateIndexesWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)isEqualToIndexSet:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)containsIndex:(unsigned)arg1 ;
-(unsigned)firstIndex;
-(unsigned)indexGreaterThanIndex:(unsigned)arg1 ;
-(unsigned)lastIndex;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)indexLessThanIndex:(unsigned)arg1 ;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)countOfIndexesInRange:(NSRange)arg1 ;
-(unsigned)rangeCount;
-(NSRange)rangeAtIndex:(unsigned)arg1 ;
-(id)initWithIndexesInRange:(NSRange)arg1 ;
-(char)containsIndexesInRange:(NSRange)arg1 ;
-(void)enumerateRangesInRange:(NSRange)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithIndex:(unsigned)arg1 ;
-(unsigned)indexPassingTest:(/*^block*/id)arg1 ;
@end

