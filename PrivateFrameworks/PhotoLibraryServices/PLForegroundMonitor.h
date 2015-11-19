/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSMutableSet, NSMapTable;

@interface PLForegroundMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _interestingApplications;
	NSMutableSet* _foregroundApplications;
	NSMapTable* _observers;
	char _isMonitoringApplicationStates;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)addForegroundObserver:(id)arg1 context:(id)arg2 ;
-(void)removeForegroundObserver:(id)arg1 context:(id)arg2 ;
-(void)startWatchingApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_applicationDidMoveToForegroundLocked:(id)arg1 ;
-(void)_startMonitoringApplicationStatesLocked;
-(void)_applicationDidMoveToBackgroundLocked:(id)arg1 ;
-(void)_stopMonitoringApplicationStatesLocked;
-(void)_applicationStateDidChange:(id)arg1 ;
-(void)stopWatchingApplicationWithBundleIdentifier:(id)arg1 ;
@end

