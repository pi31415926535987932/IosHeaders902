/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDAccount.h>

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount {

	IDSAccount* _idsAccount;

}

@property (nonatomic,retain,readonly) IDSAccount * idsAccount;              //@synthesize idsAccount=_idsAccount - In the implementation block
-(void)dealloc;
-(void)writeAccountDefaults:(id)arg1 ;
-(id)accountDefaults;
-(char)canMakeDowngradeRoutingChecks;
-(IDSAccount *)idsAccount;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4 ;
@end

