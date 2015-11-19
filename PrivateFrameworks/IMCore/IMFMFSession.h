/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FMFSessionDelegate.h>

@class FMFSession, NSString, FMFDevice;

@interface IMFMFSession : NSObject <FMFSessionDelegate> {

	FMFSession* _session;
	NSString* _establishingAccountID;
	FMFDevice* _activeDevice;

}

@property (nonatomic,readonly) char restrictLocationSharing; 
@property (nonatomic,readonly) char disableLocationSharing; 
@property (nonatomic,retain) FMFSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * establishingAccountID;              //@synthesize establishingAccountID=_establishingAccountID - In the implementation block
@property (nonatomic,retain) FMFDevice * activeDevice;                      //@synthesize activeDevice=_activeDevice - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(FMFSession *)session;
-(void)dealloc;
-(id)init;
-(char)disableLocationSharing;
-(id)locationForHandleOrSibling:(id)arg1 ;
-(char)fmfHandleIsSharingLocationWithMe:(id)arg1 ;
-(char)restrictLocationSharing;
-(void)refreshLocationForChat:(id)arg1 ;
-(FMFDevice *)activeDevice;
-(id)timedOfferExpirationForChat:(id)arg1 ;
-(void)makeThisDeviceActiveDevice;
-(char)handleIsFollowingMyLocation:(id)arg1 ;
-(void)stopSharingWithHandle:(id)arg1 inChat:(id)arg2 ;
-(void)startSharingWithHandle:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3 ;
-(void)setSession:(FMFSession *)arg1 ;
-(id)locationForHandle:(id)arg1 ;
-(void)refreshLocationForHandle:(id)arg1 inChat:(id)arg2 ;
-(id)_bestAccountForAddresses:(id)arg1 ;
-(char)handleIsSharingLocationWithMe:(id)arg1 ;
-(id)fmfHandlesForChat:(id)arg1 ;
-(id)allSiblingFMFHandlesForChat:(id)arg1 ;
-(char)chatHasParticipantsFollowingMyLocation:(id)arg1 ;
-(char)allChatParticipantsFollowingMyLocation:(id)arg1 ;
-(char)chatHasParticipantsSharingLocationWithMe:(id)arg1 ;
-(char)chatHasSiblingParticipantsSharingLocationWithMe:(id)arg1 ;
-(char)allChatParticipantsSharingLocationWithMe:(id)arg1 ;
-(void)startSharingWithChat:(id)arg1 untilDate:(id)arg2 ;
-(void)stopSharingWithChat:(id)arg1 ;
-(void)startTrackingLocationForChat:(id)arg1 ;
-(void)stopTrackingLocationForChat:(id)arg1 ;
-(Class)__FMFSessionClass;
-(void)_updateActiveDevice;
-(NSString *)establishingAccountID;
-(void)_startSharingWithFMFHandles:(id)arg1 inChat:(id)arg2 untilDate:(id)arg3 ;
-(void)_stopSharingWithFMFHandles:(id)arg1 inChat:(id)arg2 ;
-(id)locationForFMFHandle:(id)arg1 ;
-(id)_callerIDForChat:(id)arg1 ;
-(void)_postNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(char)fmfHandleIsFollowingMyLocation:(id)arg1 ;
-(id)fmfGroupIdGroup;
-(id)fmfGroupIdOneToOne;
-(void)setActiveDevice:(FMFDevice *)arg1 ;
-(void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)arg1 ;
-(void)setEstablishingAccountID:(NSString *)arg1 ;
-(void)didReceiveLocation:(id)arg1 ;
-(void)didStartSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1 ;
-(void)didUpdateHidingStatus:(char)arg1 ;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)startTrackingLocationForHandle:(id)arg1 ;
-(void)stopTrackingLocationForHandle:(id)arg1 ;
-(void)friendshipRequestReceived:(id)arg1 ;
-(void)friendshipWasRemoved:(id)arg1 ;
@end

