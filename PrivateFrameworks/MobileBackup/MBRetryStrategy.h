/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBEngine;

@interface MBRetryStrategy : NSObject {

	MBEngine* _engine;
	double _lastAttemptStartTime;
	double _consecutiveRetryStartTime;
	unsigned _totalRetryCount;
	unsigned _consecutiveRetryCount;
	unsigned _softConsecutiveRetryLimit;
	unsigned _hardConsecutiveRetryLimit;
	double _resetConsecutiveRetriesTimeInterval;
	double _forcedRetryTimeInterval;
	double _networkRetryTimeInterval;
	double _maximumServiceUnavailableRetryInterval;

}

@property (assign,nonatomic) unsigned consecutiveRetryCount;                             //@synthesize consecutiveRetryCount=_consecutiveRetryCount - In the implementation block
@property (assign,nonatomic) unsigned softConsecutiveRetryLimit;                         //@synthesize softConsecutiveRetryLimit=_softConsecutiveRetryLimit - In the implementation block
@property (assign,nonatomic) unsigned hardConsecutiveRetryLimit;                         //@synthesize hardConsecutiveRetryLimit=_hardConsecutiveRetryLimit - In the implementation block
@property (assign,nonatomic) double resetConsecutiveRetriesTimeInterval;                 //@synthesize resetConsecutiveRetriesTimeInterval=_resetConsecutiveRetriesTimeInterval - In the implementation block
@property (assign,nonatomic) double forcedRetryTimeInterval;                             //@synthesize forcedRetryTimeInterval=_forcedRetryTimeInterval - In the implementation block
@property (assign,nonatomic) double networkRetryTimeInterval;                            //@synthesize networkRetryTimeInterval=_networkRetryTimeInterval - In the implementation block
@property (assign,nonatomic) double maximumServiceUnavailableRetryInterval;              //@synthesize maximumServiceUnavailableRetryInterval=_maximumServiceUnavailableRetryInterval - In the implementation block
-(char)canRetryAfterError:(id)arg1 ;
-(void)setSoftConsecutiveRetryLimit:(unsigned)arg1 ;
-(void)setHardConsecutiveRetryLimit:(unsigned)arg1 ;
-(void)setResetConsecutiveRetriesTimeInterval:(double)arg1 ;
-(void)setForcedRetryTimeInterval:(double)arg1 ;
-(void)setNetworkRetryTimeInterval:(double)arg1 ;
-(void)setMaximumServiceUnavailableRetryInterval:(double)arg1 ;
-(void)setConsecutiveRetryCount:(unsigned)arg1 ;
-(double)maximumServiceUnavailableRetryInterval;
-(unsigned)consecutiveRetryCount;
-(unsigned)hardConsecutiveRetryLimit;
-(double)networkRetryTimeInterval;
-(double)resetConsecutiveRetriesTimeInterval;
-(double)forcedRetryTimeInterval;
-(unsigned)softConsecutiveRetryLimit;
-(char)shouldRetryAfterError:(id)arg1 hard:(char)arg2 ;
-(char)wouldRetry;
-(id)initWithEngine:(id)arg1 ;
@end

