/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSAppleIDSRegistrationCenterListener
@required
-(void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;
-(void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 succeededRegistration:(id)arg2;
-(void)center:(id)arg1 failedRegistration:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 allSucceededRegistrations:(id)arg2;
-(void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;
-(void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(int)arg3 info:(id)arg4;

@end

