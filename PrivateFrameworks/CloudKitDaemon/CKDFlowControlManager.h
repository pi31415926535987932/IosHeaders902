/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKDFlowControlManager : NSObject {

	unsigned _defaultBudget;
	double _defaultRegeneration;
	NSMutableDictionary* _operationFlowControls;
	double _maximumThrottleTime;

}

@property (assign) double maximumThrottleTime;                                         //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * operationFlowControls;              //@synthesize operationFlowControls=_operationFlowControls - In the implementation block
@property (assign,nonatomic) unsigned defaultBudget; 
@property (assign,nonatomic) double defaultRegeneration; 
-(id)description;
-(id)statusReport;
-(id)CKPropertiesDescription;
-(id)initWithDefaultBudget:(unsigned)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3 ;
-(void)setDefaultBudget:(unsigned)arg1 ;
-(void)setDefaultRegeneration:(double)arg1 ;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(unsigned)defaultBudget;
-(double)defaultRegeneration;
-(double)maximumThrottleTime;
-(char)checkFlowControlIsLimited:(id)arg1 ;
-(double)secondsUntilFlowControlNotLimited:(id)arg1 ;
-(void)updateFlowControlWithLocalErrorForOperation:(id)arg1 ;
-(void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned)arg2 ;
-(double)currentBudget:(id)arg1 ;
-(unsigned)currentBudgetCap:(id)arg1 ;
-(double)currentRegeneration:(id)arg1 ;
-(void)updateFlowControl:(id)arg1 withCost:(unsigned)arg2 ;
-(void)setOperationFlowControls:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)operationFlowControls;
-(id)_flowControlForOperation:(id)arg1 createIfNecessary:(char)arg2 ;
-(id)_flowControlForOperation:(id)arg1 ;
@end

