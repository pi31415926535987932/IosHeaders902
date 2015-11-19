/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCInstallerReader.h>
#import <profiled/MCInteractionClientDelegate.h>

@class NSMutableArray, NSDictionary, NSMutableDictionary;

@interface MCInstaller : MCInstallerReader <MCInteractionClientDelegate> {

	NSMutableArray* _queuedProfiles;
	NSMutableArray* _queuedProvisioningProfiles;
	NSDictionary* _currentlyInstallingRestrictions;
	NSMutableDictionary* _setAsideAccountIdentifiersByPayloadClass;

}

@property (nonatomic,retain) NSMutableDictionary * setAsideAccountIdentifiersByPayloadClass;              //@synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass - In the implementation block
+(id)sharedInstaller;
+(void)considerProfilesInstalledDuringBuddyForManagement:(char)arg1 ;
+(id)deviceNotManagedError;
+(id)deviceNotSupervisedError;
+(id)_installationFailureErrorWithUnderlyingError:(id)arg1 ;
+(void)_enumerateProfilesWithCriteria:(/*^block*/id)arg1 block:(/*^block*/id)arg2 ;
+(void)_setPathsProfileStorageDirectory:(id)arg1 ;
-(void)recomputeProfileRestrictions;
-(id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(id)popProfileDataAtHeadOfInstallationQueue;
-(id)popProvisioningProfileDataAtHeadOfInstallationQueue;
-(id)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 outIsSuitableForInstallationOnWatch:(char*)arg4 ;
-(char)queueProvisioningProfileDataForInstallation:(id)arg1 outError:(id*)arg2 ;
-(id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(id)_badProvisioningProfileError;
-(char)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned)arg3 outError:(id*)arg4 ;
-(id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1 ;
-(id)pathToInstalledProfileByIdentifier:(id)arg1 ;
-(id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1 ;
-(void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2 ;
-(id)preflightProfileForInstallationOnWatch:(id)arg1 ;
-(id)_userCancelledErrorWithFriendlyName:(id)arg1 ;
-(id)_invalidInputError;
-(void)setSetAsideAccountIdentifiersByPayloadClass:(NSMutableDictionary *)arg1 ;
-(id)_installedProfileWithIdentifier:(id)arg1 ;
-(char)_checkForMDMReplacementNewProfile:(id)arg1 options:(id)arg2 outIsMDMReplacement:(char*)arg3 oldProfile:(id)arg4 client:(id)arg5 outError:(id*)arg6 ;
-(char)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(char)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(char)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(id)_managingProfileIdentifierForProfileIdentifier:(id)arg1 ;
-(void)_removeOrphanedResources;
-(NSMutableDictionary *)setAsideAccountIdentifiersByPayloadClass;
-(char)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(id)_malformedPayloadError;
-(id)_deviceLockedError;
-(id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2 ;
-(id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(id)_profileNotEligibleErrorWithProfile:(id)arg1 ;
-(void)_reallyRemoveProfileWithIdentifier:(id)arg1 ;
-(id)pathToInstalledProfileByUUID:(id)arg1 ;
-(void)removeAllProfilesFromInstallationQueue;
-(id)init;
-(void)cleanUp;
-(id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 ;
@end

