/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@interface PLSCDynamicStoreAgent : PLAgent
+(id)defaults;
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)networkLinkQualityChanged:(SCDynamicStoreRef)arg1 withChangedKeys:(id)arg2 ;
@end
