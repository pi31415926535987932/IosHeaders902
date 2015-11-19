/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCACAccountPayloadHandler.h>
#import <libobjc.A.dylib/DAValidityCheckConsumer.h>
#import <libobjc.A.dylib/ASPolicyPreflighterDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError, NSDictionary, NSData, ASAccount, DAAccount, NSString;

@interface MCNewEASAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer, ASPolicyPreflighterDelegate> {

	NSObject*<OS_dispatch_semaphore> _validationSema;
	char _validationComplete;
	NSError* _validationError;
	NSObject*<OS_dispatch_semaphore> _preflightSema;
	char _policyPreflightComplete;
	NSError* _policyPreflightError;
	NSDictionary* _policyPreflightFeatures;
	NSData* _embeddedCertificatePersistentID;
	ASAccount* _account;
	DAAccount* _setAsideDAAccount;

}

@property (nonatomic,retain) DAAccount * setAsideDAAccount;              //@synthesize setAsideDAAccount=_setAsideDAAccount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)userInputFields;
-(char)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(char)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(void)unstageFromInstallationWithInstaller:(id)arg1 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)_installedAccount;
-(void)_preflightWithAccount:(id)arg1 ;
-(char)_isConfiguredWithSCEP;
-(id)_preflightTimePersistentIDForIdentityCertificateUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(id)_accountFromPayloadWithUserInputResponses:(id)arg1 identityPersistentID:(id)arg2 SMIMESigningIdentityPersistentID:(id)arg3 SMIMEEncryptionIdentityPersistentID:(id)arg4 perMessageSwitchEnabled:(char)arg5 ;
-(void)_preflightWithPreflighter:(id)arg1 ;
-(id)_getClientRestrictionsFromServerCertificatePersistentID:(id)arg1 SMIMESigningIdentityPersistentID:(id)arg2 SMIMEEncryptionIdentityPersistentID:(id)arg3 perMessageSwitchEnabled:(char)arg4 outError:(id*)arg5 ;
-(id)_installTimePersistentIDForIdentityCertificateOutError:(id*)arg1 ;
-(void)setSetAsideDAAccount:(DAAccount *)arg1 ;
-(DAAccount *)setAsideDAAccount;
-(id)_errorFromPolicyPreflightError:(id)arg1 ;
-(void)preflighterSuccessWithoutPolicyUpdate:(id)arg1 ;
-(char)isInstalled;
-(void)remove;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
-(void)preflighter:(id)arg1 error:(id)arg2 ;
-(void)preflighterRemoteWipeRequested:(id)arg1 ;
-(void)preflighter:(id)arg1 needsComplianceWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 ;
-(void)preflighter:(id)arg1 successWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 policyKey:(id)arg4 ;
-(void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1 ;
@end

