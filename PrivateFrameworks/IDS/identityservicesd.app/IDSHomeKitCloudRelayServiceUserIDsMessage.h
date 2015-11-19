/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IDSHomeKitCloudRelayServiceUserIDsMessage : FTIDSMessage <NSCopying> {

	NSString* _subService;
	NSArray* _responseServiceUserIDs;
	NSString* _userID;

}

@property (copy) NSString * subService;                         //@synthesize subService=_subService - In the implementation block
@property (copy) NSString * userID;                             //@synthesize userID=_userID - In the implementation block
@property (copy) NSArray * responseServiceUserIDs;              //@synthesize responseServiceUserIDs=_responseServiceUserIDs - In the implementation block
-(NSArray *)responseServiceUserIDs;
-(void)setResponseServiceUserIDs:(NSArray *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)setSubService:(NSString *)arg1 ;
-(NSString *)subService;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)messageBody;
@end

