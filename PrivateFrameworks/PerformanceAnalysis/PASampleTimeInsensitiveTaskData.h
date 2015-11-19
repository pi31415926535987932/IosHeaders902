/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSString, NSUUID, NSArray, NSMutableSet, PASampleTaskDataPrivateData, NSSet, PASampleTaskData;

@interface PASampleTimeInsensitiveTaskData : NSObject <PASerializable> {

	int _pid;
	NSString* _name;
	NSString* _bundleName;
	unsigned long long _uniqueId;
	NSUUID* _sharedCacheUuid;
	unsigned long long _sharedCacheOffset;
	NSString* _mainBinaryPath;
	NSArray* _imageInfos;
	int _ppid;
	int _rpid;
	unsigned _uid;
	CSArchitecture _architecture;
	char _isUnresponsive;
	double _timeOfLastResponse;
	char _usesSuddenTermination;
	char _allowsIdleExit;
	char _isDirty;
	char _workQueueExceededConstrainedThreadLimit;
	char _workQueueExceededTotalThreadLimit;
	char _isThirdParty;
	char _gatheredNonTimeCriticalAuxiliaryInfoFromLiveSystem;
	char _didExec;
	double _mostRecentTimeSamplingOnlyMainThread;
	NSMutableSet* _rootFrames;
	PASampleTaskDataPrivateData* _cachedPrivateData;
	NSSet* _cachedDonatingPids;
	PASampleTaskData* mostRecentTask;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int pid;                                                    //@synthesize pid=_pid - In the implementation block
@property (readonly) int ppid;                                                   //@synthesize ppid=_ppid - In the implementation block
@property (readonly) int rpid;                                                   //@synthesize rpid=_rpid - In the implementation block
@property (readonly) unsigned uid;                                               //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned long long uniqueId;                                //@synthesize uniqueId=_uniqueId - In the implementation block
@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) NSString * bundleName;                                      //@synthesize bundleName=_bundleName - In the implementation block
@property (readonly) CSArchitecture architecture;                                //@synthesize architecture=_architecture - In the implementation block
@property (readonly) char isUnresponsive;                                        //@synthesize isUnresponsive=_isUnresponsive - In the implementation block
@property (readonly) double timeOfLastResponse;                                  //@synthesize timeOfLastResponse=_timeOfLastResponse - In the implementation block
@property (readonly) char usesSuddenTermination;                                 //@synthesize usesSuddenTermination=_usesSuddenTermination - In the implementation block
@property (readonly) char allowsIdleExit;                                        //@synthesize allowsIdleExit=_allowsIdleExit - In the implementation block
@property (readonly) char isDirty;                                               //@synthesize isDirty=_isDirty - In the implementation block
@property (readonly) char workQueueExceededConstrainedThreadLimit;               //@synthesize workQueueExceededConstrainedThreadLimit=_workQueueExceededConstrainedThreadLimit - In the implementation block
@property (readonly) char workQueueExceededTotalThreadLimit;                     //@synthesize workQueueExceededTotalThreadLimit=_workQueueExceededTotalThreadLimit - In the implementation block
@property (readonly) char isThirdParty;                                          //@synthesize isThirdParty=_isThirdParty - In the implementation block
@property (assign) char didExec;                                                 //@synthesize didExec=_didExec - In the implementation block
@property (readonly) NSArray * imageInfos;                                       //@synthesize imageInfos=_imageInfos - In the implementation block
@property (readonly) NSUUID * mainBinaryUuid; 
@property (readonly) unsigned long long mainBinaryOffset; 
@property (readonly) NSString * mainBinaryPath;                                  //@synthesize mainBinaryPath=_mainBinaryPath - In the implementation block
@property (readonly) NSUUID * sharedCacheUuid;                                   //@synthesize sharedCacheUuid=_sharedCacheUuid - In the implementation block
@property (readonly) unsigned long long sharedCacheOffset;                       //@synthesize sharedCacheOffset=_sharedCacheOffset - In the implementation block
@property (retain) PASampleTaskDataPrivateData * cachedPrivateData;              //@synthesize cachedPrivateData=_cachedPrivateData - In the implementation block
@property (retain) NSSet * cachedDonatingPids;                                   //@synthesize cachedDonatingPids=_cachedDonatingPids - In the implementation block
@property (assign) double mostRecentTimeSamplingOnlyMainThread;                  //@synthesize mostRecentTimeSamplingOnlyMainThread=_mostRecentTimeSamplingOnlyMainThread - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSString *)name;
-(unsigned long long)uniqueId;
-(unsigned)uid;
-(NSArray *)imageInfos;
-(unsigned long long)sharedCacheOffset;
-(char)isUnresponsive;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(CSArchitecture)architecture;
-(void)setArchitecture:(CSArchitecture)arg1 ;
-(id)_initWithSerializedTimeInsensitiveTaskData:(const SCD_Struct_PA9*)arg1 ;
-(unsigned long long)mainBinaryOffset;
-(double)mostRecentTimeSamplingOnlyMainThread;
-(NSUUID *)mainBinaryUuid;
-(id)addStack:(id)arg1 ;
-(int)ppid;
-(int)rpid;
-(NSString *)mainBinaryPath;
-(double)timeOfLastResponse;
-(char)usesSuddenTermination;
-(char)allowsIdleExit;
-(char)workQueueExceededConstrainedThreadLimit;
-(char)workQueueExceededTotalThreadLimit;
-(char)isThirdParty;
-(id)rootFrames;
-(id)initWithStackshotTask:(id)arg1 ;
-(void)_gatherNonTimeCriticalAuxiliaryInfoFromLiveSystemWithSampleTimeSeriesDataStore:(id)arg1 ;
-(void)_gatherTimeCriticalAuxiliaryInfoFromLiveSystem;
-(char)correspondsToStackshotTask:(id)arg1 ;
-(PASampleTaskDataPrivateData *)cachedPrivateData;
-(void)setCachedPrivateData:(PASampleTaskDataPrivateData *)arg1 ;
-(NSSet *)cachedDonatingPids;
-(void)setCachedDonatingPids:(NSSet *)arg1 ;
-(NSUUID *)sharedCacheUuid;
-(char)didExec;
-(void)setDidExec:(char)arg1 ;
-(void)setMostRecentTimeSamplingOnlyMainThread:(double)arg1 ;
-(char)isDirty;
-(int)pid;
-(NSString *)bundleName;
@end

