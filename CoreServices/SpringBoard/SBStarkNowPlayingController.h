/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoard/SBStarkNowPlayingServiceDelegate.h>

@class _UIAsyncInvocation, SBStarkNowPlayingService, NSMutableArray, SBSUICarDisplayNowPlayingStateContext, NSString;

@interface SBStarkNowPlayingController : UIViewController <SBStarkNowPlayingServiceDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	SBStarkNowPlayingService* _service;
	unsigned _reactivateAttempt;
	double _lastReactivationAttempt;
	NSMutableArray* _notifyBlocks;
	SBSUICarDisplayNowPlayingStateContext* _context;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nowPlayingService:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)_notifyActive:(char)arg1 ;
-(void)_notifyTimedOut:(/*^block*/id)arg1 ;
-(void)_switchToService:(id)arg1 ;
-(void)_noteServiceFailure;
-(void)notifyWhenActive:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(void)dealloc;
-(char)isActive;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_reconnect;
-(void)switchToState:(id)arg1 ;
@end

