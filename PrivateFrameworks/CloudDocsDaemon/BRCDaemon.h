/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BRCAccountHandlerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSXPCListener, BRCAccountSession, BRCCloudFileProvider, BRCVersionsFileProvider, BRCAccountHandler, NSString, NSError, NSDate, NSXPCListenerEndpoint;

@interface BRCDaemon : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate, BRCAccountHandlerDelegate> {

	NSObject*<OS_dispatch_source> _sigIntSrc;
	NSObject*<OS_dispatch_source> _sigQuitSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSXPCListener* _xpcListener;
	NSXPCListener* _tokenListener;
	char _unitTestMode;
	char _resumed;
	char _deviceUnlocked;
	char _hasNotEnoughDiskSpaceToBeFunctional;
	BRCAccountSession* _session;
	BRCCloudFileProvider* _fileProvider;
	BRCVersionsFileProvider* _versionsProvider;
	BRCAccountHandler* _accountHandler;
	NSObject*<OS_dispatch_group> _xpcListenerBlockerUntilReady;
	NSObject*<OS_dispatch_group> _xpcTokenListenerBlockerUntilReady;
	int _serverAvailabilityNotifyToken;
	NSObject*<OS_dispatch_queue> _accountLoaderQueue;
	char _disableAccountChangesHandling;
	char _disableAppsChangesHandling;
	NSString* _logsDirPath;
	NSString* _appSupportDirPath;
	NSString* _cacheDirPath;
	NSString* _rootDirPath;
	Class _containerClass;
	NSError* _loggedOutError;
	NSString* _ubiquityTokenSalt;
	unsigned _forceIsGreedyState;
	NSDate* _startupDate;

}

@property (assign,nonatomic) char disableAccountChangesHandling;                        //@synthesize disableAccountChangesHandling=_disableAccountChangesHandling - In the implementation block
@property (assign,nonatomic) char disableAppsChangesHandling;                           //@synthesize disableAppsChangesHandling=_disableAppsChangesHandling - In the implementation block
@property (assign,nonatomic) unsigned forceIsGreedyState;                               //@synthesize forceIsGreedyState=_forceIsGreedyState - In the implementation block
@property (nonatomic,retain) NSString * logsDirPath;                                    //@synthesize logsDirPath=_logsDirPath - In the implementation block
@property (nonatomic,retain) NSString * appSupportDirPath;                              //@synthesize appSupportDirPath=_appSupportDirPath - In the implementation block
@property (nonatomic,retain) NSString * cacheDirPath;                                   //@synthesize cacheDirPath=_cacheDirPath - In the implementation block
@property (nonatomic,retain) NSString * rootDirPath;                                    //@synthesize rootDirPath=_rootDirPath - In the implementation block
@property (nonatomic,readonly) BRCAccountHandler * accountHandler;                      //@synthesize accountHandler=_accountHandler - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSError * loggedOutError;                                  //@synthesize loggedOutError=_loggedOutError - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) NSString * ubiquityTokenSalt;                            //@synthesize ubiquityTokenSalt=_ubiquityTokenSalt - In the implementation block
@property (nonatomic,readonly) NSDate * startupDate;                                    //@synthesize startupDate=_startupDate - In the implementation block
@property (nonatomic,retain) Class containerClass;                                      //@synthesize containerClass=_containerClass - In the implementation block
@property (nonatomic,readonly) BRCCloudFileProvider * fileProvider;                     //@synthesize fileProvider=_fileProvider - In the implementation block
@property (nonatomic,readonly) BRCVersionsFileProvider * versionsProvider;              //@synthesize versionsProvider=_versionsProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemon;
-(BRCAccountSession *)session;
-(id)init;
-(void)resume;
-(NSXPCListenerEndpoint *)endpoint;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(NSDate *)startupDate;
-(BRCCloudFileProvider *)fileProvider;
-(BRCVersionsFileProvider *)versionsProvider;
-(void)networkReachabilityChanged:(char)arg1 ;
-(BRCAccountHandler *)accountHandler;
-(NSString *)appSupportDirPath;
-(NSString *)rootDirPath;
-(NSString *)ubiquityTokenSalt;
-(void)setLoggedOutError:(NSError *)arg1 ;
-(void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2 ;
-(void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2 ;
-(void)handleExitSignal:(int)arg1 ;
-(void)_initSignals;
-(NSString *)cacheDirPath;
-(char)_isDeviceUnlocked;
-(void)waitUntilDeviceIsUnlocked;
-(void)_loadAccountIfNeeded;
-(void)setUpSandbox;
-(char)_haveRequiredKernelFeatures;
-(char)hasEnoughDiskSpaceToBeFunctional;
-(void)loadAccount;
-(char)_shouldCacheDeleteForVolume:(id)arg1 ;
-(void)localeDidChange;
-(void)exitWithCode:(int)arg1 ;
-(NSError *)loggedOutError;
-(void)waitForConfiguration;
-(void)setUpAnonymousListener;
-(void)setUp;
-(char)selfCheck:(_sFILE*)arg1 ;
-(NSString *)logsDirPath;
-(void)setLogsDirPath:(NSString *)arg1 ;
-(void)setAppSupportDirPath:(NSString *)arg1 ;
-(void)setCacheDirPath:(NSString *)arg1 ;
-(void)setRootDirPath:(NSString *)arg1 ;
-(Class)containerClass;
-(void)setContainerClass:(Class)arg1 ;
-(char)disableAccountChangesHandling;
-(void)setDisableAccountChangesHandling:(char)arg1 ;
-(char)disableAppsChangesHandling;
-(void)setDisableAppsChangesHandling:(char)arg1 ;
-(unsigned)forceIsGreedyState;
-(void)setForceIsGreedyState:(unsigned)arg1 ;
@end

