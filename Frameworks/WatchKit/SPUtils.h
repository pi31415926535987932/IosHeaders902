/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SPUtils : NSObject
+(id)serializeObject:(id)arg1 ;
+(id)localizedStringForSystemLanguage:(id)arg1 fromBundlePath:(id)arg2 ;
+(void)dispatchAsyncToMainThread:(/*^block*/id)arg1 ;
+(void)dispatchSyncToMainThread:(/*^block*/id)arg1 ;
+(id)deserializeObject:(id)arg1 ;
+(id)uniqueNumber;
+(unsigned)userVolumeBlockSize;
+(unsigned long long)folderSizeAtPath:(id)arg1 volumeBlockSize:(unsigned)arg2 ;
+(char)appExtensionFirstUnlock;
+(id)machTime;
+(char)isRunningInF5DemoMode;
+(id)SPURLQueryAllowedCharacterSet;
+(id)companionConnectionClientIdentifier:(char)arg1 ;
+(char)isApplicationCompanionConnectionClientIdentifier:(id)arg1 ;
+(char)isRTL;
@end

