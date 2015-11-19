/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse

@property (nonatomic,readonly) char success; 
@property (nonatomic,readonly) NSDictionary * userDisplayStrings; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) int errorCode; 
-(NSDictionary *)userDisplayStrings;
-(NSString *)errorTitle;
-(NSString *)errorMessage;
-(int)errorCode;
-(char)success;
@end

