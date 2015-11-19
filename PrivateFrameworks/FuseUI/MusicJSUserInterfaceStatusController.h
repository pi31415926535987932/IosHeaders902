/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/MusicJSUserInterfaceStatusController.h>

@protocol MusicJSUserInterfaceStatusController <JSExport>
@required
-(char)hasUserRequestedSubscriptionHidden;
-(void)setHasUserRequestedSubscriptionHidden:(char)arg1;
-(char)canShowConnect;
-(char)canShowRadio;
-(char)canShowSubscriptionContent;
-(id)tabState;
-(char)hasUserAcknowledgedWelcomeScreen;
-(void)setHasUserAcknowledgedWelcomeScreen:(char)arg1;

@end


@interface MusicJSUserInterfaceStatusController : IKJSObject <MusicJSUserInterfaceStatusController>
-(char)hasUserRequestedSubscriptionHidden;
-(void)setHasUserRequestedSubscriptionHidden:(char)arg1 ;
-(char)canShowConnect;
-(char)canShowRadio;
-(char)canShowSubscriptionContent;
-(id)tabState;
-(char)hasUserAcknowledgedWelcomeScreen;
-(void)setHasUserAcknowledgedWelcomeScreen:(char)arg1 ;
@end
