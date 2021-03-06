/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingOwner.h>

@class PLAccountingEnergyEstimateEventEntry;

@interface PLAccountingCorrectionOwner : PLAccountingOwner {

	PLAccountingEnergyEstimateEventEntry* _rootEnergyEstimate;

}

@property (__weak) id<PLAccountingCorrectionOwnerManager> manager; 
@property (retain) PLAccountingEnergyEstimateEventEntry * rootEnergyEstimate;              //@synthesize rootEnergyEstimate=_rootEnergyEstimate - In the implementation block
-(void)run;
-(id)range;
-(id)ID;
-(id)activationDate;
-(PLAccountingEnergyEstimateEventEntry *)rootEnergyEstimate;
-(void)correct;
-(id)initWithRootEnergyEstimate:(id)arg1 ;
-(void)setRunDate:(id)arg1 ;
-(void)setRootEnergyEstimate:(PLAccountingEnergyEstimateEventEntry *)arg1 ;
@end

