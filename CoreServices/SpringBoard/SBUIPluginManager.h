/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBPluginManager.h>

@class NSMutableDictionary, SBUIPluginHost;

@interface SBUIPluginManager : SBPluginManager {

	NSMutableDictionary* _uiPlugins;
	SBUIPluginHost* _pendingActivation;
	SBUIPluginHost* _hostPendingActivation;

}

@property (retain) SBUIPluginHost * hostPendingActivation;              //@synthesize hostPendingActivation=_hostPendingActivation - In the implementation block
+(id)sharedInstance;
-(char)handleActivationEvent:(int)arg1 eventSource:(int)arg2 withContext:(id)arg3 ;
-(char)handleButtonDownEventFromSource:(int)arg1 ;
-(char)handleButtonTapFromSource:(int)arg1 ;
-(id)loadedUIPlugins;
-(id)_loadedUIPluginHostsVisible:(char)arg1 ;
-(id)loadedUIPluginHosts;
-(void)setHostPendingActivation:(SBUIPluginHost *)arg1 ;
-(SBUIPluginHost *)hostPendingActivation;
-(id)loadUIPluginNamed:(id)arg1 withHost:(id)arg2 ;
-(char)unloadUIPlugin:(id)arg1 forHost:(id)arg2 ;
-(char)overrideInterfaceOrientation:(int*)arg1 ;
-(char)suppressingNotifications;
-(char)overrideScreenDimInterval:(double*)arg1 ;
-(char)handleButtonUpEventFromSource:(int)arg1 ;
-(char)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
@end

