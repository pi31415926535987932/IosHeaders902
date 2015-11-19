/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBCKEngine.h>

@protocol OS_dispatch_group;
@class MBCKSnapshot, NSArray, MBCKDevice, MBServiceRestoreDomainManager, NSDictionary, NSDate, NSObject, MBCKAccount, NSMutableSet;

@interface MBCKRestoreEngine : MBCKEngine {

	int _mode;
	int _restoreType;
	MBCKSnapshot* _targetSnapshot;
	NSArray* _validSnapshots;
	MBCKDevice* _localDevice;
	char _appDataMovedToSafeHarbor;
	MBServiceRestoreDomainManager* _restoreDomainManager;
	NSDictionary* _storedKeybagsByUUIDString;
	unsigned _restoreState;
	NSDate* _startDate;
	NSObject*<OS_dispatch_group> _stateTransitionGroup;
	MBCKAccount* _account;
	NSMutableSet* _domainNamesToForegroundInstall;

}

@property (nonatomic,readonly) MBServiceRestoreDomainManager * restoreDomainManager;              //@synthesize restoreDomainManager=_restoreDomainManager - In the implementation block
@property (nonatomic,retain) NSDictionary * storedKeybagsByUUIDString;                            //@synthesize storedKeybagsByUUIDString=_storedKeybagsByUUIDString - In the implementation block
@property (assign,nonatomic) char appDataMovedToSafeHarbor;                                       //@synthesize appDataMovedToSafeHarbor=_appDataMovedToSafeHarbor - In the implementation block
@property (assign,nonatomic) unsigned restoreState;                                               //@synthesize restoreState=_restoreState - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup;                   //@synthesize stateTransitionGroup=_stateTransitionGroup - In the implementation block
@property (nonatomic,retain) MBCKAccount * account;                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableSet * domainNamesToForegroundInstall;                       //@synthesize domainNamesToForegroundInstall=_domainNamesToForegroundInstall - In the implementation block
-(id)lastCKKeyBag;
-(char)cleanupAfterError:(id)arg1 withError:(id*)arg2 ;
-(char)setupWithError:(id*)arg1 ;
-(char)findRestorablesWithError:(id*)arg1 ;
-(char)downloadRestorablesWithError:(id*)arg1 ;
-(char)restoreEntitlementsWithError:(id*)arg1 ;
-(char)annotateRestoreWithError:(id*)arg1 ;
-(char)finalizeRestoreWithError:(id*)arg1 ;
-(char)shouldRestoreSystemFile:(id)arg1 forDomain:(id)arg2 ;
-(NSMutableSet *)domainNamesToForegroundInstall;
-(NSDictionary *)storedKeybagsByUUIDString;
-(MBServiceRestoreDomainManager *)restoreDomainManager;
-(void)setDomainNamesToForegroundInstall:(NSMutableSet *)arg1 ;
-(char)runWithError:(id*)arg1 ;
-(char)_downloadRestorablesForForegroundWithError:(id*)arg1 ;
-(char)_downloadRestorablesForBackgroundContainerWithError:(id*)arg1 ;
-(char)_downloadRestorablesForBackgroundFilesWithError:(id*)arg1 ;
-(id)_directoryAttributes;
-(id)getEntitlementsForDomainsWithError:(id*)arg1 ;
-(char)_restoreEntitlements:(id)arg1 withError:(id*)arg2 ;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 ;
-(void)testStateTransition;
-(id)lastKeyBag;
-(char)shouldRestoreFile:(id)arg1 forDomain:(id)arg2 withError:(id*)arg3 ;
-(void)setStoredKeybagsByUUIDString:(NSDictionary *)arg1 ;
-(char)appDataMovedToSafeHarbor;
-(void)setAppDataMovedToSafeHarbor:(char)arg1 ;
-(NSDate *)startDate;
-(void)cancel;
-(id)mode;
-(void)makeStateTransition;
-(NSObject*<OS_dispatch_group>)stateTransitionGroup;
-(void)setStateTransitionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(char)isMigrate;
-(int)engineMode;
-(int)restoreType;
-(void)setRestoreState:(unsigned)arg1 ;
-(void)setAccount:(MBCKAccount *)arg1 ;
-(MBCKAccount *)account;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)secret;
-(unsigned)restoreState;
@end

