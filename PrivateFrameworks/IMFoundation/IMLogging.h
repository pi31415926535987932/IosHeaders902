/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMLogging : NSObject
+(id)timeFormatter;
+(id)dateFormatter;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(char)arg4 format:(id)arg5 arguments:(void*)arg6 ;
+(void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(char)arg4 simpleLogString:(id)arg5 format:(id)arg6 arguments:(void*)arg7 time:(unsigned long long)arg8 ;
+(id)logFileDirectory;
+(char)loggingEnabledForLevel:(int)arg1 ;
+(id)stringForDate;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(char)arg4 format:(id)arg5 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(void*)arg5 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(char)arg4 simpleLogString:(id)arg5 time:(unsigned long long)arg6 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(char)arg4 simpleLogString:(id)arg5 ;
+(void)enableConsoleLoggingForLevel:(int)arg1 ;
@end

