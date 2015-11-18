/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitation.h>

@class HMUser;

@interface HMOutgoingHomeInvitation : HMHomeInvitation {

	HMUser* _invitee;

}

@property (nonatomic,readonly) HMUser * invitee;              //@synthesize invitee=_invitee - In the implementation block
+(id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2 ;
+(id)homeInvitationsFromData:(id)arg1 home:(id)arg2 ;
+(char)supportsSecureCoding;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(id)initWithInvitationData:(id)arg1 home:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMUser *)invitee;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

