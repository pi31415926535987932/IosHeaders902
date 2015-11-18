/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBReducedMotionFadeSettings, SBUnlockSettings, SBCenterAppLaunchSettings, SBCenterAppSuspendSettings, SBCrossfadeAppLaunchSettings, SBCrossfadeAppSuspendSettings, SBFolderOpenSettings, SBFolderCloseSettings;

@interface SBRootAnimationSettings : _UISettings {

	SBReducedMotionFadeSettings* _reducedMotionSettings;
	SBUnlockSettings* _unlockSettings;
	SBCenterAppLaunchSettings* _centerLaunchSettings;
	SBCenterAppSuspendSettings* _centerSuspendSettings;
	SBCrossfadeAppLaunchSettings* _crossfadeLaunchSettings;
	SBCrossfadeAppSuspendSettings* _crossfadeSuspendSettings;
	SBFolderOpenSettings* _folderOpenSettings;
	SBFolderCloseSettings* _folderCloseSettings;

}

@property (retain) SBReducedMotionFadeSettings * reducedMotionSettings;                   //@synthesize reducedMotionSettings=_reducedMotionSettings - In the implementation block
@property (retain) SBUnlockSettings * unlockSettings;                                     //@synthesize unlockSettings=_unlockSettings - In the implementation block
@property (retain) SBCenterAppLaunchSettings * centerLaunchSettings;                      //@synthesize centerLaunchSettings=_centerLaunchSettings - In the implementation block
@property (retain) SBCenterAppSuspendSettings * centerSuspendSettings;                    //@synthesize centerSuspendSettings=_centerSuspendSettings - In the implementation block
@property (retain) SBCrossfadeAppLaunchSettings * crossfadeLaunchSettings;                //@synthesize crossfadeLaunchSettings=_crossfadeLaunchSettings - In the implementation block
@property (retain) SBCrossfadeAppSuspendSettings * crossfadeSuspendSettings;              //@synthesize crossfadeSuspendSettings=_crossfadeSuspendSettings - In the implementation block
@property (retain) SBFolderOpenSettings * folderOpenSettings;                             //@synthesize folderOpenSettings=_folderOpenSettings - In the implementation block
@property (retain) SBFolderCloseSettings * folderCloseSettings;                           //@synthesize folderCloseSettings=_folderCloseSettings - In the implementation block
+(id)settingsControllerModule;
-(SBReducedMotionFadeSettings *)reducedMotionSettings;
-(void)setReducedMotionSettings:(SBReducedMotionFadeSettings *)arg1 ;
-(SBUnlockSettings *)unlockSettings;
-(void)setUnlockSettings:(SBUnlockSettings *)arg1 ;
-(SBCenterAppLaunchSettings *)centerLaunchSettings;
-(void)setCenterLaunchSettings:(SBCenterAppLaunchSettings *)arg1 ;
-(SBCenterAppSuspendSettings *)centerSuspendSettings;
-(void)setCenterSuspendSettings:(SBCenterAppSuspendSettings *)arg1 ;
-(SBCrossfadeAppLaunchSettings *)crossfadeLaunchSettings;
-(void)setCrossfadeLaunchSettings:(SBCrossfadeAppLaunchSettings *)arg1 ;
-(SBCrossfadeAppSuspendSettings *)crossfadeSuspendSettings;
-(void)setCrossfadeSuspendSettings:(SBCrossfadeAppSuspendSettings *)arg1 ;
-(SBFolderOpenSettings *)folderOpenSettings;
-(void)setFolderOpenSettings:(SBFolderOpenSettings *)arg1 ;
-(SBFolderCloseSettings *)folderCloseSettings;
-(void)setFolderCloseSettings:(SBFolderCloseSettings *)arg1 ;
-(void)setDefaultValues;
@end

