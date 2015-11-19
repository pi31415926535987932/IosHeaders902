/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AAUIAccountCreationDelegate
@required
-(void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2;
-(void)accountCreationDidFailWithError:(id)arg1;
-(void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3;
-(void)accountCreationWasCanceled;

@end

