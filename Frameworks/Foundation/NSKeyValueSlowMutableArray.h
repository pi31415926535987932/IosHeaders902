/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableArray.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray {

	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	char _treatNilValuesLikeEmptyArrays;
	char _padding[3];

}
+(SCD_Struct_NS30*)_proxyNonGCPoolPointer;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(id)_nonNilArrayValueWithSelector:(SEL)arg1 ;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg1 ;
-(id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
@end

