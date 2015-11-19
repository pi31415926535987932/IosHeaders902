/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class _DKCategoryType, NSString;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	int _integerValue;
	_DKCategoryType* _categoryType;

}

@property (assign) int integerValue;                                //@synthesize integerValue=_integerValue - In the implementation block
@property (retain) _DKCategoryType * categoryType;                  //@synthesize categoryType=_categoryType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)categoryWithInteger:(int)arg1 type:(id)arg2 ;
+(id)entityName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(int)integerValue;
-(_DKCategoryType *)categoryType;
-(void)setCategoryType:(_DKCategoryType *)arg1 ;
-(id)primaryValue;
-(id)initWithInteger:(int)arg1 type:(id)arg2 ;
-(char)copyToManagedObject:(id)arg1 ;
-(char)copyFromManagedObject:(id)arg1 readMetadata:(char)arg2 ;
-(double)valueDouble;
-(long long)valueInteger;
-(id)objectType;
-(int)compareValue:(id)arg1 ;
-(void)setIntegerValue:(int)arg1 ;
@end

