/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:28:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBBundleInfo.h>

@protocol OS_dispatch_queue;
@class NSObject, NSProgress, NSMutableSet, LSApplicationProxy;

@interface FBApplicationPlaceholder : FBBundleInfo {

	NSObject*<OS_dispatch_queue> _queue;
	char _queue_isNewsstand;
	char _queue_isRestricted;
	char _queue_installType;
	double _queue_cachedPercentComplete;
	NSProgress* _queue_progress;
	NSMutableSet* _queue_observers;

}

@property (getter=isNewsstand,nonatomic,readonly) char newsstand; 
@property (getter=isRestricted,nonatomic,readonly) char restricted; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) unsigned installType; 
@property (nonatomic,readonly) unsigned installState; 
@property (nonatomic,readonly) unsigned installPhase; 
@property (getter=isCancellable,nonatomic,readonly) char cancellable; 
@property (getter=isPausable,nonatomic,readonly) char pausable; 
@property (setter=_setProxy:,getter=_proxy,nonatomic,retain) LSApplicationProxy * proxy; 
-(void)prioritize;
-(char)isCancellable;
-(char)isPausable;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(double)percentComplete;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(void)_setProxy:(id)arg1 ;
-(void)_noteChangedSignificantly;
-(id)_proxy;
-(void)_setProxy:(id)arg1 force:(char)arg2 ;
-(char)_queue_setProgress:(id)arg1 ;
-(double)_normalizedProgress:(double)arg1 ;
-(unsigned)installState;
-(unsigned)installPhase;
-(void)_queue_startObservingProgress:(id)arg1 ;
-(void)_queue_stopObservingProgress:(id)arg1 ;
-(void)_dispatchToObservers:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_queue_progressChanged;
-(id)_queue_observers;
-(void)_sendToObserversInstallStateDidChange:(id)arg1 ;
-(void)_sendToObserversInstallPhaseDidChange:(id)arg1 ;
-(void)_sendToObserversPercentCompleteDidChange:(id)arg1 ;
-(void)_sendToObserversCancellabilityDidChange:(id)arg1 ;
-(void)_sendToObserversPausabilityDidChange:(id)arg1 ;
-(void)_sendToObserversPlaceholderDidChangeSignificantly:(id)arg1 ;
-(id)_iconDictionary;
-(unsigned)installType;
-(char)isRestricted;
-(char)isNewsstand;
@end

