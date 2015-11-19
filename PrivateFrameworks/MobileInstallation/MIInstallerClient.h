/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileInstallation/MobileInstallerDelegateProtocol.h>

@class NSXPCConnection;

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {

	NSXPCConnection* _connection;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id progressBlock;              //@synthesize progressBlock=_progressBlock - In the implementation block
+(id)installerWithProgressBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)installPath:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lookupUninstalledWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInstalledAppsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(int)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(int)arg3 withOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeSafeHarborForIdentifier:(id)arg1 ofType:(int)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)listSafeHarborsOfType:(int)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateAppDataProtectionWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 ;
-(void)reportProgress:(id)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)_invalidateObject;
@end

