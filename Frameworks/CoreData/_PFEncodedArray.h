/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@class NSData;

@interface _PFEncodedArray : NSArray {

	NSData* _sourceData;
	int _cd_rc;
	unsigned _count;

}
-(void)_replaceObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(Class)classForArchiver;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(id)description;
-(id)copy;
-(id)mutableCopy;
-(Class)classForCoder;
-(char)_isDeallocating;
-(char)_tryRetain;
-(const id*)_values;
@end

