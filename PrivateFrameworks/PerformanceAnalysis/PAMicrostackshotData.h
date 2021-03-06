/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@interface PAMicrostackshotData : NSObject {

	unsigned _cpuNumber;
	unsigned long long _timeInUsUnix;
	unsigned char _microSnapshotFlags;
	unsigned short _systemStatsFlags;

}

@property (readonly) unsigned cpuNumber;                                  //@synthesize cpuNumber=_cpuNumber - In the implementation block
@property (readonly) unsigned long long timestampInUsUnix;                //@synthesize timeInUsUnix=_timeInUsUnix - In the implementation block
@property (readonly) unsigned char microSnapshotFlags;                    //@synthesize microSnapshotFlags=_microSnapshotFlags - In the implementation block
@property (readonly) char didInterruptUserMode; 
@property (readonly) char isInterruptRecord; 
@property (readonly) char isTimerArmingRecord; 
@property (readonly) unsigned short systemStatsFlags;                     //@synthesize systemStatsFlags=_systemStatsFlags - In the implementation block
@property (readonly) char isUserIdle; 
@property (readonly) char isOnBattery; 
@property (readonly) char hasValidOnBatteryAndUserIdleFlags; 
@property (readonly) char didInterruptKernelMode; 
-(unsigned)powerstatsFlags;
-(unsigned long)bytesUsedInBuffer;
-(char)isUserIdle;
-(char)isOnBattery;
-(char)didInterruptKernelMode;
-(char)hasValidOnBatteryAndUserIdleFlags;
-(char)didInterruptUserMode;
-(char)isInterruptRecord;
-(char)isTimerArmingRecord;
-(id)initWithMicrosnapshot:(const micro_snapshot*)arg1 withRemainingBytes:(unsigned long)arg2 ;
-(unsigned)cpuNumber;
-(unsigned long long)timestampInUsUnix;
-(unsigned char)microSnapshotFlags;
-(unsigned short)systemStatsFlags;
@end

