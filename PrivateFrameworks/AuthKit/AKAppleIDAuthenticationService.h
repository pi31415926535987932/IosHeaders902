/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/akd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDaemonProtocol.h>

@class AKClient, AKAccountManager, AKAuthenticationTrafficController, AKAuthenticationUILiaison, NSString;

@interface AKAppleIDAuthenticationService : NSObject <AKAppleIDAuthenticationDaemonProtocol> {

	AKClient* _client;
	AKAccountManager* _accountManager;
	AKAuthenticationTrafficController* _authTrafficController;
	AKAuthenticationUILiaison* _authUILiaison;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setAuthKitAccount:(id)arg1 inUse:(char)arg2 forService:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)_persistGrandSlamServiceTokens:(id)arg1 forAltDSID:(id)arg2 appleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateAuthKitAccount:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_validateLoginCode:(unsigned)arg1 forAltDSID:(id)arg2 masterToken:(id)arg3 authContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_authenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_recoverCredentialsAndAuthenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createNewAppleIDAndAuthenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_isInteractiveAuthRequiredForContext:(id)arg1 ;
-(void)_performInteractiveAuthWithContext:(id)arg1 nonInteractiveAuthError:(id)arg2 nonInteractiveAuthResults:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_attemptNonInteractiveOptionsForAuthWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performSilentServiceTokenAuthWithContext:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_accountForSilentServiceTokenAuthWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performContinuationAuthWithAccount:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_accountForContinuationAuthWithContext:(id)arg1 allowSuggestions:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleVerificationCompletionForAccount:(id)arg1 username:(id)arg2 password:(id)arg3 serverResponse:(id)arg4 error:(id)arg5 context:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_performSRPAuthenticationWithAccount:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performSRPAuthenticationWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 continuationToken:(id)arg4 passwordResetToken:(id)arg5 context:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_completeAuthenticationWithServiceTokens:(id)arg1 tokenFetchError:(id)arg2 altDSID:(id)arg3 authenticationResults:(id)arg4 context:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_fetchTokensForServiceIDs:(id)arg1 withUsername:(id)arg2 altDSID:(id)arg3 masterToken:(id)arg4 context:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_verifyUsername:(id)arg1 password:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 attemptIndex:(unsigned)arg6 completion:(/*^block*/id)arg7 ;
-(void)_showAlertForLoginError:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 password:(id)arg3 continuationToken:(id)arg4 passwordResetToken:(id)arg5 context:(id)arg6 ;
-(void)_handleSuccessfulVerificationForAccount:(id)arg1 withResults:(id)arg2 serverResponse:(id)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)_shouldSkipAccountUpdatesForAuthWithContext:(id)arg1 ;
-(void)_provideServiceTokensIfRequiredForContext:(id)arg1 authenticationResults:(id)arg2 serverResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_beginNativeSecondaryActionWithContext:(id)arg1 initialAuthResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_beginServerDrivenSecondaryActionWithURLKey:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 initialAuthResponse:(id)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_showAlertForLoginCodeValidationError:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 context:(id)arg3 ;
-(void)_beginiForgotFlowWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginAppleIDCreationFlowWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_appleIDClientIdentifier;
-(void)setAppleIDWithAltDSID:(id)arg1 inUse:(char)arg2 forService:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAppleIDWithDSID:(id)arg1 inUse:(char)arg2 forService:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)checkSecurityUpgradeEligibilityForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateLoginCodeWithCompletion:(/*^block*/id)arg1 ;
-(void)validateLoginCode:(unsigned)arg1 forAppleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportSignOutForAppleID:(id)arg1 service:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportSignOutForAllAppleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithClient:(id)arg1 ;
-(void)authenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

