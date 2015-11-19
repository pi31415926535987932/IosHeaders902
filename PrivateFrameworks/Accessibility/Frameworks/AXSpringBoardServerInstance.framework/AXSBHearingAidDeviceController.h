/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXUIClientDelegate.h>
#import <AXSpringBoardServerInstance/AXHAServerDelegate.h>

@class NSDictionary, NSString;

@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate> {

	double _routeChangedTime;
	char isShowingHearingAidControl;
	char _hearingAidIsConnected;
	char _holdingMediaForConnection;
	char _holdingPhoneForConnection;
	NSDictionary* _preferredRoute;

}

@property (assign,nonatomic) char isShowingHearingAidControl; 
@property (assign,nonatomic) char hearingAidIsConnected;                   //@synthesize hearingAidIsConnected=_hearingAidIsConnected - In the implementation block
@property (assign,nonatomic) char holdingMediaForConnection;               //@synthesize holdingMediaForConnection=_holdingMediaForConnection - In the implementation block
@property (assign,nonatomic) char holdingPhoneForConnection;               //@synthesize holdingPhoneForConnection=_holdingPhoneForConnection - In the implementation block
@property (nonatomic,retain) NSDictionary * preferredRoute;                //@synthesize preferredRoute=_preferredRoute - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(void)audioRouteDidChange:(id)arg1 ;
-(void)serverDidDie:(id)arg1 ;
-(void)hearingAidConnectionDidChange:(char)arg1 ;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(void)startServer;
-(void)liveListenStatusBarActivated:(id)arg1 ;
-(void)statusBarDidChange:(id)arg1 ;
-(void)mediaPlaybackDidChange:(id)arg1 ;
-(void)userChangedRouteNotification:(id)arg1 ;
-(void)setPreferredRoute:(NSDictionary *)arg1 ;
-(void)showHearingAidControl:(char)arg1 ;
-(id)hearingUIClient;
-(void)setIsShowingHearingAidControl:(char)arg1 ;
-(void)sendUpdatedStatusBarStyle;
-(char)isShowingHearingAidControl;
-(int)effectiveStatusBarStyle;
-(char)shouldRequestAudioConnectionForCall:(char)arg1 ;
-(char)holdingMediaForConnection;
-(void)setHoldingMediaForConnection:(char)arg1 ;
-(char)holdingPhoneForConnection;
-(void)setHoldingPhoneForConnection:(char)arg1 ;
-(void)setHearingAidIsConnected:(char)arg1 ;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned)arg3 error:(id*)arg4 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)_lockStateChanged;
-(char)hearingAidIsConnected;
-(NSDictionary *)preferredRoute;
-(char)isScreenLocked;
@end

