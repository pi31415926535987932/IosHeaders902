/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <softwarebehaviorservicesd/softwarebehaviorservicesd-Structs.h>
@interface SBUtility : NSObject
+(id)currentHardwareModel;
+(dispatch_queue_sRef)taskQueue;
+(id)currentProductVersion;
+(id)currentProductBuild;
+(id)currentProductType;
+(id)currentReleaseType;
+(char)isDaemon;
+(void)setIsDaemon:(char)arg1 ;
+(char)isWiFiCapable;
+(char)hasCellularRadio;
+(id)currentProductCategory;
+(char)hasEnoughDiskSpace:(unsigned long long)arg1 ;
+(id)URLIfFileExists:(id)arg1 ;
+(id)addToDate:(id)arg1 numberOfDays:(int)arg2 ;
+(id)prettyPrintDate:(id)arg1 ;
+(id)serialNumber;
+(id)gregorianCalendar;
@end

