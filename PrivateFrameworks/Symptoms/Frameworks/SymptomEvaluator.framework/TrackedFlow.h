/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TrackedFlowCounts.h>

@class NSString, NSValue, AppTracker, NSDate;

@interface TrackedFlow : TrackedFlowCounts {

	unsigned long long _snapshotRxWiFiBytes;
	unsigned long long _snapshotTxWiFiBytes;
	unsigned long long _snapshotRxPkts;
	unsigned long long _snapshotTxPkts;
	unsigned long long _snapshotRxDupeBytes;
	unsigned long long _snapshotRxOOOBytes;
	unsigned long long _snapshotTxReTxBytes;
	int _snapshotTxUnacked;
	BOOL _isNiced;
	unsigned _trafficMgtFlags;
	unsigned _trafficClassFlags;
	unsigned _ifIndex;
	int _ifType;
	NSString* _ownerKey;
	NSValue* _key;
	AppTracker* _ultimateUser;
	AppTracker* _immediateUser;
	NSDate* _startingTimestamp;
	NSDate* _endingTimestamp;
	unsigned _txUnacked;
	unsigned _flags;
	unsigned _disposition;
	double _duration;
	double _wifiDownlRate;
	double _cellDownlRate;

}

@property (assign,nonatomic) unsigned ifIndex;                        //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign,nonatomic) int ifType;                              //@synthesize ifType=_ifType - In the implementation block
@property (nonatomic,retain) NSString * ownerKey;                     //@synthesize ownerKey=_ownerKey - In the implementation block
@property (nonatomic,retain) NSValue * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) AppTracker * ultimateUser;               //@synthesize ultimateUser=_ultimateUser - In the implementation block
@property (nonatomic,retain) AppTracker * immediateUser;              //@synthesize immediateUser=_immediateUser - In the implementation block
@property (nonatomic,retain) NSDate * startingTimestamp;              //@synthesize startingTimestamp=_startingTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * endingTimestamp;                //@synthesize endingTimestamp=_endingTimestamp - In the implementation block
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned txUnacked;                      //@synthesize txUnacked=_txUnacked - In the implementation block
@property (assign,nonatomic) unsigned flags;                          //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned trafficMgtFlags;                //@synthesize trafficMgtFlags=_trafficMgtFlags - In the implementation block
@property (assign,nonatomic) unsigned trafficClassFlags;              //@synthesize trafficClassFlags=_trafficClassFlags - In the implementation block
@property (assign,nonatomic) double wifiDownlRate;                    //@synthesize wifiDownlRate=_wifiDownlRate - In the implementation block
@property (assign,nonatomic) double cellDownlRate;                    //@synthesize cellDownlRate=_cellDownlRate - In the implementation block
@property (assign,nonatomic) BOOL isNiced;                            //@synthesize isNiced=_isNiced - In the implementation block
@property (assign,nonatomic) unsigned disposition;                    //@synthesize disposition=_disposition - In the implementation block
+(void)initialize;
+(void)setPolledFlowQueue:(id)arg1 ;
+(void)removeTrackingForKey:(id)arg1 ;
+(id)startTrackingForKey:(id)arg1 ;
+(id)flowForKey:(id)arg1 ;
+(unsigned)allActiveFlowsCount;
+(void)stopPollingWifiFlows;
+(void)startPollingWifiFlows:(unsigned)arg1 ;
+(id)currentCellUsers;
+(id)getPolledFlowInfo;
+(void)_wifiStallCheckStarted;
+(void)_wifiStallCheck;
+(void)_notifyPollingEnd;
-(unsigned)disposition;
-(unsigned)ifIndex;
-(void)setIfIndex:(unsigned)arg1 ;
-(id)init;
-(id)description;
-(double)duration;
-(NSValue *)key;
-(void)setDuration:(double)arg1 ;
-(void)setKey:(NSValue *)arg1 ;
-(NSString *)ownerKey;
-(void)setDisposition:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(BOOL)inheritEarlyProperties:(id)arg1 ;
-(void)setOwnerKey:(NSString *)arg1 ;
-(void)setTxUnacked:(unsigned)arg1 ;
-(void)setEndingTimestamp:(NSDate *)arg1 ;
-(NSDate *)startingTimestamp;
-(void)inheritLateProperties:(id)arg1 ;
-(void)getOverheadIn:(unsigned long long*)arg1 out:(unsigned long long*)arg2 ;
-(void)setCellDownlRate:(double)arg1 ;
-(void)setWifiDownlRate:(double)arg1 ;
-(double)wifiDownlRate;
-(unsigned)trafficClassFlags;
-(unsigned)trafficMgtFlags;
-(AppTracker *)ultimateUser;
-(AppTracker *)immediateUser;
-(int)ifType;
-(void)setUltimateUser:(AppTracker *)arg1 ;
-(void)setImmediateUser:(AppTracker *)arg1 ;
-(unsigned)txUnacked;
-(void)setTrafficMgtFlags:(unsigned)arg1 ;
-(void)setTrafficClassFlags:(unsigned)arg1 ;
-(void)_decrementCounters;
-(void)_takeSnapshot;
-(void)_updateScoreholder:(scoreHolder*)arg1 ;
-(void)setIfType:(int)arg1 ;
-(void)setStartingTimestamp:(NSDate *)arg1 ;
-(NSDate *)endingTimestamp;
-(double)cellDownlRate;
-(BOOL)isNiced;
-(void)setIsNiced:(BOOL)arg1 ;
@end

