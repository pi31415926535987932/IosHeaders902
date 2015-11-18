/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenTestPluginSettings : _UISettings {

	char _enablePlugin;
	char _enableLostModePlugin;
	char _showDateView;
	char _showDate;
	char _disableOnUnlock;
	char _showCamera;
	char _showBackgroundView;
	unsigned _overlayStyle;
	unsigned _notificationBehavior;

}

@property (assign) char enablePlugin;                          //@synthesize enablePlugin=_enablePlugin - In the implementation block
@property (assign) char enableLostModePlugin;                  //@synthesize enableLostModePlugin=_enableLostModePlugin - In the implementation block
@property (assign) unsigned overlayStyle;                      //@synthesize overlayStyle=_overlayStyle - In the implementation block
@property (assign) unsigned notificationBehavior;              //@synthesize notificationBehavior=_notificationBehavior - In the implementation block
@property (assign) char showDateView;                          //@synthesize showDateView=_showDateView - In the implementation block
@property (assign) char showDate;                              //@synthesize showDate=_showDate - In the implementation block
@property (assign) char disableOnUnlock;                       //@synthesize disableOnUnlock=_disableOnUnlock - In the implementation block
@property (assign) char showCamera;                            //@synthesize showCamera=_showCamera - In the implementation block
@property (assign) char showBackgroundView;                    //@synthesize showBackgroundView=_showBackgroundView - In the implementation block
+(id)settingsControllerModule;
-(void)setOverlayStyle:(unsigned)arg1 ;
-(void)setNotificationBehavior:(unsigned)arg1 ;
-(void)setEnablePlugin:(char)arg1 ;
-(void)setEnableLostModePlugin:(char)arg1 ;
-(void)setShowDateView:(char)arg1 ;
-(void)setShowDate:(char)arg1 ;
-(void)setDisableOnUnlock:(char)arg1 ;
-(void)setShowCamera:(char)arg1 ;
-(char)enablePlugin;
-(char)enableLostModePlugin;
-(char)disableOnUnlock;
-(char)showCamera;
-(char)showBackgroundView;
-(void)setDefaultValues;
-(void)setShowBackgroundView:(char)arg1 ;
-(char)showDateView;
-(unsigned)notificationBehavior;
-(char)showDate;
-(unsigned)overlayStyle;
@end

