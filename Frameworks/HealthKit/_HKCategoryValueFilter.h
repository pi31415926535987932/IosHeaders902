/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSNumber, HKCategoryType;

@interface _HKCategoryValueFilter : _HKFilter {

	NSNumber* _comparisonValue;
	HKCategoryType* _dataType;
	unsigned _operatorType;

}

@property (nonatomic,readonly) NSNumber * comparisonValue;              //@synthesize comparisonValue=_comparisonValue - In the implementation block
@property (nonatomic,readonly) HKCategoryType * dataType;               //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned operatorType;                   //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned)arg1 comparisonValue:(id)arg2 dataType:(id)arg3 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)acceptsDataObject:(id)arg1 ;
-(HKCategoryType *)dataType;
-(NSNumber *)comparisonValue;
-(unsigned)operatorType;
@end

