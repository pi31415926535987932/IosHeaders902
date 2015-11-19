/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/navd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLInUseAssertion, NSMutableArray, GEOLocationShifter, NSMutableDictionary, NSString;

@interface NavdLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	CLInUseAssertion* _inUseAssertion;
	NSMutableArray* _observers;
	char _updatingLocations;
	GEOLocationShifter* _locationShifter;
	unsigned _numberOfRetriesForLocation;
	NSMutableDictionary* _authStatusDictionary;

}

@property (assign,nonatomic) unsigned numberOfRetriesForLocation;              //@synthesize numberOfRetriesForLocation=_numberOfRetriesForLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)stopLocationUpdate;
-(void)startLocationUpdate;
-(void)updateWithDesiredAccuracy:(double)arg1 ;
-(void)_notifyObserversWithLocation:(id)arg1 error:(id)arg2 ;
-(char)_isAuthorizedForLocationWithClientBundleIdentifier:(id)arg1 ;
-(unsigned)numberOfRetriesForLocation;
-(void)_clearAuthStatusDictionary;
-(void)setNumberOfRetriesForLocation:(unsigned)arg1 ;
-(double)desiredAccuracy;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

