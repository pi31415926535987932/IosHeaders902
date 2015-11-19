/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PCLoggingDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol PCConnectionManagerDelegate, OS_dispatch_queue, PCGrowthAlgorithm;
@class NSString, NSRunLoop, NSObject, PCPersistentTimer;

@interface PCConnectionManager : NSObject <PCLoggingDelegate, PCInterfaceMonitorDelegate> {

	int _connectionClass;
	id<PCConnectionManagerDelegate> _delegate;
	NSString* _serviceIdentifier;
	NSString* _duetIdentifier;
	int _prefsStyle;
	int _onlyAllowedStyle;
	char _onlyAllowedStyleSet;
	int _interfaceIdentifier;
	unsigned _guidancePriority;
	NSRunLoop* _delegateRunLoop;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm;
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm;
	id<PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
	PCPersistentTimer* _intervalTimer;
	PCPersistentTimer* _reconnectWakeTimer;
	PCPersistentTimer* _delayTimer;
	unsigned _powerAssertionID;
	double _onTimeKeepAliveTime;
	double _lastResumeTime;
	double _lastStopTime;
	double _lastReachableTime;
	double _lastReconnectTime;
	double _lastScheduledIntervalTime;
	double _timerGuidance;
	double _keepAliveGracePeriod;
	unsigned _reconnectIteration;
	int _timerGuidanceToken;
	int _pushIsConnectedToken;
	int _prefsChangedToken;
	double _defaultPollingInterval;
	double _pollingIntervalOverride;
	char _pollingIntervalOverrideSet;
	char _hasStarted;
	char _isRunning;
	char _inCallback;
	char _isInReconnectMode;
	char _reconnectWithKeepAliveDelay;
	char _forceManualWhenRoaming;
	char _enableNonCellularConnections;
	char _isReachable;
	char _disableEarlyFire;

}

@property (assign,nonatomic) id<PCConnectionManagerDelegate> delegate; 
@property (nonatomic,copy) NSString * duetIdentifier; 
@property (nonatomic,readonly) char isRunning; 
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) unsigned countOfGrowthActions; 
@property (assign,nonatomic) char disableEarlyFire; 
@property (assign,nonatomic) double keepAliveGracePeriod;                           //@synthesize keepAliveGracePeriod=_keepAliveGracePeriod - In the implementation block
@property (nonatomic,readonly) double pollingInterval; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggingIdentifier;                        //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(Class)growthAlgorithmClass;
+(id)_keepAliveCachePath;
+(id)intervalCacheDictionaries;
+(char)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2 ;
-(void)setDelegate:(id<PCConnectionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<PCConnectionManagerDelegate>)delegate;
-(int)currentStyle;
-(char)isRunning;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)setOnlyAllowedStyle:(int)arg1 ;
-(void)startManager;
-(void)setPollingIntervalOverride:(double)arg1 ;
-(id)_stringForStyle:(int)arg1 ;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4 ;
-(void)setDisableEarlyFire:(char)arg1 ;
-(void)setKeepAliveGracePeriod:(double)arg1 ;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(void)stopManager;
-(char)shouldClientScheduleReconnectDueToFailure;
-(void)resumeManagerWithAction:(int)arg1 ;
-(double)currentKeepAliveInterval;
-(NSString *)loggingIdentifier;
-(NSString *)duetIdentifier;
-(double)pollingInterval;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(void)interfaceManagerInHomeCountryStatusChanged:(id)arg1 ;
-(double)minimumKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(id)_stringForAction:(int)arg1 ;
-(unsigned)countOfGrowthActions;
-(id)_getCachedWWANKeepAliveInterval;
-(void)_setTimerGuidance:(double)arg1 ;
-(void)_preferencesChanged;
-(void)_loadPreferencesGeneratingEvent:(char)arg1 ;
-(id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(int)arg2 guidancePriority:(unsigned)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6 ;
-(id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(int)arg2 guidancePriority:(unsigned)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5 ;
-(void)_clearTimers;
-(void)_adjustInterfaceAssertions;
-(void)_calloutWithEvent:(int)arg1 ;
-(void)_validateActionForCurrentStyle:(int)arg1 ;
-(void)_resolveStateWithAction:(int)arg1 ;
-(id)_currentGrowthAlgorithm;
-(void)_setupTimerForPushWithKeepAliveInterval:(double)arg1 ;
-(void)_saveWWANKeepAliveInterval;
-(void)_setupTimerForPollForAdjustment:(char)arg1 ;
-(void)_setupKeepAliveForReconnect;
-(char)_isPushConnected;
-(void)_intervalTimerFired;
-(void)_takePowerAssertionWithTimeout:(double)arg1 ;
-(char)_hasBudgetRemaining;
-(void)_releasePowerAssertion;
-(void)_delayTimerFired;
-(void)_clearTimersReleasingPowerAssertion:(char)arg1 ;
-(id)_stringForEvent:(int)arg1 ;
-(void)_callDelegateWithEvent:(id)arg1 ;
-(void)_adjustPollTimerIfNecessary;
-(void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(void*)arg3 ;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3 ;
-(void)setDuetIdentifier:(NSString *)arg1 ;
-(void)stopAndResetManager;
-(void)cancelPollingIntervalOverride;
-(void)setEnableNonCellularConnections:(char)arg1 ;
-(char)disableEarlyFire;
-(void)logAtLevel:(int)arg1 format:(id)arg2 ;
-(double)keepAliveGracePeriod;
-(void)log:(id)arg1 ;
@end

