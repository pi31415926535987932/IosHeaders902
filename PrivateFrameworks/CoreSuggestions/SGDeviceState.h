/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SGDeviceState : NSObject
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 ;
+(char)isClassCLocked;
+(char)isDeviceFormattedForProtection;
+(char)isConstrainedDevice;
+(void)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(int)lockState;
+(id)currentOsBuild;
+(char)isUnlocked;
@end

