/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDataCollector.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSObject, HKObjectType, HDDeviceEntity, HDSourceEntity, NSString;

@interface HDDataCollector : NSObject <HDHealthDataCollector> {

	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	HKObjectType* _observedType;
	HDDeviceEntity* _deviceEntity;
	int _state;
	double _collectionInterval;
	int _failureRetryCount;
	char _disabled;
	HDSourceEntity* _sourceEntity;

}

@property (readonly) HDSourceEntity * sourceEntity;                 //@synthesize sourceEntity=_sourceEntity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char disabled; 
+(id)domain;
+(Class)sensorDatumClass;
+(id)observedType;
+(id)secondaryContextClasses;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(HDSourceEntity *)sourceEntity;
-(void)_performAsync:(/*^block*/id)arg1 ;
-(void)_performSync:(/*^block*/id)arg1 ;
-(void)stopPerformingUpdatesWithErrorEncountered:(char)arg1 ;
-(char)_persistContext:(id)arg1 forKey:(id)arg2 ;
-(id)_retrieveContextForKey:(id)arg1 ;
-(void)_queue_resetFailureRetryCounter;
-(char)_queue_disabled;
-(void)_queue_beginStreamingIfNecessary;
-(id)deviceEntity;
-(char)_queue_streaming;
-(void)_queue_transitionToStreaming;
-(void)_queue_beginStreaming;
-(void)_queue_retryFromFailure;
-(void)_queue_updateCollectionInterval:(double)arg1 ;
-(void)_queue_transitionToIdle;
-(char)_queue_shouldRetryFromFailure;
-(void)_queue_incrementFailureRetryCounter;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2 ;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2 ;
-(void)collectionStoppedForType:(id)arg1 ;
-(void)updateHistoricalData;
-(id)dataCollectorDiagnosticDescription;
-(char)_persistPrimaryContext:(id)arg1 ;
-(char)_persistSecondaryContext:(id)arg1 ;
-(id)_retrievePrimaryContext;
-(id)_retrieveSecondaryContext;
-(id)_contextFromSensorDatum:(id)arg1 ;
-(id)_contextFromDictionary:(id)arg1 ;
-(id)_sensorDatumFromContext:(id)arg1 ;
-(id)_dictionaryFromContext:(id)arg1 ;
-(void)_queue_receivedData;
-(double)collectionInterval;
-(void)setCollectionInterval:(double)arg1 ;
-(id)_queue_deviceEntity;
-(void)_queue_transitionToFailure;
@end

