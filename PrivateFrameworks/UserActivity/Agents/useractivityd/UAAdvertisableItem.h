/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSUUID, NSDictionary, NSDate, NSString, NSURL, UACornerActionManager, NSError;

@interface UAAdvertisableItem : NSObject {

	NSData* _encodedUserInfo;
	NSData* _encodedUserInfoOldCache;
	char _eligibleForHandoff;
	char _eligibleForSearch;
	char _eligibleForPublicIndexing;
	NSUUID* _uuid;
	unsigned _type;
	NSDictionary* _options;
	unsigned _changeCount;
	NSDate* _activityDate;
	NSString* _title;
	NSString* _typeIdentifier;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSString* _dynamicIdentifier;
	NSString* _teamID;
	NSDate* _lastAdvertisedTime;
	UACornerActionManager* _manager;
	NSDate* _expirationDate;
	NSError* _encodedUserInfoError;

}

@property (copy) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned type;                                    //@synthesize type=_type - In the implementation block
@property (copy) NSString * typeIdentifier;                          //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                       //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (copy) NSURL * webpageURL;                                 //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                               //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSData * encodedUserInfo; 
@property (readonly) NSData * encodedUserInfoOld; 
@property (copy) NSError * encodedUserInfoError;                     //@synthesize encodedUserInfoError=_encodedUserInfoError - In the implementation block
@property (copy) NSString * teamID;                                  //@synthesize teamID=_teamID - In the implementation block
@property (copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (assign) unsigned changeCount;                             //@synthesize changeCount=_changeCount - In the implementation block
@property (copy) NSDate * activityDate;                              //@synthesize activityDate=_activityDate - In the implementation block
@property (copy) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign) char eligibleForHandoff;                          //@synthesize eligibleForHandoff=_eligibleForHandoff - In the implementation block
@property (assign) char eligibleForSearch;                           //@synthesize eligibleForSearch=_eligibleForSearch - In the implementation block
@property (assign) char eligibleForPublicIndexing;                   //@synthesize eligibleForPublicIndexing=_eligibleForPublicIndexing - In the implementation block
@property (retain) UACornerActionManager * manager;                  //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSData * advertisingBytes; 
@property (retain) NSDate * lastAdvertisedTime;                      //@synthesize lastAdvertisedTime=_lastAdvertisedTime - In the implementation block
@property (readonly) char needsUpdateBeforeAdvertising; 
-(id)initWithUUID:(id)arg1 manager:(id)arg2 ;
-(NSData *)advertisingBytes;
-(char)matchesAdvertisingBytes:(id)arg1 ;
-(char)eligibleToAdvertise;
-(char)eligibleToAlwaysAdvertise;
-(void)setLastAdvertisedTime:(NSDate *)arg1 ;
-(char)updateInformationFromSourceEvenIfClean:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSDate *)lastAdvertisedTime;
-(char)updateInformationFromSourceWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)encodedUserInfoOld;
-(char)wasResumedOnAnotherDeviceWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)needsUpdateBeforeAdvertising;
-(id)copyUserActivityInfoWithUUID:(char)arg1 ;
-(char)eligibleForPublicIndexing;
-(void)setManager:(UACornerActionManager *)arg1 ;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(void)setEligibleForHandoff:(char)arg1 ;
-(void)setEligibleForSearch:(char)arg1 ;
-(void)setEligibleForPublicIndexing:(char)arg1 ;
-(NSString *)teamID;
-(UACornerActionManager *)manager;
-(NSDate *)activityDate;
-(id)logString;
-(void)setActivityDate:(NSDate *)arg1 ;
-(char)eligibleForHandoff;
-(char)eligibleForSearch;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(NSString *)title;
-(unsigned)changeCount;
-(void)setChangeCount:(unsigned)arg1 ;
-(char)update:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)typeIdentifier;
-(NSUUID *)uuid;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)statusString;
-(void)setTeamID:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(char)isDirty;
-(NSData *)encodedUserInfo;
-(void)setEncodedUserInfo:(NSData *)arg1 ;
-(void)setEncodedUserInfoError:(NSError *)arg1 ;
-(NSError *)encodedUserInfoError;
@end

