/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MKLocationProvider.h>

@protocol MKLocationProviderDelegate;
@class NSBundle, NSString, CLLocationManager, NSLock;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {

	CLLocationManager* _clLocationManager;
	id<MKLocationProviderDelegate> _delegate;
	char _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	char _waitingForAuthorization;
	char _hasQueriedAuthorization;
	NSLock* _authorizationLock;
	char _alternate;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) int activityType; 
@property (nonatomic,readonly) char usesCLMapCorrection; 
@property (nonatomic,readonly) char isSimulation; 
@property (nonatomic,readonly) char isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
-(void)_updateAuthorizationStatus;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(double)timeScale;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(char)isTracePlayer;
-(void)dismissHeadingCalibrationDisplay;
-(void)_resetForNewEffectiveBundle;
-(char)isSimulation;
-(CLLocationManager *)_clLocationManager;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)stopUpdatingVehicleSpeed;
-(char)matchInfoEnabled;
-(void)setActivityType:(int)arg1 ;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(int)headingOrientation;
-(double)desiredAccuracy;
-(NSString *)effectiveBundleIdentifier;
-(void)startUpdatingVehicleHeading;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(void)_createCLLocationManager;
-(char)isLocationServicesPreferencesDialogEnabled;
-(double)distanceFilter;
-(void)startUpdatingVehicleSpeed;
-(id)authorizationRequestBlock;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(void)stopUpdatingVehicleHeading;
-(double)expectedGpsUpdateInterval;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(char)usesCLMapCorrection;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)requestWhenInUseAuthorization;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MKLocationProviderDelegate>)delegate;
-(int)activityType;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(char)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

