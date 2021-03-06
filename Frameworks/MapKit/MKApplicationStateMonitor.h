/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	char _inBackground;
	char _active;
	unsigned _observerCount;
	char _forceBackboardServicesMonitoring;

}

@property (assign,nonatomic) char forceBackboardServicesMonitoring;                  //@synthesize forceBackboardServicesMonitoring=_forceBackboardServicesMonitoring - In the implementation block
@property (getter=isInBackground,nonatomic,readonly) char inBackground;              //@synthesize inBackground=_inBackground - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active;                          //@synthesize active=_active - In the implementation block
+(id)sharedInstance;
-(char)forceBackboardServicesMonitoring;
-(void)startObserving;
-(void)_sceneOcclusionChanged:(id)arg1 ;
-(void)_becomeActive;
-(void)_enterBackground;
-(void)setForceBackboardServicesMonitoring:(char)arg1 ;
-(char)isInBackground;
-(void)_exitBackground;
-(void)_resignActive;
-(void)dealloc;
-(char)isActive;
-(void)stopObserving;
@end

