/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBFLockScreenWallpaperParallaxSettings, SBFHomeScreenWallpaperParallaxSettings, SBFParallaxSettings;

@interface SBAppParallaxSettings : _UISettings {

	SBFLockScreenWallpaperParallaxSettings* _lockscreenWallpaperSettings;
	SBFHomeScreenWallpaperParallaxSettings* _homescreenWallpaperSettings;
	SBFParallaxSettings* _iconSettings;
	SBFParallaxSettings* _iconBadgeSettings;

}

@property (retain) SBFLockScreenWallpaperParallaxSettings * lockscreenWallpaperSettings;              //@synthesize lockscreenWallpaperSettings=_lockscreenWallpaperSettings - In the implementation block
@property (retain) SBFHomeScreenWallpaperParallaxSettings * homescreenWallpaperSettings;              //@synthesize homescreenWallpaperSettings=_homescreenWallpaperSettings - In the implementation block
@property (retain) SBFParallaxSettings * iconSettings;                                                //@synthesize iconSettings=_iconSettings - In the implementation block
@property (retain) SBFParallaxSettings * iconBadgeSettings;                                           //@synthesize iconBadgeSettings=_iconBadgeSettings - In the implementation block
+(id)settingsControllerModule;
-(SBFParallaxSettings *)iconBadgeSettings;
-(SBFLockScreenWallpaperParallaxSettings *)lockscreenWallpaperSettings;
-(SBFHomeScreenWallpaperParallaxSettings *)homescreenWallpaperSettings;
-(void)setLockscreenWallpaperSettings:(SBFLockScreenWallpaperParallaxSettings *)arg1 ;
-(void)setHomescreenWallpaperSettings:(SBFHomeScreenWallpaperParallaxSettings *)arg1 ;
-(void)setIconBadgeSettings:(SBFParallaxSettings *)arg1 ;
-(void)setDefaultValues;
-(SBFParallaxSettings *)iconSettings;
-(void)setIconSettings:(SBFParallaxSettings *)arg1 ;
@end

