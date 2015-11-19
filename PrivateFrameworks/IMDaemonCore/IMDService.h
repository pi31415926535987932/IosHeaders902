/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class NSBundle, NSString, NSDictionary;

@interface IMDService : NSObject <IMSystemMonitorListener> {

	NSBundle* _bundle;
	Class _sessionClass;
	NSString* _internalName;
	NSDictionary* _accountDefaults;
	NSDictionary* _serviceDefaults;
	NSDictionary* _serviceProperties;
	NSDictionary* _cachedServiceDefaults;
	NSDictionary* _cachedSetupServiceDefaults;
	char _blockPrefWriting;

}

@property (nonatomic,readonly) Class sessionClass; 
@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,retain,readonly) NSDictionary * serviceProperties;                    //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,retain,readonly) NSBundle * bundle;                                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain,readonly) NSString * internalName; 
@property (nonatomic,retain,readonly) NSString * serviceDomain; 
@property (nonatomic,readonly) char isIDSBased; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaults; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaultsForSetup; 
@property (nonatomic,retain,readonly) NSDictionary * defaultAccountSettings; 
@property (nonatomic,readonly) char serviceRequiresSingleAccount; 
@property (nonatomic,readonly) char shouldCreateActiveAccounts; 
@property (nonatomic,readonly) char serviceWantsNullHostReachability; 
@property (nonatomic,readonly) char serviceIgnoresNetworkConnectivity; 
@property (nonatomic,readonly) char shouldForceAccountsActive; 
@property (nonatomic,readonly) char shouldForceAccountsConnected; 
@property (nonatomic,readonly) char serviceNeedsLogin; 
@property (nonatomic,readonly) char serviceNeedsPassword; 
@property (nonatomic,readonly) char serviceShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) char serviceRequiresHost; 
@property (nonatomic,readonly) char serviceSupportsRegistration; 
@property (nonatomic,readonly) char serviceChatsIgnoreLoginStatus; 
@property (nonatomic,readonly) char serviceSupportsPresence; 
@property (nonatomic,readonly) char serviceSupportsOneSessionForAllAccounts; 
@property (nonatomic,readonly) char supportsDatabase; 
@property (nonatomic,readonly) char disallowDeactivation; 
@property (nonatomic,readonly) int serviceProtocolVersion; 
-(void)saveSettings;
-(void)dealloc;
-(id)description;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidStartBackup;
-(void)accountAdded:(id)arg1 ;
-(NSString *)internalName;
-(NSDictionary *)serviceProperties;
-(NSDictionary *)serviceDefaults;
-(NSDictionary *)defaultAccountSettings;
-(void)accountRemoved:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)delayedSaveSettings;
-(Class)sessionClass;
-(char)shouldForceAccountsConnected;
-(char)isIDSBased;
-(char)serviceRequiresSingleAccount;
-(char)shouldCreateActiveAccounts;
-(char)disallowDeactivation;
-(char)shouldForceAccountsActive;
-(char)serviceSupportsOneSessionForAllAccounts;
-(void)enableAccount:(id)arg1 ;
-(id)_copyServicePropertiesFromIMServiceBundle:(id)arg1 ;
-(void)synchronizeServiceDefaults;
-(void)unloadServiceBundle;
-(void)_reallyUnloadServiceBundle;
-(int)serviceProtocolVersion;
-(id)_serviceDomain;
-(id)oldInternalName;
-(void)loadServiceBundle;
-(id)_defaultDefaults;
-(NSString *)serviceDomain;
-(id)_serviceDefaultsForDomain:(id)arg1 ;
-(id)_oldServiceDomain;
-(void)purgeMemoryCaches;
-(NSDictionary *)serviceDefaultsForSetup;
-(char)clearOneTimeImportAccounts;
-(id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2 ;
-(char)supportsDatabase;
-(char)serviceSupportsRegistration;
-(char)serviceIgnoresNetworkConnectivity;
-(char)serviceWantsNullHostReachability;
-(char)serviceNeedsLogin;
-(char)serviceNeedsPassword;
-(char)serviceShouldBeAlwaysLoggedIn;
-(char)serviceRequiresHost;
-(char)serviceChatsIgnoreLoginStatus;
-(char)serviceSupportsPresence;
-(Class)accountClass;
@end

