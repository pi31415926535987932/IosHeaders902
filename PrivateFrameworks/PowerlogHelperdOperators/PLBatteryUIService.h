/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogHelperdOperators/PowerlogHelperdOperators-Structs.h>
#import <PowerlogLiteOperators/PLBatteryBreakdownService.h>

@class PLXPCResponderOperatorComposition;

@interface PLBatteryUIService : PLBatteryBreakdownService {

	PLXPCResponderOperatorComposition* _batteryBreakdownResponder;
	PLXPCResponderOperatorComposition* _modelsResponder;

}

@property (retain) PLXPCResponderOperatorComposition * batteryBreakdownResponder;              //@synthesize batteryBreakdownResponder=_batteryBreakdownResponder - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * modelsResponder;                        //@synthesize modelsResponder=_modelsResponder - In the implementation block
+(void)load;
-(id)init;
-(id)modelsWithPayload:(id)arg1 ;
-(void)setModelsResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)incrementAggdKey;
-(id)dateAndBatteryLevelPointsInRange:(PLTimeIntervalRange)arg1 ;
-(void)testUIQuery;
-(PLXPCResponderOperatorComposition *)modelsResponder;
-(void)initOperatorDependancies;
-(id)batteryBreakdownWithPayload:(id)arg1 ;
-(void)setBatteryBreakdownResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(PLXPCResponderOperatorComposition *)batteryBreakdownResponder;
@end

