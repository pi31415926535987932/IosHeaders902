/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iaptransportd/iaptransportd-Structs.h>
@interface IAPTDPostAlert : NSObject
+(void)PostAccessoryNotification:(CFStringRef)arg1 forMsg:(CFStringRef)arg2 withArg:(CFStringRef)arg3 forDefaultButton:(CFStringRef)arg4 withAlternateButton:(CFStringRef)arg5 forNotification:(_CFUserNotification*)arg6 withCallback:(/*function pointer*/void*)arg7 andTimeout:(double)arg8 ;
+(void)TearDownAccessoryNotification:(_CFUserNotification*)arg1 ;
+(id)GetLocalizedString:(id)arg1 ;
@end

