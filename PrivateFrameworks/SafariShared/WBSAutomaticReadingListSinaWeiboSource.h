/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListSinaWeiboSource : WBSAutomaticReadingListSocialSource
+(id)sharedSource;
-(id)serviceName;
-(Class)itemClass;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(int)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(int)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2 ;
-(int)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(int)compareItem:(id)arg1 toItem:(id)arg2 ;
@end

