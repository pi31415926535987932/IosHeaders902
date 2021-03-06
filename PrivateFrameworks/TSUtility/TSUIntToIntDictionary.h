/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CFDictionaryRef)p_cfDictionary;
-(int)intForKey:(int)arg1 ;
-(void)setInt:(int)arg1 forKey:(int)arg2 ;
-(char)intIsPresentForKey:(int)arg1 outValue:(int*)arg2 ;
-(void)removeIntForKey:(int)arg1 ;
-(void)removeAllInts;
-(char)containsKey:(int)arg1 ;
-(void)applyFromIntToIntDictionary:(id)arg1 ;
-(id)arrayOfBoxedKeys;
@end

