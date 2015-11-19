/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, PAGenealogyTracker, PAMountStatusTracker, PAWSUpdateDataStore, PABinaryLocator, PASymbolDataStore, NSMutableSet, PASampleTimeInsensitiveTaskData, NSString, NSArray;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {

	NSMutableDictionary* _timeInsensitiveTaskDataDict;
	NSMutableArray* _timeSensitiveSampleDataArray;
	double _startMachTimestamp;
	double _endMachTimestamp;
	double _startWallTimestamp;
	double _endWallTimestamp;
	char _sanitizePaths;
	char _omitThirdPartyProcessStacks;
	char _omitSensitiveStrings;
	NSMutableArray* _fanSpeedArray;
	PAGenealogyTracker* _genealogyTracker;
	PAMountStatusTracker* _mountStatusTracker;
	PAWSUpdateDataStore* _wsDataStore;
	PABinaryLocator* _binaryLocator;
	PASymbolDataStore* _symbolDataStore;
	NSMutableDictionary* _symbolHandleCache;
	NSMutableDictionary* _oldSymbolHandleCache;
	NSMutableSet* _pidsToTrack;
	char _expectsLiveProcesses;
	char _shouldPreemptivelyCacheSymbolicators;
	char _shouldSymbolicate;
	char _sampleOnlyMainThreads;
	char _shouldGatherKextStat;
	double _timeWhenTransitionedToSamplingAllProcesses;
	int _targetProcessId;
	PASampleTimeInsensitiveTaskData* _targetTask;
	unsigned long long _targetThreadId;
	unsigned _cpuPercent;
	unsigned _cpuDuration;
	unsigned _wakeupsPerSec;
	unsigned _wakeupsDuration;
	NSString* _event;
	NSString* _eventNote;
	NSString* _signature;
	double _extraDuration;
	NSString* _durationNote;
	NSString* _stepsNote;
	double _attemptedSamplingInterval;
	NSString* _kextStat;
	NSString* _kernelVersion;
	NSString* _osProductName;
	NSString* _osProductVersion;
	NSString* _osBuildVersion;
	NSString* _machineArchitecture;
	unsigned _workQueueSoftThreadLimit;
	unsigned _workQueueHardThreadLimit;
	NSString* _hardwareModel;
	unsigned _numActiveCPUs;
	NSString* _targetProcessBundleVersion;
	NSString* _targetProcessBundleShortVersion;
	NSString* _targetProcessBundleBuildVersion;
	NSString* _targetProcessBundleProjectName;
	NSString* _targetProcessBundleSourceVersion;
	NSString* _targetProcessCommerceAppID;
	NSString* _targetProcessCommerceExternalID;

}

