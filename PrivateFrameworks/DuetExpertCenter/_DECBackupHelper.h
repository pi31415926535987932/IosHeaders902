/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager, _DKDataProtectionStateMonitor;

@interface _DECBackupHelper : NSObject {

	NSFileManager* _fm;
	_DKDataProtectionStateMonitor* _dataProtection;

}
+(id)sharedInstance;
-(id)init;
-(char)isClassCLocked;
-(char)canBackup;
-(char)backupNewerThanCurrentState;
-(char)markRestoreAsNotDone;
-(char)finishBackup;
-(char)canRestore;
-(char)restoredAlready;
-(char)restoreStart;
-(char)restoreDone;
-(id)backupPathForExpert:(id)arg1 ;
-(id)restorePathForExpert:(id)arg1 ;
-(char)createBackupDirectoriesIfMissing;
-(char)probePathAt:(id)arg1 ;
-(id)_currentBackupVersionPath;
-(char)markVersionOfBackupDirectoryAsCurrent;
@end

