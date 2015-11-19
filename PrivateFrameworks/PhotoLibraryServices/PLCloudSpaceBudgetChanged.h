/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLCloudSpaceBudgetChanged : NSObject {

	unsigned _budget;
	unsigned _behavior;

}

@property (nonatomic,readonly) unsigned budget;                //@synthesize budget=_budget - In the implementation block
@property (nonatomic,readonly) unsigned behavior;              //@synthesize behavior=_behavior - In the implementation block
-(id)description;
-(unsigned)behavior;
-(unsigned)budget;
-(id)initWithNewBudget:(unsigned)arg1 behavior:(unsigned)arg2 ;
@end
