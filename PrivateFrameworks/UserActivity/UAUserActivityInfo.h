/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary, NSDate, NSString, NSURL, NSData, NSError, NSSet;

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {

	char _eligibleForHandoff;
	char _eligibleForSearch;
	char _eligibleForPublicIndex;
	NSUUID* _uuid;
	unsigned _type;
	NSDictionary* _options;
	unsigned _changeCount;
	NSDate* _activityDate;
	NSString* _title;
	NSString* _typeIdentifier;
	NSString* _dynamicIdentifier;
	NSString* _teamIdentifier;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSData* _encodedUserInfo;
	NSError* _encodedUserInfoError;
	NSSet* _requiredUserInfoKeys;
	NSDictionary* _encodingOptions;
	NSData* _contentAttributeSetData;
	NSString* _contentUserAction;
	NSSet* _keywords;
	NSDate* _expirationDate;
	NSError* _error;

}

@property (copy) NSUUID * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned type;                               //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (assign) unsigned changeCount;                        //@synthesize changeCount=_changeCount - In the implementation block
@property (copy) NSDate * activityDate;                         //@synthesize activityDate=_activityDate - In the implementation block
@property (copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (copy) NSString * typeIdentifier;                     //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                  //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSString * teamIdentifier;                     //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (copy) NSURL * webpageURL;                            //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                          //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSData * encodedUserInfo;                      //@synthesize encodedUserInfo=_encodedUserInfo - In the implementation block
@property (copy) NSError * encodedUserInfoError;                //@synthesize encodedUserInfoError=_encodedUserInfoError - In the implementation block
@property (copy) NSSet * requiredUserInfoKeys;                  //@synthesize requiredUserInfoKeys=_requiredUserInfoKeys - In the implementation block
@property (assign) char eligibleForHandoff;                     //@synthesize eligibleForHandoff=_eligibleForHandoff - In the implementation block
@property (assign) char eligibleForSearch;                      //@synthesize eligibleForSearch=_eligibleForSearch - In the implementation block
@property (assign) char eligibleForPublicIndex;                 //@synthesize eligibleForPublicIndex=_eligibleForPublicIndex - In the implementation block
@property (copy) NSDictionary * encodingOptions;                //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (copy) NSData * contentAttributeSetData;              //@synthesize contentAttributeSetData=_contentAttributeSetData - In the implementation block
@property (copy) NSString * contentUserAction;                  //@synthesize contentUserAction=_contentUserAction - In the implementation block
@property (copy) NSSet * keywords;                              //@synthesize keywords=_keywords - In the implementation block
@property (copy) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy) NSError * error;                               //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSString *)contentUserAction;
-(void)setContentUserAction:(NSString *)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(void)setEligibleForHandoff:(char)arg1 ;
-(void)setEligibleForSearch:(char)arg1 ;
-(NSDate *)activityDate;
-(void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3 ;
-(id)userActivityString;
-(id)secondaryUserActivityString;
-(id)optionalUserActivityData;
-(id)logString;
-(void)setActivityDate:(NSDate *)arg1 ;
-(char)eligibleForHandoff;
-(char)eligibleForSearch;
-(char)eligibleForPublicIndex;
-(void)setEligibleForPublicIndex:(char)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(NSError *)error;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(NSString *)title;
-(unsigned)changeCount;
-(void)setChangeCount:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)typeIdentifier;
-(NSUUID *)uuid;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)teamIdentifier;
-(id)statusString;
-(void)setError:(NSError *)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSData *)encodedUserInfo;
-(void)setEncodedUserInfo:(NSData *)arg1 ;
-(void)setContentAttributeSetData:(NSData *)arg1 ;
-(void)setEncodingOptions:(NSDictionary *)arg1 ;
-(void)setEncodedUserInfoError:(NSError *)arg1 ;
-(NSDictionary *)encodingOptions;
-(NSError *)encodedUserInfoError;
-(NSData *)contentAttributeSetData;
@end

