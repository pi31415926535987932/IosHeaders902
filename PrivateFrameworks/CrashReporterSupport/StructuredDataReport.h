/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CrashReporterSupport/AppleErrorReport.h>

@class NSString;

@interface StructuredDataReport : AppleErrorReport {

	int _log_type;
	NSString* _raw_logfile;

}
-(void)dealloc;
-(id)appleCareCSVFieldsWithCount:(unsigned)arg1 ;
-(id)reportIdAtDate:(id)arg1 ;
-(int)streamContentAtLevel:(char)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)generateLogAtLevel:(char)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)generateCustomLogAtLevel:(char)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithType:(int)arg1 withFile:(id)arg2 ;
-(id)problemType;
-(id)fileExtension;
-(char)isActionable;
@end

