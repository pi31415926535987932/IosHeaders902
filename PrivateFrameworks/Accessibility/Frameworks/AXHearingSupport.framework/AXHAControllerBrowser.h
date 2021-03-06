/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <AXHearingSupport/AXHARemoteControllerDelegate.h>
#import <AXHearingSupport/AXHADeviceControllerProtocol.h>

@protocol AXHAControllerBrowserDelegateProtocol;
@class AXHATimer, NSMutableDictionary, AXHearingSlaveController, NSNetServiceBrowser, NSMutableArray, NSString;

@interface AXHAControllerBrowser : NSObject <NSNetServiceBrowserDelegate, AXHARemoteControllerDelegate, AXHADeviceControllerProtocol> {

	AXHATimer* _deviceUpdatesTimer;
	NSMutableDictionary* _deviceUpdatesDescription;
	int _state;
	AXHearingSlaveController* _slaveController;
	id<AXHAControllerBrowserDelegateProtocol> _delegate;
	NSNetServiceBrowser* _browser;
	NSMutableArray* _remoteControllers;
	NSMutableArray* _updateDeviceBlocks;

}

@property (assign,nonatomic) int state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AXHearingSlaveController * slaveController;                      //@synthesize slaveController=_slaveController - In the implementation block
@property (assign,nonatomic) id<AXHAControllerBrowserDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * browser;                                   //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteControllers;                              //@synthesize remoteControllers=_remoteControllers - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateDeviceBlocks;                             //@synthesize updateDeviceBlocks=_updateDeviceBlocks - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)setDelegate:(id<AXHAControllerBrowserDelegateProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AXHAControllerBrowserDelegateProtocol>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)stop;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2 ;
-(void)setSlaveController:(AXHearingSlaveController *)arg1 ;
-(void)setRemoteControllers:(NSMutableArray *)arg1 ;
-(void)setUpdateDeviceBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)remoteControllers;
-(AXHearingSlaveController *)slaveController;
-(void)sendObject:(id)arg1 toController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(/*^block*/id)arg3 ;
-(void)repairSplitConnection;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(void)clearControllers;
-(id)remoteControllerForHostname:(id)arg1 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forControllers:(id)arg3 ;
-(char)shouldRelinquishConnectionForReason:(int)arg1 ;
-(NSMutableArray *)updateDeviceBlocks;
-(void)writePayload:(id)arg1 toControllers:(id)arg2 ;
-(void)controller:(id)arg1 didReceiveData:(id)arg2 ;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2 ;
-(void)controllerDidFinishConnecting:(id)arg1 ;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2 ;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1 ;
-(void)stopPropertyUpdates;
-(id)availableControllers;
-(id)availableRemoteControllers;
-(void)sendObject:(id)arg1 toAllControllersExcept:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)becomeMaster;
-(void)transitionToSlaveWithCompletion:(/*^block*/id)arg1 ;
-(NSNetServiceBrowser *)browser;
-(void)setBrowser:(NSNetServiceBrowser *)arg1 ;
@end

