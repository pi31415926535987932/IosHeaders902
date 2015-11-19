/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class FBSDisplayLayoutMonitor;

@interface PLScreenStateAgent : PLAgent {

	FBSDisplayLayoutMonitor* _mainDisplayMonitor;
	FBSDisplayLayoutMonitor* _airPlayDisplayMonitor;
	FBSDisplayLayoutMonitor* _carPlayDisplayMonitor;

}

@property (retain) FBSDisplayLayoutMonitor * mainDisplayMonitor;                 //@synthesize mainDisplayMonitor=_mainDisplayMonitor - In the implementation block
@property (retain) FBSDisplayLayoutMonitor * airPlayDisplayMonitor;              //@synthesize airPlayDisplayMonitor=_airPlayDisplayMonitor - In the implementation block
@property (retain) FBSDisplayLayoutMonitor * carPlayDisplayMonitor;              //@synthesize carPlayDisplayMonitor=_carPlayDisplayMonitor - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryAggregateDefinitionForeground;
-(void)dealloc;
-(id)init;
-(void)initOperatorDependancies;
-(void)logEventForwardMainScreenState:(id)arg1 ;
-(void)logEventForwardCarScreenState:(id)arg1 ;
-(void)logEventForwardAirPlayScreenState:(id)arg1 ;
-(void)accountWithLayoutEntries:(id)arg1 ;
-(void)createCarPlayWiFiAccountingEvent:(id)arg1 ;
-(void)createAirPlayWiFiAccountingEvent:(id)arg1 ;
-(FBSDisplayLayoutMonitor *)mainDisplayMonitor;
-(void)setMainDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(FBSDisplayLayoutMonitor *)airPlayDisplayMonitor;
-(void)setAirPlayDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(FBSDisplayLayoutMonitor *)carPlayDisplayMonitor;
-(void)setCarPlayDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
@end

