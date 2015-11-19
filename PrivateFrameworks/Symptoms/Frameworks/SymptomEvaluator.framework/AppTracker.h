/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString, NSDate, TrackerPolicy;

@interface AppTracker : NSObject <ManagedEventInfoProtocol> {

	NSString* _userName;
	NSDate* _timestamp;
	int _flowsForSelf;
	int _flowsForOthers;
	TrackerPolicy* _specificPolicy;
	unsigned _eversetClassFlags;

}

@property (retain) NSString * userName;                             //@synthesize userName=_userName - In the implementation block
@property (retain) NSDate * timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) int flowsForSelf;                                //@synthesize flowsForSelf=_flowsForSelf - In the implementation block
@property (assign) int flowsForOthers;                              //@synthesize flowsForOthers=_flowsForOthers - In the implementation block
@property (retain) TrackerPolicy * specificPolicy;                  //@synthesize specificPolicy=_specificPolicy - In the implementation block
@property (assign) unsigned eversetClassFlags;                      //@synthesize eversetClassFlags=_eversetClassFlags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(id)configureClass:(id)arg1 ;
+(void)setAppTrackerVerbose:(unsigned)arg1 ;
+(void)setWifiNeverNoteList:(id)arg1 ;
+(void)setWifiAlwaysNoteList:(id)arg1 ;
+(void)setWifiDaemonCheckList:(id)arg1 ;
+(void)getWifiNetworkActivity:(/*^block*/id)arg1 ;
+(void)beginTrafficClassFlowSnapshot;
+(void)endTrafficClassFlowSnapshot:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)setInternalQueue:(id)arg1 ;
+(void)setTrackCellular:(BOOL)arg1 ;
+(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 ;
+(void)noteFlow:(id)arg1 withOwner:(id)arg2 ;
+(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
+(void)pruneCache:(id)arg1 ;
+(void)configureCellPolicies:(id)arg1 ;
+(void)configureWifiPolicies:(id)arg1 ;
+(void)noteFlowEnding:(id)arg1 ;
+(void)resetTrafficClassFlowSnapshot;
-(NSString *)userName;
-(NSString *)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeFlow:(id)arg1 ;
-(void)removeImmediateFlow:(id)arg1 ;
-(TrackerPolicy *)specificPolicy;
-(unsigned)eversetClassFlags;
-(void)setEversetClassFlags:(unsigned)arg1 ;
-(void)adjustImmediateFlowLinkages:(id)arg1 ;
-(void)adjustFlowLinkages:(id)arg1 ;
-(int)flowsForSelf;
-(int)flowsForOthers;
-(void)setSpecificPolicy:(TrackerPolicy *)arg1 ;
-(void)addFlow:(id)arg1 ;
-(void)addImmediateFlow:(id)arg1 ;
-(void)setFlowsForSelf:(int)arg1 ;
-(void)setFlowsForOthers:(int)arg1 ;
@end

