/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BSLaunchdUtilities : NSObject
+(id)allJobLabels;
+(char)stopJobWithLabel:(id)arg1 ;
+(char)startJobWithLabel:(id)arg1 ;
+(id)labelForPID:(int)arg1 ;
+(id)currentJobLabel;
+(unsigned long long)lastExitReasonForLabel:(id)arg1 ;
+(void)deleteJobWithLabel:(id)arg1 ;
+(void)deleteAllJobsWithLabelPrefix:(id)arg1 ;
+(char)createJobWithLabel:(id)arg1 bundleIdentifier:(id)arg2 path:(id)arg3 containerPath:(id)arg4 arguments:(id)arg5 environment:(id)arg6 standardOutputPath:(id)arg7 standardErrorPath:(id)arg8 machServices:(id)arg9 threadPriority:(long long)arg10 waitForDebugger:(char)arg11 denyCreatingOtherJobs:(char)arg12 runAtLoad:(char)arg13 disableASLR:(char)arg14 systemApp:(char)arg15 ;
+(int)pidForLabel:(id)arg1 ;
@end

