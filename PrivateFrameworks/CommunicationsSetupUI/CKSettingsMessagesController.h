/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegListController.h>
#import <libobjc.A.dylib/CNFRegWizardControllerDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class NSString;

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate, AKAppleIDAuthenticationDelegate> {

	char _showingChildViewController;
	int _profileToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)currentMessageAutoKeepForType:(int)arg1 ;
+(id)currentKeepMessages;
+(int)currentMessageAutoKeepOptionForType:(int)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)bundle;
-(char)shouldShowCharacterCount;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(id)logName;
-(char)wantsWiFiChooser;
-(char)shouldShowBlacklistSettings;
-(void)_showAuthKitSignInIfNecessary;
-(void)_setupAccountHandlers;
-(void)_updateSwitch;
-(void)_setupAccountHandlersForDisabling;
-(void)_showSignInController;
-(char)_allAccountsAreDeactivated;
-(void)_updateSwitchDelayed;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(char)arg2 ;
-(char)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(char)shouldShowSMSRelaySettings;
-(void)_startListeningForProfileChanges;
-(void)_stopListeningForProfileChanges;
-(char)shouldShowMadridSwitch;
-(id)madridSwitchSpecifierIdentifiers;
-(id)_switchFooterText:(char*)arg1 ;
-(char)shouldShowDeliveryReceipts;
-(id)deliveryReceiptSpecifierIdentifiers;
-(char)shouldShowReadReceipts;
-(id)readReceiptSpecifierIdentifiers;
-(char)shouldShowMadridAccounts;
-(id)madridAccountsSpecifierIdentifiers;
-(id)characterCountSpecifierIdentifiers;
-(id)blacklistSettingsSpecifierIdentifiers;
-(char)shouldShowSendAsSMS;
-(id)sendAsSMSIdentifiers;
-(char)shouldShowAudioMessageSettings;
-(id)audioMessageSettingsSpecifierIdentifiers;
-(char)shouldShowRaiseToListenSwitch;
-(id)raiseToListenSpecifierIdentifiers;
-(char)shouldShowiMessageFilteringSettings;
-(id)iMessageFilteringSpecifierIdentifiers;
-(char)shouldShowVideoMessageSettings;
-(id)videoMessageSettingsSpecifierIdentifiers;
-(id)smsRelaySettingsSpecifierIdentifiers;
-(char)shouldShowGenericSettings;
-(id)genericSettingsSpecifierIdentifiers;
-(char)shouldShowMadridSignin;
-(id)madridSigninSpecifiers;
-(char)_isMadridAccountOperational;
-(char)_isSMSDevice;
-(id)isDeliveryReportsEnabled:(id)arg1 ;
-(char)_isRaiseGestureSupported;
-(char)_isMadridSwitchOn;
-(void)_showMadridSetupIfNecessary:(char)arg1 ;
-(void)_showMadridSetupIfNecessary;
-(void)_updateUIWithError:(id)arg1 ;
-(id)_madridSettingsController;
-(id)_smsRelayDevicesController;
-(void)setSpecifierLoading:(id)arg1 loading:(char)arg2 animated:(char)arg3 ;
-(void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isMMSEnabled:(id)arg1 ;
-(void)setMMSEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)willSendGroupMMS:(id)arg1 ;
-(void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2 ;
-(id)getRaiseToListenEnabled:(id)arg1 ;
-(void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getAudioMessageAutoKeep:(id)arg1 ;
-(void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2 ;
-(id)getVideoMessageAutoKeep:(id)arg1 ;
-(void)setVideoMessageAutoKeep:(id)arg1 specifier:(id)arg2 ;
-(id)isMadridEnabled:(id)arg1 ;
-(void)setMadridEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isConversationListFilteringEnabled:(id)arg1 ;
-(void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)areReadReceiptsEnabled:(id)arg1 ;
-(void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getAccountSummaryForSpecifier:(id)arg1 ;
-(void)madridSigninTappedWithSpecifier:(id)arg1 ;
-(id)madridSigninButtonTextForSpecifier:(id)arg1 ;
-(id)getSMSRelayDevicesSummary:(id)arg1 ;
-(id)getKeepMessages:(id)arg1 ;
-(void)setKeepMessages:(id)arg1 specifier:(id)arg2 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(char)shouldReloadSpecifiersOnResume;
-(void)newCarrierNotification;
@end

