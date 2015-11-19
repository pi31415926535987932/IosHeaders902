/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/TrackedFlowCounts.h>

@interface IntervalTrackedFlowCounts : TrackedFlowCounts {

	unsigned long long _timestampSeconds;
	unsigned long long _numBlemishedFlows;
	unsigned long long _numUnblemishedFlows;

}

@property (assign,nonatomic) unsigned long long timestampSeconds;                 //@synthesize timestampSeconds=_timestampSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long numBlemishedFlows;                //@synthesize numBlemishedFlows=_numBlemishedFlows - In the implementation block
@property (assign,nonatomic) unsigned long long numUnblemishedFlows;              //@synthesize numUnblemishedFlows=_numUnblemishedFlows - In the implementation block
-(id)description;
-(void)addFlowCounts:(id)arg1 ;
-(void)subtractFlowCounts:(id)arg1 ;
-(unsigned long long)numBlemishedFlows;
-(unsigned long long)numUnblemishedFlows;
-(void)addIntervalFlowCounts:(id)arg1 ;
-(void)subtractIntervalFlowCounts:(id)arg1 ;
-(unsigned long long)timestampSeconds;
-(void)setTimestampSeconds:(unsigned long long)arg1 ;
-(void)setNumBlemishedFlows:(unsigned long long)arg1 ;
-(void)setNumUnblemishedFlows:(unsigned long long)arg1 ;
@end