@property (readonly) double startMachTimestamp;                                    //@synthesize startMachTimestamp=_startMachTimestamp - In the implementation block
@property (readonly) double endMachTimestamp;                                      //@synthesize endMachTimestamp=_endMachTimestamp - In the implementation block
@property (readonly) double startWallTimestamp;                                    //@synthesize startWallTimestamp=_startWallTimestamp - In the implementation block
@property (readonly) double endWallTimestamp;                                      //@synthesize endWallTimestamp=_endWallTimestamp - In the implementation block
@property (readonly) unsigned long long numSamples; 
@property (readonly) NSArray * samples;                                            //@synthesize timeSensitiveSampleDataArray=_timeSensitiveSampleDataArray - In the implementation block
@property (readonly) PAMountStatusTracker * mountStatusTracker;                    //@synthesize mountStatusTracker=_mountStatusTracker - In the implementation block
@property (readonly) PAGenealogyTracker * genealogyTracker;                        //@synthesize genealogyTracker=_genealogyTracker - In the implementation block
@property (assign) char expectsLiveProcesses;                                      //@synthesize expectsLiveProcesses=_expectsLiveProcesses - In the implementation block
@property (assign) char shouldPreemptivelyCacheSymbolicators;                      //@synthesize shouldPreemptivelyCacheSymbolicators=_shouldPreemptivelyCacheSymbolicators - In the implementation block
@property (assign) char shouldSymbolicate; 
@property (assign) char shouldUseDsymForUUIDToFindBinaries; 
@property (assign) char sampleOnlyMainThreads;                                     //@synthesize sampleOnlyMainThreads=_sampleOnlyMainThreads - In the implementation block
@property (assign) double timeWhenTransitionedToSamplingAllProcesses;              //@synthesize timeWhenTransitionedToSamplingAllProcesses=_timeWhenTransitionedToSamplingAllProcesses - In the implementation block
@property (assign) char sanitizePaths;                                             //@synthesize sanitizePaths=_sanitizePaths - In the implementation block
@property (assign) char omitThirdPartyProcessStacks;                               //@synthesize omitThirdPartyProcessStacks=_omitThirdPartyProcessStacks - In the implementation block
@property (assign) char omitSensitiveStrings;                                      //@synthesize omitSensitiveStrings=_omitSensitiveStrings - In the implementation block
@property (assign) char shouldGatherKextStat;                                      //@synthesize shouldGatherKextStat=_shouldGatherKextStat - In the implementation block
@property (readonly) NSString * kextStat;                                          //@synthesize kextStat=_kextStat - In the implementation block
@property (readonly) NSString * kernelVersion;                                     //@synthesize kernelVersion=_kernelVersion - In the implementation block
@property (readonly) NSString * osProductName;                                     //@synthesize osProductName=_osProductName - In the implementation block
@property (readonly) NSString * osProductVersion;                                  //@synthesize osProductVersion=_osProductVersion - In the implementation block
@property (readonly) NSString * osBuildVersion;                                    //@synthesize osBuildVersion=_osBuildVersion - In the implementation block
@property (readonly) NSString * machineArchitecture;                               //@synthesize machineArchitecture=_machineArchitecture - In the implementation block
@property (readonly) unsigned workQueueSoftThreadLimit;                            //@synthesize workQueueSoftThreadLimit=_workQueueSoftThreadLimit - In the implementation block
@property (readonly) unsigned workQueueHardThreadLimit;                            //@synthesize workQueueHardThreadLimit=_workQueueHardThreadLimit - In the implementation block
@property (readonly) NSString * hardwareModel;                                     //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (readonly) unsigned numActiveCPUs;                                       //@synthesize numActiveCPUs=_numActiveCPUs - In the implementation block
@property (assign) int targetProcessId;                                            //@synthesize targetProcessId=_targetProcessId - In the implementation block
@property (assign) unsigned long long targetThreadId;                              //@synthesize targetThreadId=_targetThreadId - In the implementation block
@property (assign) unsigned cpuPercent;                                            //@synthesize cpuPercent=_cpuPercent - In the implementation block
@property (assign) unsigned cpuDuration;                                           //@synthesize cpuDuration=_cpuDuration - In the implementation block
@property (assign) unsigned wakeupsPerSec;                                         //@synthesize wakeupsPerSec=_wakeupsPerSec - In the implementation block
@property (assign) unsigned wakeupsDuration;                                       //@synthesize wakeupsDuration=_wakeupsDuration - In the implementation block
@property (copy) NSString * event;                                                 //@synthesize event=_event - In the implementation block
@property (copy) NSString * eventNote;                                             //@synthesize eventNote=_eventNote - In the implementation block
@property (copy) NSString * signature;                                             //@synthesize signature=_signature - In the implementation block
@property (assign) double extraDuration;                                           //@synthesize extraDuration=_extraDuration - In the implementation block
@property (copy) NSString * durationNote;                                          //@synthesize durationNote=_durationNote - In the implementation block
@property (copy) NSString * stepsNote;                                             //@synthesize stepsNote=_stepsNote - In the implementation block
@property (assign) double attemptedSamplingInterval;                               //@synthesize attemptedSamplingInterval=_attemptedSamplingInterval - In the implementation block
@property (readonly) NSString * targetProcessName; 
@property (readonly) NSString * targetProcessAbsolutePath; 
@property (readonly) NSString * targetProcessBundleName; 
@property (readonly) NSString * targetProcessBundleVersion;                        //@synthesize targetProcessBundleVersion=_targetProcessBundleVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleShortVersion;                   //@synthesize targetProcessBundleShortVersion=_targetProcessBundleShortVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleBuildVersion;                   //@synthesize targetProcessBundleBuildVersion=_targetProcessBundleBuildVersion - In the implementation block
@property (readonly) NSString * targetProcessBundleProjectName;                    //@synthesize targetProcessBundleProjectName=_targetProcessBundleProjectName - In the implementation block
@property (readonly) NSString * targetProcessBundleSourceVersion;                  //@synthesize targetProcessBundleSourceVersion=_targetProcessBundleSourceVersion - In the implementation block
@property (readonly) NSString * targetProcessCommerceAppID;                        //@synthesize targetProcessCommerceAppID=_targetProcessCommerceAppID - In the implementation block
@property (readonly) NSString * targetProcessCommerceExternalID;                   //@synthesize targetProcessCommerceExternalID=_targetProcessCommerceExternalID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)event;
-(void)setEvent:(NSString *)arg1 ;
-(NSArray *)samples;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)signature;
-(NSString *)hardwareModel;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2 ;
-(char)shouldSymbolicate;
-(void)setShouldSymbolicate:(char)arg1 ;
-(char)shouldUseDsymForUUIDToFindBinaries;
-(void)setShouldUseDsymForUUIDToFindBinaries:(char)arg1 ;
-(void)cacheSymbolInformationForAllSymbols;
-(NSString *)osProductName;
-(NSString *)osProductVersion;
-(NSString *)osBuildVersion;
-(NSString *)machineArchitecture;
-(char)sanitizePaths;
-(id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2 ;
-(NSString *)kernelVersion;
-(unsigned)workQueueSoftThreadLimit;
-(unsigned)workQueueHardThreadLimit;
-(PAGenealogyTracker *)genealogyTracker;
-(char)omitThirdPartyProcessStacks;
-(int)targetProcessId;
-(void)flushCachedSymbolicatorForTask:(id)arg1 ;
-(unsigned long long)numSamples;
-(double)attemptedSamplingInterval;
-(PAMountStatusTracker *)mountStatusTracker;
-(id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3 ;
-(id)newArrayOfSamplesForSampleIndexRangeStart:(unsigned)arg1 end:(unsigned)arg2 ;
-(char)hasSampleOnOrAfterTime:(double)arg1 returningFirstIndex:(unsigned*)arg2 ;
-(id)newArrayOfSamplesForTimeRangeWithMachStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(double)timeWhenTransitionedToSamplingAllProcesses;
-(NSString *)targetProcessBundleShortVersion;
-(NSString *)targetProcessBundleVersion;
-(NSString *)targetProcessBundleBuildVersion;
-(NSString *)targetProcessBundleProjectName;
-(NSString *)targetProcessBundleSourceVersion;
-(NSString *)targetProcessCommerceAppID;
-(NSString *)targetProcessCommerceExternalID;
-(NSString *)eventNote;
-(unsigned long long)targetThreadId;
-(unsigned)cpuPercent;
-(unsigned)cpuDuration;
-(unsigned)wakeupsPerSec;
-(unsigned)wakeupsDuration;
-(double)extraDuration;
-(NSString *)durationNote;
-(NSString *)stepsNote;
-(unsigned)numActiveCPUs;
-(id)fanSpeedClosestToMachTime:(double)arg1 ;
-(NSString *)kextStat;
-(void)printFrameRateReportWithStartSampleIndex:(unsigned)arg1 andEndIndex:(unsigned)arg2 andStartDisplayIndex:(unsigned)arg3 toStream:(_sFILE*)arg4 ;
-(id)newArrayOfSamplesForTimeRangeWithWallClockStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(id)copySymbolicationInfoForPid:(int)arg1 ;
-(id)targetTask;
-(void)gatherKextStat;
-(void)gatherKernelVersion;
-(void)gatherOsVersions;
-(void)gatherMachineArchitecture;
-(void)gatherWorkQueueSoftThreadLimit;
-(void)gatherWorkQueueHardThreadLimit;
-(void)gatherHardwareModel;
-(void)gatherNumActiveCPUs;
-(void)_asynchronouslyCacheSymbolicatorForPid:(int)arg1 ;
-(id)timeInsensitiveTaskDataForStackshotTask:(id)arg1 ;
-(void)addStackshot:(id)arg1 ;
-(NSString *)targetProcessName;
-(NSString *)targetProcessAbsolutePath;
-(NSString *)targetProcessBundleName;
-(void)gatherOccasionalLiveDataForMachTime:(double)arg1 ;
-(void)startingSamplingLiveSystem;
-(void)doneSamplingLiveSystem;
-(void)gatherNonTimeCriticalDataFromLiveSystem;
-(id)cachedSymbolHandleForAddress:(unsigned long long)arg1 inPid:(int)arg2 ;
-(void)flushAllSymbolicators;
-(void)flushAllCachedSymbolInformation;
-(void)addPidToSampledPids:(int)arg1 ;
-(void)addPidsWithNameToSampledPids:(id)arg1 ;
-(void)sampleTrackedPidsNow;
-(double)startMachTimestamp;
-(double)endMachTimestamp;
-(double)startWallTimestamp;
-(double)endWallTimestamp;
-(void)setAttemptedSamplingInterval:(double)arg1 ;
-(void)setSanitizePaths:(char)arg1 ;
-(void)setOmitThirdPartyProcessStacks:(char)arg1 ;
-(char)omitSensitiveStrings;
-(void)setOmitSensitiveStrings:(char)arg1 ;
-(void)setTargetProcessId:(int)arg1 ;
-(void)setTargetThreadId:(unsigned long long)arg1 ;
-(void)setCpuPercent:(unsigned)arg1 ;
-(void)setCpuDuration:(unsigned)arg1 ;
-(void)setWakeupsPerSec:(unsigned)arg1 ;
-(void)setWakeupsDuration:(unsigned)arg1 ;
-(void)setEventNote:(NSString *)arg1 ;
-(void)setExtraDuration:(double)arg1 ;
-(void)setDurationNote:(NSString *)arg1 ;
-(void)setStepsNote:(NSString *)arg1 ;
-(char)shouldPreemptivelyCacheSymbolicators;
-(void)setShouldPreemptivelyCacheSymbolicators:(char)arg1 ;
-(char)expectsLiveProcesses;
-(void)setExpectsLiveProcesses:(char)arg1 ;
-(char)sampleOnlyMainThreads;
-(void)setSampleOnlyMainThreads:(char)arg1 ;
-(char)shouldGatherKextStat;
-(void)setShouldGatherKextStat:(char)arg1 ;
-(void)setTimeWhenTransitionedToSamplingAllProcesses:(double)arg1 ;
@end
