/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLTimer;

@interface PLConfigAgent : PLAgent {

	PLTimer* _timedTrigger;

}

@property (retain) PLTimer * timedTrigger;              //@synthesize timedTrigger=_timedTrigger - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventNoneDefinitionConfig;
+(id)entryEventNoneDefinitionPairedDeviceConfig;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)log;
-(id)buildVersion;
-(id)deviceName;
-(id)hardwareModel;
-(void)initOperatorDependancies;
-(void)logEventNoneConfig;
-(void)logEventNonePairedDeviceConfig;
-(id)crashReporterKey;
-(id)bootArgs;
-(int)autolockTime;
-(id)baseband;
-(id)basebandFirmware;
-(char)noWatchdogs;
-(char)disableCABlanking;
-(id)logAutomatedDeviceGroup;
-(id)seedGroup;
-(PLTimer *)timedTrigger;
-(void)setTimedTrigger:(PLTimer *)arg1 ;
@end

