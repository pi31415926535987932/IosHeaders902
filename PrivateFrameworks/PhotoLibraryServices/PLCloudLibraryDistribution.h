/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface PLCloudLibraryDistribution : NSObject {

	NSArray* _categories;
	unsigned long long _reservedBudget;
	unsigned long long _requiredBudget;
	unsigned _behavior;
	unsigned long long _totalAssetsCount;

}

@property (nonatomic,readonly) NSArray * budgetingCategories; 
@property (nonatomic,readonly) unsigned long long requiredBudget; 
@property (nonatomic,readonly) unsigned long long remainingBudget; 
@property (nonatomic,readonly) unsigned long long reservedBudget; 
@property (nonatomic,readonly) unsigned long long totalAssetsCount;              //@synthesize totalAssetsCount=_totalAssetsCount - In the implementation block
@property (nonatomic,readonly) unsigned behavior; 
-(void)dealloc;
-(id)description;
-(unsigned)behavior;
-(NSArray *)budgetingCategories;
-(id)distributionForBudgetingCategory:(unsigned short)arg1 ;
-(unsigned long long)totalAssetsCount;
-(id)initWithLayoutStore:(id)arg1 layoutBehavior:(unsigned)arg2 reservedBudget:(unsigned long long)arg3 ;
-(id)plistSerializedObject;
-(unsigned long long)requiredBudget;
-(id)initWithSerializedPlist:(id)arg1 ;
-(unsigned long long)remainingBudget;
-(unsigned long long)reservedBudget;
@end

