/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@class NSArray;

@interface PLAccountingDebugService : PLService {

	NSArray* _testNames;

}

@property (nonatomic,retain) NSArray * testNames;              //@synthesize testNames=_testNames - In the implementation block
+(void)load;
+(void)printError:(id)arg1 ;
-(id)init;
-(char)verifyLastDistributionEventWithDistributionID:(int)arg1 withNodeName:(id)arg2 withWeight:(double)arg3 ;
-(char)verifyLastPowerEventWithRootNodeID:(int)arg1 withPower:(double)arg2 ;
-(char)verifyTotalEnergyWithNodeName:(id)arg1 withTotalEnergy:(double)arg2 withRootNodeID:(int)arg3 withEpsilon:(double)arg4 ;
-(char)verifyTotalCorrectionEnergyWithNodeName:(id)arg1 withTotalCorrectionEnergy:(double)arg2 withRootNodeID:(int)arg3 ;
-(char)verifyLastQualificationEventWithQualificationID:(int)arg1 withNodeName:(id)arg2 ;
-(char)verifyAggregateRootNodeEnergyWithNodeName:(id)arg1 withRootNodeID:(int)arg2 withEnergy:(double)arg3 withDate:(id)arg4 ;
-(char)verifyAggregateQualificationEnergyWithQualificationID:(int)arg1 withRootNodeID:(int)arg2 withNodeName:(id)arg3 withQualificationEnergy:(double)arg4 withDate:(id)arg5 ;
-(void)blockingClearQueues;
-(void)testDistribution1;
-(void)testDistribution2;
-(void)testDistribution3;
-(void)testDistribution4;
-(void)testDistribution5;
-(void)testCorrection1;
-(void)testCorrection2;
-(void)testCorrection3;
-(void)testCorrection4;
-(void)testQualification1;
-(void)testQualification2;
-(void)testReloadBefore1;
-(void)testReloadAfter1;
-(void)testReloadBefore2;
-(void)testReloadAfter2;
-(void)testChunk;
-(void)testPerformance;
-(void)testShortDistributionEventDuration;
-(void)testShortQualificationEventDuration;
-(void)testAddRemoveDistributionEventForward;
-(void)testCorrectionInMemory;
-(void)blockingLogGasGaugeWithTotalPower:(double)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(void)setTestNames:(NSArray *)arg1 ;
-(NSArray *)testNames;
@end
