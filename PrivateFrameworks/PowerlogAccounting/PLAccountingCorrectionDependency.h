/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency {

	PLAccountingEnergyEventEntry* _energyEvent;

}

@property (retain) PLAccountingEnergyEventEntry * energyEvent;              //@synthesize energyEvent=_energyEvent - In the implementation block
-(id)range;
-(id)ID;
-(id)activationDate;
-(PLAccountingEnergyEventEntry *)energyEvent;
-(id)initWithEnergyEvent:(id)arg1 ;
-(void)setEnergyEvent:(PLAccountingEnergyEventEntry *)arg1 ;
@end

