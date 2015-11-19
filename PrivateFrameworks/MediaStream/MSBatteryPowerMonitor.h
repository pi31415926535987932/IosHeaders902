/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@interface MSBatteryPowerMonitor : NSObject {

	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	char _isExteralPowerConnected;
	double _currentLevel;

}

@property (assign,nonatomic) char isExternalPowerConnected;              //@synthesize isExteralPowerConnected=_isExteralPowerConnected - In the implementation block
@property (assign,nonatomic) double currentLevel;                        //@synthesize currentLevel=_currentLevel - In the implementation block
+(id)defaultMonitor;
-(void)dealloc;
-(id)init;
-(double)batteryPercentRemaining;
-(void)setCurrentLevel:(double)arg1 ;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(char)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)setExternalPowerConnected:(char)arg1 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(double)currentLevel;
-(char)isExternalPowerConnected;
@end

